/*
 * XREFs of sub_1800B4868 @ 0x1800B4868
 * Callers:
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800B4868(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  v12 = *a1;
  *(_QWORD *)&v10 = a1;
  v6 = sub_180011088(0x58uLL);
  *((_QWORD *)&v10 + 1) = v6;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_OWORD *)(v6 + 32) = *(_OWORD *)a3;
  *(_OWORD *)(v6 + 48) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(v6 + 80) = *(_QWORD *)(a3 + 48);
  sub_18001DE7C((__int64 *)v6, &v12);
  sub_18001DE7C((__int64 *)(v7 + 8), &v12);
  sub_18001DE7C((__int64 *)(v6 + 16), &v12);
  *(_WORD *)(v6 + 24) = 0;
  v8 = *(__int64 **)(*a1 + 8LL);
  *(_QWORD *)&v11 = v8;
LABEL_5:
  DWORD2(v11) = 0;
  while ( !*((_BYTE *)v8 + 25) )
  {
    *(_QWORD *)&v11 = v8;
    if ( !(unsigned __int8)sub_18001DE04((_QWORD *)(v6 + 32), v8 + 4) )
    {
      v8 = (__int64 *)v8[2];
      goto LABEL_5;
    }
    DWORD2(v11) = 1;
    v8 = (__int64 *)*v8;
  }
  if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
    sub_18001F56C();
  v10 = v11;
  *a2 = sub_18001F31C(a1, (__int64)&v10, v6);
  return a2;
}
