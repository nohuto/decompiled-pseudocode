/*
 * XREFs of sub_1800B2760 @ 0x1800B2760
 * Callers:
 *     sub_1800B3180 @ 0x1800B3180 (sub_1800B3180.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B2760(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = *a1;
  v7 = *(_QWORD *)(v6 + 8);
  *(_QWORD *)&v17 = v7;
  v8 = 0;
  DWORD2(v17) = 0;
  v9 = v6;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v10 = *a3;
    do
    {
      *(_QWORD *)&v17 = v7;
      if ( *(_QWORD *)(v7 + 32) >= v10 )
      {
        DWORD2(v17) = 1;
        v9 = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        DWORD2(v17) = 0;
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_QWORD *)(v9 + 32) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001F56C();
    v18 = v6;
    v16 = (unsigned __int64)a1;
    v11 = (__int64 *)sub_180011088(0x28uLL);
    v11[4] = *a3;
    sub_18001DE7C(v11, &v18);
    sub_18001DE7C((__int64 *)(v12 + 8), &v18);
    sub_18001DE7C((__int64 *)(v13 + 16), &v18);
    *(_WORD *)(v14 + 24) = 0;
    v16 = v17;
    v9 = sub_18001F31C(a1, (__int64)&v16, v14);
    v8 = 1;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = v8;
  return a2;
}
