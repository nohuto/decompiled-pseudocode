/*
 * XREFs of sub_1406988E0 @ 0x1406988E0
 * Callers:
 *     sub_1406987CC @ 0x1406987CC (sub_1406987CC.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406989E4 @ 0x1406989E4 (sub_1406989E4.c)
 *     sub_140699288 @ 0x140699288 (sub_140699288.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 */

__int64 __fastcall sub_1406988E0(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  __int64 v9; // rsi
  __int64 v13; // rdi
  int v14; // ebp
  int v15; // ebx
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  v9 = a4;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  v13 = a6;
  if ( a6 )
  {
    v14 = a7;
    v13 = -(__int64)(a7 != 0) & a6;
  }
  else
  {
    v14 = 0;
  }
  *a8 = 0;
  v15 = sub_1406989E4(a1, a2, a3, a4, a5, v13, v14, (__int64)a8, a9);
  if ( v15 == -1073741802 )
  {
    if ( v9 )
    {
LABEL_6:
      v15 = sub_140699288(a1, v9, a5, v13, v14, (__int64)a8);
      goto LABEL_7;
    }
    v15 = sub_14077C924(a1, a2, a3, 33554433, 0, (__int64)Handle);
    if ( v15 >= 0 )
    {
      LODWORD(v9) = Handle[0];
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v15;
}
