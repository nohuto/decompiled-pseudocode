/*
 * XREFs of sub_140A6E0A0 @ 0x140A6E0A0
 * Callers:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140A90090 @ 0x140A90090 (sub_140A90090.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A6E0A0(__int64 a1, int a2, int *a3, _BYTE *a4, _BYTE *a5)
{
  int v5; // r11d
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  int v12; // ecx

  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( (a1 & 0xFFFFF800) != 0 )
    return 3221225485LL;
  v7 = a1 & 0x10;
  if ( v7 )
  {
    if ( !a2 )
      return 3221225485LL;
  }
  v8 = a1 & 0x1C0;
  if ( v8 == 64 )
  {
    v5 = 512;
  }
  else if ( v8 != 128 )
  {
    if ( v8 != 256 )
      return 3221225485LL;
    v5 = -2147483647;
    if ( !v7 )
      v5 = 1;
  }
  v9 = v5 | 0x20;
  if ( (a1 & 4) == 0 )
    v9 = v5;
  v10 = v9 | 0x400;
  if ( (a1 & 2) != 0 )
    v10 = v9;
  if ( (a1 & 0x100000629LL) != 0 )
  {
    v12 = v10 | 4;
    if ( (a1 & 8) == 0 )
      v12 = v10;
    v10 = v12;
    if ( (a1 & 0x200) != 0 )
      v10 = v12 | 0x80;
    if ( (a1 & 0x400) != 0 )
      v10 |= 0x40u;
    if ( (a1 & 1) != 0 )
    {
      *a4 = 1;
      if ( (a1 & 0x20) == 0 )
        v10 |= 8u;
    }
    else if ( (a1 & 0x20) != 0 )
    {
      v10 |= 0x10u;
    }
    if ( (a1 & 0x100000000LL) != 0 )
      *a5 = 1;
  }
  *a3 = v10;
  return 0LL;
}
