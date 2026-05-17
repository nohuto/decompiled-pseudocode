/*
 * XREFs of RtlCreateUserSecurityObject @ 0x1800E2F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAndSetSD @ 0x18000B740 (RtlCreateAndSetSD.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlCreateUserSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  void *ProcessHeap; // rdi
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 v10[3]; // [rsp+50h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(a1, a2, a3, a4, v10);
  if ( (int)result >= 0 )
  {
    v9 = RtlpNewSecurityObject(0LL, (_BYTE *)v10[0], a7, 0LL, 0, a5, 0, (void *)0xFFFFFFFFFFFFFFFCLL, a6);
    RtlFreeHeap((__int64)ProcessHeap, 0, v10[0]);
    return v9;
  }
  return result;
}
