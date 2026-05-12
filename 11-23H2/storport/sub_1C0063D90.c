/*
 * XREFs of sub_1C0063D90 @ 0x1C0063D90
 * Callers:
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C00A69E4 @ 0x1C00A69E4 (sub_1C00A69E4.c)
 * Callees:
 *     sub_1C00AA780 @ 0x1C00AA780 (sub_1C00AA780.c)
 */

__int64 __fastcall sub_1C0063D90(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ecx
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // r9
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v6 = 0;
  if ( !a1 )
    return 3221225473LL;
  v8 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a2 + 184) )
    goto LABEL_12;
  v9 = *(_QWORD *)(a1 + 4224);
  if ( !v9 )
  {
    if ( *(_DWORD *)(a1 + 784) == 3 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
        v9 = *(_QWORD *)(a1 + 4256);
      else
        LODWORD(v9) = -1;
    }
    else
    {
      LODWORD(v9) = -1;
    }
  }
  result = sub_1C00AA780(
             (int)a1 + 760,
             a3,
             *(_QWORD *)(a1 + 4232),
             v9,
             *(_QWORD *)(a1 + 4240),
             *(_DWORD *)(a1 + 4216),
             0x80000000,
             (__int64)&v10);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v8 = v11;
LABEL_12:
    *(_OWORD *)(a2 + 168) = v10;
    result = v6;
    *(_DWORD *)(a2 + 184) = v8;
  }
  return result;
}
