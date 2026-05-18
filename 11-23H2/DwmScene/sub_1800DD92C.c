/*
 * XREFs of sub_1800DD92C @ 0x1800DD92C
 * Callers:
 *     sub_1800DE4F0 @ 0x1800DE4F0 (sub_1800DE4F0.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DD92C(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rdx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  *(_QWORD *)&v14 = v7;
  DWORD2(v14) = 0;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v14 = v7;
      if ( *((_DWORD *)v7 + 8) >= v9 )
      {
        DWORD2(v14) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v14) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 8) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001DDFC();
    *(_QWORD *)&v13 = a1;
    v10 = sub_18001C190();
    *(_DWORD *)(v10 + 32) = *a3;
    *(_QWORD *)(v10 + 96) = 0LL;
    *(_QWORD *)v10 = v6;
    *(_QWORD *)(v10 + 8) = v6;
    *(_QWORD *)(v10 + 16) = v6;
    *(_WORD *)(v10 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_180052818((__int64)&v13, v11);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v13, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
