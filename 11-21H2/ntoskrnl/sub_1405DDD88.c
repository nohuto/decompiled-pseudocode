/*
 * XREFs of sub_1405DDD88 @ 0x1405DDD88
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CC3A0 @ 0x1405CC3A0 (sub_1405CC3A0.c)
 */

LONG __fastcall sub_1405DDD88(ULONG_PTR BugCheckParameter2, int *a2)
{
  LONG result; // eax
  __int64 v5; // rdx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  HIDWORD(v6[0]) = 0;
  result = sub_1405CC3A0((__int64 *)BugCheckParameter2);
  if ( result >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      sub_1405CAE6C(0x668uLL, BugCheckParameter2, *a2, 0LL);
    v6[1] = *((_QWORD *)&xmmword_140C1C960 + 1);
    v6[0] = 0LL;
    v6[2] = 0LL;
    v6[3] = a2;
    sub_14042A5E0(v6, v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 276), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 280), 0, 0);
  }
  return result;
}
