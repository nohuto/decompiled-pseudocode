/*
 * XREFs of RtlpFreeAllAtom @ 0x1800034BC
 * Callers:
 *     RtlpDereferenceAtom @ 0x180003E50 (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlpFreeHandleForAtom @ 0x180003468 (RtlpFreeHandleForAtom.c)
 *     RtlpHashStringToAtom @ 0x180003960 (RtlpHashStringToAtom.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

signed int __fastcall RtlpFreeAllAtom(char *a1, __int64 a2, __int64 a3)
{
  signed int result; // eax
  PVOID v5; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = a1;
  result = RtlpHashStringToAtom(a2, a1 + 18, a3, &v7, 0LL, &v8, &BaseAddress);
  if ( result >= 0 )
  {
    v5 = BaseAddress;
    if ( BaseAddress )
    {
      if ( v7 )
        *v7 = *(_QWORD *)BaseAddress;
      RtlpFreeHandleForAtom(a2, (__int64)v5);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
  }
  return result;
}
