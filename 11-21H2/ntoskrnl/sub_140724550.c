/*
 * XREFs of sub_140724550 @ 0x140724550
 * Callers:
 *     sub_140659D50 @ 0x140659D50 (sub_140659D50.c)
 *     sub_14072295C @ 0x14072295C (sub_14072295C.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     sub_1402A47B0 @ 0x1402A47B0 (sub_1402A47B0.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 *     RtlQueryInformationAcl @ 0x140724B00 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     ObSetSecurityObjectByPointer @ 0x140724D30 (ObSetSecurityObjectByPointer.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140724550(__int64 a1, int a2, _WORD *a3)
{
  __int64 result; // rax
  char *v6; // rsi
  NTSTATUS Acl; // ebp
  __int16 v8; // cx
  __int64 v9; // rax
  ACL *v10; // rdi
  volatile signed __int64 *v11; // rsi
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  bool v14; // zf
  signed __int64 v15; // rtt
  ULONG v16; // eax
  int v17; // r13d
  ULONG v18; // ebp
  ACL *Pool2; // rax
  ACL *v20; // r15
  ULONG v21; // ebx
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v23; // rdi
  volatile signed __int64 *v24; // rbx
  signed __int64 v25; // rcx
  bool v26; // cc
  signed __int64 v27; // rcx
  volatile signed __int64 *i; // rdx
  _BYTE v29[4]; // [rsp+30h] [rbp-98h] BYREF
  ULONG AclRevision; // [rsp+34h] [rbp-94h] BYREF
  int v31; // [rsp+38h] [rbp-90h]
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v35; // [rsp+70h] [rbp-58h]
  __int64 AclInformation; // [rsp+78h] [rbp-50h] BYREF
  int v37; // [rsp+80h] [rbp-48h]

  v31 = a2;
  AclInformation = 0LL;
  v37 = 0;
  P = 0LL;
  v29[0] = 0;
  Ace = 0LL;
  AclRevision = 0;
  v35 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = sub_1407248C0(a1, &P, v29, 0LL);
  v6 = (char *)P;
  Acl = result;
  if ( (int)result >= 0 )
  {
    if ( !P )
      return result;
    v8 = *((_WORD *)P + 1);
    if ( (v8 & 4) != 0 )
    {
      if ( v8 >= 0 )
      {
        v10 = (ACL *)*((_QWORD *)P + 4);
        goto LABEL_7;
      }
      v9 = *((unsigned int *)P + 4);
      if ( (_DWORD)v9 )
      {
        v10 = (ACL *)((char *)P + v9);
LABEL_7:
        if ( v10 )
        {
          if ( !sub_1402A47B0((__int64)v10, a3, 0LL) )
          {
            Acl = RtlQueryInformationAcl(v10, &AclInformation, 0xCu, AclSizeInformation);
            if ( Acl >= 0 )
            {
              Acl = RtlQueryInformationAcl(v10, &AclRevision, 4u, AclRevisionInformation);
              if ( Acl >= 0 )
              {
                v16 = RtlLengthSid(a3);
                v17 = HIDWORD(AclInformation);
                v18 = (v16 + HIDWORD(AclInformation) + 11) & 0xFFFFFFFC;
                Pool2 = (ACL *)ExAllocatePool2(256LL, v18, 1665230163LL);
                v20 = Pool2;
                if ( Pool2 )
                {
                  v21 = AclRevision;
                  Acl = RtlCreateAcl(Pool2, v18, AclRevision);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlGetAce(v10, 0, &Ace);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlAddAce(v20, v21, 0, Ace, v17 - 8);
                      if ( Acl >= 0 )
                      {
                        Acl = sub_1407B4900((int)v20, v21, 0, v31, a3, 0);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v20, 0);
                            if ( Acl >= 0 )
                              Acl = ObSetSecurityObjectByPointer(a1, 4LL, SecurityDescriptor);
                          }
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v20, 0);
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v6 )
  {
    if ( v29[0] )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v11 = (volatile signed __int64 *)(v6 - 32);
      _m_prefetchw((const void *)(v11 + 1));
      v12 = *((_QWORD *)v11 + 1);
      v13 = v12 - 1;
      v14 = v12 == 1;
      if ( v12 - 1 <= 0 )
      {
LABEL_26:
        if ( !v14 )
          __fastfail(0xEu);
        CurrentThread = KeGetCurrentThread();
        v23 = (volatile signed __int64 *)((char *)&unk_140D33BC0 + 16 * (unsigned __int8)*((_DWORD *)v11 + 4));
        --*((_WORD *)CurrentThread + 242);
        v24 = v23 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v23, 0LL);
        v25 = _InterlockedExchangeAdd64(v11 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v26 = v25 <= 1;
        v27 = v25 - 1;
        if ( v26 )
        {
          if ( v27 )
            __fastfail(0xEu);
          for ( i = (volatile signed __int64 *)*v24; i != v11; i = (volatile signed __int64 *)*i )
            v24 = i;
          *v24 = *v11;
          if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v23);
          sub_1402AFC00((ULONG_PTR)v23);
          sub_1402AC800((__int64)CurrentThread);
          ExFreePoolWithTag((PVOID)v11, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v23);
          sub_1402AFC00((ULONG_PTR)v23);
          sub_1402AC800((__int64)CurrentThread);
        }
      }
      else
      {
        while ( 1 )
        {
          v15 = v12;
          v12 = _InterlockedCompareExchange64(v11 + 1, v13, v12);
          if ( v15 == v12 )
            break;
          v13 = v12 - 1;
          v14 = v12 == 1;
          if ( v12 - 1 <= 0 )
            goto LABEL_26;
        }
      }
    }
  }
  return (unsigned int)Acl;
}
