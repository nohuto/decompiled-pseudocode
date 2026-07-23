/*
 * XREFs of sub_140565C74 @ 0x140565C74
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140565C74(int a1, int a2, int a3, unsigned __int16 a4, _BYTE *a5, int a6, _DWORD *a7)
{
  unsigned int v7; // r10d
  unsigned __int32 v8; // eax
  unsigned __int16 v9; // ax
  unsigned __int8 v10; // al

  v7 = 0;
  if ( a1 == 1 && !a2 && a3 == 1 )
  {
    switch ( a6 )
    {
      case 1:
        v10 = __inbyte(a4);
        *a5 = v10;
        *a7 = 1;
        return v7;
      case 2:
        if ( (a4 & 1) == 0 )
        {
          v9 = __inword(a4);
          *(_WORD *)a5 = v9;
          *a7 = 2;
          return v7;
        }
        break;
      case 4:
        if ( (a4 & 3) == 0 )
        {
          v8 = __indword(a4);
          *(_DWORD *)a5 = v8;
          *a7 = 4;
          return v7;
        }
        break;
      default:
        v7 = -1073741811;
        *a7 = 0;
        return v7;
    }
    return (unsigned int)-2147483646;
  }
  *a7 = 0;
  return 3221225473LL;
}
