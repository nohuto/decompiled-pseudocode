/*
 * XREFs of sub_140583D60 @ 0x140583D60
 * Callers:
 *     sub_140583DB8 @ 0x140583DB8 (sub_140583DB8.c)
 *     sub_140583EE0 @ 0x140583EE0 (sub_140583EE0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140583D60(unsigned __int64 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r8

  v3 = a3 & 0xFFFFFFFFFFFFF000uLL;
  if ( a2 )
  {
    if ( a2 == 1 )
      v3 |= 1uLL;
    else
      v3 |= 2uLL;
  }
  *a1 = v3;
}
