/*
 * XREFs of sub_14053CF1C @ 0x14053CF1C
 * Callers:
 *     sub_14053C908 @ 0x14053C908 (sub_14053C908.c)
 * Callees:
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_14053CF1C(_QWORD *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdx

  v1 = a1[8];
  v2 = 0;
  if ( !v1 )
    KeBugCheckEx(0x34u, 0xBE5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = sub_140349710(NonPagedPoolNx, 0x50uLL, 1901552451LL, *(_DWORD *)(v1 + 24) | 0x80000000, 0);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 32) = 6;
    v6 = a1[4];
    *(_DWORD *)(v5 + 36) = -1;
    *(_QWORD *)(v5 + 56) = v6;
    *(_QWORD *)(v5 + 64) = a1;
    *(_QWORD *)(v5 + 72) = v1;
    *(_DWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 16) = sub_14053D730;
    *(_QWORD *)(v5 + 24) = v5;
    *(_QWORD *)v5 = 0LL;
    v7 = (__int64 *)a1[194];
    if ( (_QWORD *)*v7 != a1 + 193 )
      __fastfail(3u);
    *(_QWORD *)v5 = a1 + 193;
    v2 = 1;
    *(_QWORD *)(v5 + 8) = v7;
    *v7 = v5;
    a1[194] = v5;
  }
  return v2;
}
