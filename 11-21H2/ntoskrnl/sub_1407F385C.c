/*
 * XREFs of sub_1407F385C @ 0x1407F385C
 * Callers:
 *     sub_1407F3718 @ 0x1407F3718 (sub_1407F3718.c)
 * Callees:
 *     sub_14020758C @ 0x14020758C (sub_14020758C.c)
 *     sub_140208434 @ 0x140208434 (sub_140208434.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int sub_1407F385C()
{
  int result; // eax
  ULONG v1; // ebx
  ULONG v2; // edi
  ACL *v3; // rax
  ACL *v4; // rbx
  int Acl; // edi
  ACL *v6; // rcx
  __int64 v7; // rdi
  int v8; // esi
  PRKEVENT v9; // rbx
  struct _KEVENT *v10; // rcx
  int v11; // ebx
  unsigned int v12; // eax
  struct _LIST_ENTRY *v13; // rax
  void *Src; // [rsp+28h] [rbp-E0h]
  PRKEVENT Event; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v17[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+8Ch] [rbp-7Ch]
  _OWORD *v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-38h]
  WCHAR SourceString[128]; // [rsp+D8h] [rbp-30h] BYREF

  v16 = 0LL;
  v17[1] = 0;
  v21 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v26 = 0LL;
  Event = 0LL;
  DestinationString = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v1 = RtlLengthSid(SidToCheck);
    v2 = v1 + RtlLengthSid(Group) + 32;
    v3 = (ACL *)sub_1402828F0(256, v2, 0x6C636144u);
    v4 = v3;
    if ( !v3 )
      return -1073741670;
    Acl = RtlCreateAcl(v3, v2, 2u);
    v6 = v4;
    if ( Acl >= 0 )
    {
      Acl = sub_1407B4900(v4, 2u, 0, 983043, (unsigned __int8 *)SidToCheck, 0);
      v6 = v4;
      if ( Acl >= 0 )
      {
        Acl = sub_1407B4900(v4, 2u, 0, 983043, (unsigned __int8 *)Group, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            v7 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
            v8 = sub_1402E0198(SourceString, 128LL, L"\\KernelObjects\\Session%d", *(unsigned int *)(v7 + 8));
            if ( v8 < 0 )
            {
              ExFreePoolWithTag(v4, 0);
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              p_DestinationString = &DestinationString;
              v17[0] = 48;
              v22 = SecurityDescriptor;
              v18 = 0LL;
              v20 = 512;
              v23 = 0LL;
              v8 = sub_14072B3B0(0, qword_140D06BB0, (int)v17, 0, (__int64)Src, 40, 0, 0, &Event, 0LL);
              ExFreePoolWithTag(v4, 0);
              if ( v8 >= 0 )
              {
                v9 = Event;
                v10 = Event;
                *(_QWORD *)&Event[1].Header.Lock = v7;
                KeInitializeEvent(v10, NotificationEvent, 0);
                v9[1].Header.WaitListHead.Flink = 0LL;
                if ( !byte_140D068E0 || !*(_DWORD *)(v7 + 8) )
                  goto LABEL_10;
                v12 = sub_14020758C();
                v13 = (struct _LIST_ENTRY *)sub_1402828F0(72, v12, 0x70724753u);
                v9[1].Header.WaitListHead.Flink = v13;
                if ( v13 )
                {
                  sub_140208434((__int64)v13, 5LL, 0LL);
LABEL_10:
                  result = sub_140729C30((char *)v9, 0LL, 1, 0, 0, 0LL, &v16);
                  v11 = result;
                  if ( result >= 0 )
                  {
                    *(_DWORD *)(v7 + 4) |= 0x40u;
                    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
                    *(_QWORD *)(v7 + 72) = v16;
                    *(_QWORD *)(v7 + 64) = Event;
                    *(_DWORD *)(v7 + 848) = 2;
                    *(_DWORD *)(v7 + 852) = 1;
                    KeInitializeEvent((PRKEVENT)(v7 + 856), SynchronizationEvent, 1u);
                    return v11;
                  }
                  return result;
                }
                ObfDereferenceObject(v9);
                return -1073741670;
              }
            }
            return v8;
          }
        }
        v6 = v4;
      }
    }
    ExFreePoolWithTag(v6, 0);
    return Acl;
  }
  return result;
}
