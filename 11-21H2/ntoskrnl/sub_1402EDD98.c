/*
 * XREFs of sub_1402EDD98 @ 0x1402EDD98
 * Callers:
 *     sub_14079E7C0 @ 0x14079E7C0 (sub_14079E7C0.c)
 *     sub_1407BEBF0 @ 0x1407BEBF0 (sub_1407BEBF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402EDD98(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r10d
  int v4; // eax
  _DWORD *v5; // r9

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( a3 != 16 )
  {
    switch ( a3 )
    {
      case 8:
        v4 = 0x20000000;
        if ( a1 != a2 )
          v4 = 0x10000000;
        break;
      case 32:
        v4 = 0x2000000;
        goto LABEL_3;
      case 2:
        v4 = 0x100000;
        break;
      case 2048:
        v4 = 0x80000;
        break;
      default:
        goto LABEL_4;
    }
    v5 = (_DWORD *)(a2 + 2172);
    goto LABEL_4;
  }
  v4 = 0x1000000;
LABEL_3:
  v5 = (_DWORD *)(a2 + 1120);
LABEL_4:
  LOBYTE(v3) = (v4 & *v5) != 0;
  return v3;
}
