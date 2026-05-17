/*
 * XREFs of RtlpFreeAllAtom @ 0x1800034BC
 * Callers:
 *     RtlpDereferenceAtom @ 0x180003E50 (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlpFreeHandleForAtom @ 0x180003468 (RtlpFreeHandleForAtom.c)
 *     RtlpHashStringToAtom @ 0x180003960 (RtlpHashStringToAtom.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeAllAtom(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = a1;
  result = RtlpHashStringToAtom(a2, (char *)a1 + 18, a3, &v7, 0LL, &v8, &v6);
  if ( (int)result >= 0 )
  {
    v5 = (__int64)v6;
    if ( v6 )
    {
      if ( v7 )
        *v7 = *v6;
      RtlpFreeHandleForAtom(a2, v5);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
    }
  }
  return result;
}
