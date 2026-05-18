/*
 * XREFs of sub_1800B4738 @ 0x1800B4738
 * Callers:
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 *     sub_1800B60F8 @ 0x1800B60F8 (sub_1800B60F8.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_1800B4A98 @ 0x1800B4A98 (sub_1800B4A98.c)
 *     sub_1800B4CD8 @ 0x1800B4CD8 (sub_1800B4CD8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800B4738(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  __int64 *v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+90h] [rbp+40h]

  v13 = *a1;
  *(_QWORD *)&v11 = a1;
  v8 = sub_180011088(0x1D0uLL);
  *((_QWORD *)&v11 + 1) = v8;
  v14 = v8 + 32;
  sub_18001875C((__int64 *)(v8 + 32), a3);
  sub_1800B4A98(v8 + 64, a4);
  sub_18001DE7C((__int64 *)v8, &v13);
  sub_18001DE7C((__int64 *)(v8 + 8), &v13);
  sub_18001DE7C((__int64 *)(v8 + 16), &v13);
  *(_WORD *)(v8 + 24) = 0;
  v9 = *(__int64 **)(*a1 + 8LL);
  *(_QWORD *)&v12 = v9;
LABEL_5:
  DWORD2(v12) = 0;
  while ( !*((_BYTE *)v9 + 25) )
  {
    *(_QWORD *)&v12 = v9;
    if ( !(unsigned __int8)sub_18001DE04((_QWORD *)(v8 + 32), v9 + 4) )
    {
      v9 = (__int64 *)v9[2];
      goto LABEL_5;
    }
    DWORD2(v12) = 1;
    v9 = (__int64 *)*v9;
  }
  if ( a1[1] == 0x8D3DCB08D3DCB0LL )
    sub_18001F56C();
  *((_QWORD *)&v11 + 1) = 0LL;
  sub_1800B4CD8(&v11);
  v11 = v12;
  *a2 = sub_18001F31C(a1, (__int64)&v11, v8);
  return a2;
}
