/*
 * XREFs of sub_1403A5C24 @ 0x1403A5C24
 * Callers:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1405910C0 @ 0x1405910C0 (sub_1405910C0.c)
 *     sub_140591AD0 @ 0x140591AD0 (sub_140591AD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A5C24(char a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 0;
  if ( !a1 )
    return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4199) + 12488LL) + 128LL) >> 30) & 1;
  if ( !word_140D05000 )
    return 0LL;
  for ( i = qword_140C506E0 + 112; (*(_DWORD *)(*(_QWORD *)i + 128LL) & 0x40000000) == 0; i += 120LL )
  {
    if ( ++v1 >= (unsigned int)(unsigned __int16)word_140D05000 )
      return 0LL;
  }
  return 1LL;
}
