/*
 * XREFs of sub_14066AC1C @ 0x14066AC1C
 * Callers:
 *     sub_14066AA00 @ 0x14066AA00 (sub_14066AA00.c)
 * Callees:
 *     sub_14066B204 @ 0x14066B204 (sub_14066B204.c)
 */

__int64 __fastcall sub_14066AC1C(__int64 a1, __int64 a2, unsigned int *a3, int a4, _DWORD *a5)
{
  unsigned int v7; // eax
  __int64 v8; // rcx
  char v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  _QWORD v15[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-28h]
  _DWORD v17[6]; // [rsp+60h] [rbp-18h] BYREF

  v15[0] = 0LL;
  *(_QWORD *)&v16 = 0LL;
  v17[0] = 0;
  if ( a4 != 20 )
    return 3221225476LL;
  v7 = *a3;
  LODWORD(v16) = *a3;
  v8 = *(_QWORD *)(a2 + 152);
  if ( !v8 || v7 >= *(_DWORD *)(v8 + 4) )
    return 3221225480LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v10 = 48LL * (unsigned int)v16;
  if ( (*(_DWORD *)(v10 + v8) & *(_DWORD *)(a1 + 320)) == 0 )
    return 3221225508LL;
  v11 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    v11 = *(_QWORD *)(a1 + 24);
  if ( !v11 )
    return 3221225506LL;
  HIDWORD(v16) = *(_DWORD *)(v10 + v8);
  v12 = v10 + v8 + 8;
  LOBYTE(v10) = v9;
  v13 = sub_14066B204(v12, v11, v10, v15, v17);
  DWORD2(v16) = v15[0];
  if ( v13 >= 0 )
  {
    *(_OWORD *)a3 = v16;
    a3[4] = v17[0];
    if ( a5 )
      *a5 = 20;
  }
  return (unsigned int)v13;
}
