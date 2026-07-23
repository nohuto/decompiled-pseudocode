/*
 * XREFs of sub_1403868E8 @ 0x1403868E8
 * Callers:
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 * Callees:
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_1403868E8(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 248);
  _bittestandreset(*(signed __int32 **)(*(_QWORD *)(a1 + 112) + 32LL), a2);
  if ( ++*(_DWORD *)(a1 + 200) == 256 )
    return KeSetEvent((PRKEVENT)(v2 + 1216), 0, 0);
  result = sub_140285380(v2, 0xA0uLL);
  if ( !result )
    return KeSetEvent((PRKEVENT)(v2 + 1216), 0, 0);
  return result;
}
