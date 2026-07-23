/*
 * XREFs of sub_1403B5D40 @ 0x1403B5D40
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B5D40(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( (a4 & 0xFFF00FFF) != 0 )
    return 3221225485LL;
  KeStallExecutionProcessor(0xC8u);
  sub_14042A5E0(v7, v6);
  if ( !byte_140D011A2 )
    a2 <<= 24;
  sub_14042A5E0(a2, 50432LL);
  KeStallExecutionProcessor(0xAu);
  sub_14042A5E0(a2, 34048LL);
  KeStallExecutionProcessor(0xC8u);
  v8 = (a4 & 0xFF000 | 0x600000u) >> 12;
  sub_14042A5E0(a2, v8);
  KeStallExecutionProcessor(0xC8u);
  sub_14042A5E0(v10, v9);
  KeStallExecutionProcessor(0x64u);
  sub_14042A5E0(a2, v8);
  KeStallExecutionProcessor(0xC8u);
  return 0LL;
}
