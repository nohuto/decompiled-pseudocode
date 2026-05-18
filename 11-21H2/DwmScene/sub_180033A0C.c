/*
 * XREFs of sub_180033A0C @ 0x180033A0C
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180032A24 @ 0x180032A24 (sub_180032A24.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180033A0C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)&v11 = v5;
  DWORD2(v11) = 0;
  v6 = v4;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = a2[1];
    do
    {
      *(_QWORD *)&v11 = v5;
      if ( *(_QWORD *)(v5 + 40) >= v7 )
      {
        DWORD2(v11) = 1;
        v6 = v5;
        v5 = *(_QWORD *)v5;
      }
      else
      {
        DWORD2(v11) = 0;
        v5 = *(_QWORD *)(v5 + 16);
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || a2[1] < *(_QWORD *)(v6 + 40) )
  {
    if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
      sub_18001F56C();
    v12 = v4;
    v10 = (unsigned __int64)a1;
    v8 = sub_180011088(0x40uLL);
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 32) = *a2;
    *(_QWORD *)(v8 + 40) = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_QWORD *)(v8 + 56) = 0LL;
    sub_18001DE7C((__int64 *)v8, &v12);
    sub_18001DE7C((__int64 *)(v8 + 8), &v12);
    sub_18001DE7C((__int64 *)(v8 + 16), &v12);
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v10 + 1) = 0LL;
    sub_180032A24((__int64)&v10);
    v10 = v11;
    v6 = sub_18001F31C(a1, (__int64)&v10, v8);
  }
  return v6 + 48;
}
