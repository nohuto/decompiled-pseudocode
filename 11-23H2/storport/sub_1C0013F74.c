/*
 * XREFs of sub_1C0013F74 @ 0x1C0013F74
 * Callers:
 *     sub_1C000E38C @ 0x1C000E38C (sub_1C000E38C.c)
 *     sub_1C00692DC @ 0x1C00692DC (sub_1C00692DC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1C0013F74(__int16 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = ((a1 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL) | 0x20;
  if ( (a1 & 2) == 0 )
    v4 = (a1 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL;
  v5 = v4 | 0x100000000LL;
  if ( (a1 & 4) == 0 )
    v5 = v4;
  v6 = v5 | 0x400000000LL;
  if ( (a1 & 8) == 0 )
    v6 = v5;
  v7 = v6 | 0x80;
  if ( (a1 & 0x10) == 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (a1 & 0x20) == 0 )
    v8 = v7;
  v9 = v8 | 0x8000000;
  if ( (a1 & 0x40) == 0 )
    v9 = v8;
  v10 = v9 | 0x400;
  if ( (a1 & 0x80u) == 0 )
    v10 = v9;
  v11 = v10 | 0x800;
  if ( (a1 & 0x100) == 0 )
    v11 = v10;
  return a2 & 0xFF00000000000000uLL | v11;
}
