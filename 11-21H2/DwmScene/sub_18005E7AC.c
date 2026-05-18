/*
 * XREFs of sub_18005E7AC @ 0x18005E7AC
 * Callers:
 *     sub_180030834 @ 0x180030834 (sub_180030834.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18005F190 @ 0x18005F190 (sub_18005F190.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18005E7AC(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 *v10; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (_QWORD *)(a1 + 88);
  v10 = (__int64 *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v10 = (__int64 *)sub_180011088(0x48uLL);
  sub_18001DE8C(v10, (__int64 *)&v10);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)&v10);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)&v10);
  *(_WORD *)(v8 + 24) = 257;
  *v5 = v8;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  Mtx_init_in_situ((_Mtx_t)(a1 + 128), 2);
  Cnd_init_in_situ((_Cnd_t)(a1 + 208));
  Cnd_init_in_situ((_Cnd_t)(a1 + 280));
  Cnd_init_in_situ((_Cnd_t)(a1 + 352));
  *(_WORD *)(a1 + 424) = 0;
  *(_BYTE *)(a1 + 426) = 0;
  *(_DWORD *)(a1 + 428) = -1;
  *(_WORD *)(a1 + 432) = 256;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_DWORD *)(a1 + 448) = 0;
  if ( *(_DWORD *)(a1 + 36) == 1 )
    sub_18005F190(a1);
  return a1;
}
