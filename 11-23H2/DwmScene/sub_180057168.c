/*
 * XREFs of sub_180057168 @ 0x180057168
 * Callers:
 *     sub_18003027C @ 0x18003027C (sub_18003027C.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180057870 @ 0x180057870 (sub_180057870.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180057168(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 *v5; // rbx
  __int64 v6; // rax

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
  v5 = (__int64 *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v6 = sub_18001C190();
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *v5 = v6;
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
    sub_180057870(a1);
  return a1;
}
