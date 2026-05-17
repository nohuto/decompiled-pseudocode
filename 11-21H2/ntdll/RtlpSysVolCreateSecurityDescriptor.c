/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x180071758
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180071520 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlCreateAcl @ 0x180010E90 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpAddKnownAce @ 0x180047FD8 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18004D6E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18004D750 (RtlCreateSecurityDescriptor.c)
 *     RtlSetControlSecurityDescriptor @ 0x180071C90 (RtlSetControlSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(__int64 *a1, char **a2)
{
  __int64 Heap; // rax
  __int64 v5; // rsi
  int SecurityDescriptor; // ebx
  void *ProcessHeap; // rcx
  __int64 v8; // rax
  char *v9; // rdi
  __int64 v10; // r8
  __int64 result; // rax
  __int16 Src; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+32h] [rbp-36h]
  __int16 v14; // [rsp+36h] [rbp-32h]
  int v15; // [rsp+38h] [rbp-30h]

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v5 = Heap;
  if ( !Heap )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(Heap, 1);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( SecurityDescriptor >= 0 )
  {
    v13 = 0;
    v14 = 1280;
    Src = 257;
    v15 = 18;
    v8 = RtlAllocateHeap((__int64)ProcessHeap, 0, 28LL);
    v9 = (char *)v8;
    if ( !v8 )
    {
      SecurityDescriptor = -1073741670;
      goto LABEL_12;
    }
    SecurityDescriptor = RtlCreateAcl(v8, 0x1Cu, 2);
    if ( SecurityDescriptor >= 0 )
    {
      SecurityDescriptor = RtlpAddKnownAce(v9, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Src, 0);
      v10 = (__int64)v9;
      if ( SecurityDescriptor < 0 )
      {
LABEL_11:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
LABEL_12:
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        goto LABEL_13;
      }
      SecurityDescriptor = RtlSetDaclSecurityDescriptor(v5, 1, (__int64)v9, 0);
      if ( SecurityDescriptor >= 0 )
      {
        SecurityDescriptor = RtlSetControlSecurityDescriptor(v5, 4096LL, 4096LL);
        if ( SecurityDescriptor >= 0 )
        {
          *a1 = v5;
          result = 0LL;
          *a2 = v9;
          return result;
        }
      }
    }
    v10 = (__int64)v9;
    goto LABEL_11;
  }
LABEL_13:
  RtlFreeHeap((__int64)ProcessHeap, 0, v5);
  return (unsigned int)SecurityDescriptor;
}
