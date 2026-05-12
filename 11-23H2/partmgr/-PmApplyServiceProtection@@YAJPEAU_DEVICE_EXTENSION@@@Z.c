/*
 * XREFs of ?PmApplyServiceProtection@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0026414
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmApplyServiceProtection(struct _DEVICE_EXTENSION *a1)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  struct _ACL *Pool2; // rax
  struct _ACL *v6; // rdi
  NTSTATUS Acl; // ebx
  ULONG v8; // ebx
  struct _ACL *v9; // rax
  struct _ACL *v10; // rsi
  __int128 SecurityDescriptor; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  SecurityDescriptor = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v2 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v3 = RtlLengthSid(SeExports->SeAliasAdminsSid) + v2;
  v4 = RtlLengthSid(SeExports->SeLocalSystemSid) + 32 + v3;
  Pool2 = (struct _ACL *)ExAllocatePool2(258LL, v4, 1128361296LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v4, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v6, 2u, 0x80000000, SeExports->SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v6, 2u, 0x80000000, SeExports->SeUserModeDriversSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v6, 2u, 0x80000000, SeExports->SeAliasAdminsSid);
          if ( Acl >= 0 )
          {
            v8 = RtlLengthSid(SeExports->SeProcTrustWinTcbSid) + 16;
            v9 = (struct _ACL *)ExAllocatePool2(258LL, v8, 1128361296LL);
            v10 = v9;
            if ( v9 )
            {
              Acl = RtlCreateAcl(v9, v8, 2u);
              if ( Acl >= 0 )
              {
                Acl = RtlAddProcessTrustLabelAce(
                        v10,
                        2LL,
                        0LL,
                        SeExports->SeProcTrustWinTcbSid,
                        20,
                        1179785,
                        SecurityDescriptor,
                        *((_QWORD *)&SecurityDescriptor + 1),
                        v13,
                        *((_QWORD *)&v13 + 1),
                        v14);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(&SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(&SecurityDescriptor, 1u, v6, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetSaclSecurityDescriptor(&SecurityDescriptor, 1u, v10, 0);
                      if ( Acl >= 0 )
                      {
                        Acl = ObSetSecurityObjectByPointer(*((_QWORD *)a1 + 1), 132LL, &SecurityDescriptor);
                        *(_DWORD *)(*((_QWORD *)a1 + 1) + 52LL) |= 0x100u;
                      }
                    }
                  }
                }
              }
              ExFreePoolWithTag(v10, 0);
            }
            else
            {
              Acl = -1073741670;
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
