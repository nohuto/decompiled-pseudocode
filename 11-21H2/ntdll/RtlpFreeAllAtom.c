/*
 * XREFs of RtlpFreeAllAtom @ 0x180062458
 * Callers:
 *     RtlpDereferenceAtom @ 0x180062618 (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpFreeHandleForAtom @ 0x1800624D8 (RtlpFreeHandleForAtom.c)
 *     RtlpHashStringToAtom @ 0x1800629D0 (RtlpHashStringToAtom.c)
 */

__int64 __fastcall RtlpFreeAllAtom(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v5 = a1;
  result = RtlpHashStringToAtom(a2, (char *)a1 + 18, a3, &v6, 0LL, &v7, &v5);
  if ( (int)result >= 0 && v5 )
  {
    if ( v6 )
      *v6 = *v5;
    RtlpFreeHandleForAtom(a2);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v5);
  }
  return result;
}
