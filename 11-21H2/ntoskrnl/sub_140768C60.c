/*
 * XREFs of sub_140768C60 @ 0x140768C60
 * Callers:
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 * Callees:
 *     sub_14076A8FC @ 0x14076A8FC (sub_14076A8FC.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall sub_140768C60(__int64 a1, __int64 a2, int a3, _QWORD *a4, _BYTE *a5, __int16 a6)
{
  int v9; // ebx
  _DWORD v11[6]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = sub_14077F2EC(a1, a2, 16, 0, a3, 1, (__int64)a4, (__int64)v11);
    if ( v9 >= 0 )
    {
      if ( v11[0] == 1 )
      {
        *a5 = 1;
        sub_14076A8FC(a1, a2, 1LL, *a4);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v9;
}
