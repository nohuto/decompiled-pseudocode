/*
 * XREFs of sub_14077A4D4 @ 0x14077A4D4
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077A710 @ 0x14077A710 (sub_14077A710.c)
 *     sub_14077AF18 @ 0x14077AF18 (sub_14077AF18.c)
 */

__int64 __fastcall sub_14077A4D4(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, __int64 a6, _DWORD *a7)
{
  __int64 v7; // rbx
  int v8; // edx
  int v10; // eax
  int v11; // r8d
  int v12; // r10d
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v19[4]; // [rsp+54h] [rbp-4Dh] BYREF
  int v20[6]; // [rsp+58h] [rbp-49h] BYREF
  _OWORD v21[4]; // [rsp+70h] [rbp-31h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+Fh]
  int v23; // [rsp+B8h] [rbp+17h]
  __int16 v24; // [rsp+BCh] [rbp+1Bh]

  v7 = a6;
  v18 = 0;
  v8 = -1073741802;
  *(_OWORD *)v20 = 0LL;
  if ( a6 )
    v7 = -(__int64)(*a7 != 0) & a6;
  else
    *a7 = 0;
  if ( a4 == 9 && a1 == 1 )
  {
    v10 = sub_14077A710(1LL);
    v8 = sub_14077AF18(v10, v12, v11, 0, (__int64)&stru_140010A18, (__int64)v19, (__int64)v20, 16, (__int64)&v18);
    if ( v8 >= 0 )
    {
      *a5 = 1;
      if ( *a7 < 0x4Eu )
      {
        *a7 = 78;
        return (unsigned int)-1073741789;
      }
      else
      {
        v8 = sub_140773030(v20, v21);
        if ( v8 >= 0 )
        {
          v13 = v21[0];
          v14 = v21[1];
          v15 = v23;
          *a7 = 78;
          *(_OWORD *)v7 = v13;
          v16 = v21[2];
          *(_OWORD *)(v7 + 16) = v14;
          v17 = v21[3];
          *(_OWORD *)(v7 + 32) = v16;
          *(_QWORD *)&v16 = v22;
          *(_OWORD *)(v7 + 48) = v17;
          *(_QWORD *)(v7 + 64) = v16;
          *(_DWORD *)(v7 + 72) = v15;
          *(_WORD *)(v7 + 76) = v24;
        }
      }
    }
  }
  return (unsigned int)v8;
}
