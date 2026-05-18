/*
 * XREFs of sub_180059C38 @ 0x180059C38
 * Callers:
 *     sub_18005A8D0 @ 0x18005A8D0 (sub_18005A8D0.c)
 *     sub_1800DC2D0 @ 0x1800DC2D0 (sub_1800DC2D0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180059B30 @ 0x180059B30 (sub_180059B30.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180059C38(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)&v12 = v5;
  DWORD2(v12) = 0;
  v6 = v4;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      *(_QWORD *)&v12 = v5;
      if ( *(_QWORD *)(v5 + 32) >= v7 )
      {
        DWORD2(v12) = 1;
        v6 = v5;
        v5 = *(_QWORD *)v5;
      }
      else
      {
        DWORD2(v12) = 0;
        v5 = *(_QWORD *)(v5 + 16);
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a2 < *(_QWORD *)(v6 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001F56C();
    v13 = v4;
    v11 = (unsigned __int64)a1;
    v8 = sub_180011088(0x68uLL);
    *(_QWORD *)(v8 + 32) = *a2;
    *(_QWORD *)(v8 + 96) = 0LL;
    sub_18001DE7C((__int64 *)v8, &v13);
    sub_18001DE7C((__int64 *)(v8 + 8), &v13);
    sub_18001DE7C((__int64 *)(v8 + 16), &v13);
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180059B30((__int64)&v11, v9);
    v11 = v12;
    v6 = sub_18001F31C(a1, (__int64)&v11, v8);
  }
  return v6 + 40;
}
