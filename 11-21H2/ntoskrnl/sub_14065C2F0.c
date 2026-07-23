/*
 * XREFs of sub_14065C2F0 @ 0x14065C2F0
 * Callers:
 *     sub_14065BF3C @ 0x14065BF3C (sub_14065BF3C.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 * Callees:
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F45C @ 0x14069F45C (sub_14069F45C.c)
 */

__int64 __fastcall sub_14065C2F0(__int16 *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v6; // r10
  _QWORD *v7; // rax
  __int16 v8; // r9
  int v9; // eax
  _QWORD *v10; // r11
  __int64 result; // rax

  v6 = 0LL;
  if ( *a1 >= 0 )
  {
    do
    {
      v7 = (_QWORD *)sub_14069F1CC(a1);
      if ( v7[2] )
      {
        v9 = sub_14069F45C(*v7);
        if ( v9 == 1 )
          break;
        v6 = v10;
        if ( v9 )
          break;
      }
    }
    while ( (__int16)(v8 - 1) >= 0 );
  }
  *a2 = *v6;
  result = v6[2];
  *a3 = *(_DWORD *)(result + 44);
  return result;
}
