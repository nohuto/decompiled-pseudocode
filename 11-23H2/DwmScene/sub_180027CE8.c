/*
 * XREFs of sub_180027CE8 @ 0x180027CE8
 * Callers:
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_180047F10 @ 0x180047F10 (sub_180047F10.c)
 *     sub_1800D05C0 @ 0x1800D05C0 (sub_1800D05C0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_180028034 @ 0x180028034 (sub_180028034.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180027CE8(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  *(_QWORD *)&v13 = v7;
  DWORD2(v13) = 0;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v13 = v7;
      if ( *((_DWORD *)v7 + 8) >= v9 )
      {
        DWORD2(v13) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v13) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 8) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001DDFC();
    v12 = (unsigned __int64)a1;
    v10 = sub_18001090C(0x38uLL);
    *(_DWORD *)(v10 + 32) = *a3;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)v10 = v6;
    *(_QWORD *)(v10 + 8) = v6;
    *(_QWORD *)(v10 + 16) = v6;
    *(_WORD *)(v10 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_180028034(&v12);
    v12 = v13;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v12, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
