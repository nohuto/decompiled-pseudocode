/*
 * XREFs of sub_1800F8A14 @ 0x1800F8A14
 * Callers:
 *     sub_1800F6284 @ 0x1800F6284 (sub_1800F6284.c)
 *     sub_1800F65D4 @ 0x1800F65D4 (sub_1800F65D4.c)
 *     sub_1800F69A0 @ 0x1800F69A0 (sub_1800F69A0.c)
 *     sub_1800F6DE4 @ 0x1800F6DE4 (sub_1800F6DE4.c)
 *     sub_1800F8E90 @ 0x1800F8E90 (sub_1800F8E90.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180043FDC @ 0x180043FDC (sub_180043FDC.c)
 *     sub_1800F860C @ 0x1800F860C (sub_1800F860C.c)
 *     sub_1800FA768 @ 0x1800FA768 (sub_1800FA768.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F8A14(__int64 *a1, char *a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+90h] [rbp+40h]

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  *(_QWORD *)&v10 = v5;
  DWORD2(v10) = 0;
  v6 = v4;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    *(_QWORD *)&v10 = v5;
    if ( (unsigned __int8)sub_180043FDC((char *)(v5 + 32), a2) )
    {
      DWORD2(v10) = 0;
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      DWORD2(v10) = 1;
      v6 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  if ( *(_BYTE *)(v6 + 25) || (unsigned __int8)sub_180043FDC(a2, (_QWORD *)(v6 + 32)) )
  {
    if ( a1[1] == 0x155555555555555LL )
      sub_18001F56C();
    v11 = v4;
    *(_QWORD *)&v9 = a1;
    v7 = sub_180011088(0xC0uLL);
    v12 = v7 + 32;
    sub_1800129F4((__int64 *)(v7 + 32), (__int64)a2);
    sub_1800FA768(v7 + 64);
    sub_18001DE7C((__int64 *)v7, &v11);
    sub_18001DE7C((__int64 *)(v7 + 8), &v11);
    sub_18001DE7C((__int64 *)(v7 + 16), &v11);
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    sub_1800F860C((__int64)&v9);
    v9 = v10;
    v6 = sub_18001F31C(a1, (__int64)&v9, v7);
  }
  return v6 + 64;
}
