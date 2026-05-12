/*
 * XREFs of StorEtwMiniportGetKeyword @ 0x1C0019C20
 * Callers:
 *     StorEtwMiniportEvent @ 0x1C0019528 (StorEtwMiniportEvent.c)
 *     StorEtwMiniportLogByteStream @ 0x1C005BA78 (StorEtwMiniportLogByteStream.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall StorEtwMiniportGetKeyword(__int16 a1, __int64 a2)
{
  __int64 v4; // r9
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  v4 = ((a1 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL) | 0x20;
  v5 = a1;
  if ( (a1 & 2) == 0 )
    v4 = (a1 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL;
  v6 = v4 | 0x100000000LL;
  if ( (v5 & 4) == 0 )
    v6 = v4;
  v7 = v6 | 0x400000000LL;
  if ( (a1 & 8) == 0 )
    v7 = v6;
  v8 = v7 | 0x80;
  if ( (a1 & 0x10) == 0 )
    v8 = v7;
  v9 = v8 | 0x200;
  if ( (a1 & 0x20) == 0 )
    v9 = v8;
  v10 = v9 | 0x8000000;
  if ( (a1 & 0x40) == 0 )
    v10 = v9;
  v11 = v10 | 0x400;
  if ( (a1 & 0x80) == 0 )
    v11 = v10;
  v12 = v11 | 0x800;
  if ( (a1 & 0x100) == 0 )
    v12 = v11;
  return a2 & 0xFF00000000000000uLL | v12;
}
