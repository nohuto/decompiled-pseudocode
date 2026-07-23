/*
 * XREFs of sub_1403BEFA8 @ 0x1403BEFA8
 * Callers:
 *     sub_140213908 @ 0x140213908 (sub_140213908.c)
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 *     sub_1403BED70 @ 0x1403BED70 (sub_1403BED70.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 * Callees:
 *     sub_1403BF030 @ 0x1403BF030 (sub_1403BF030.c)
 *     sub_1403BF088 @ 0x1403BF088 (sub_1403BF088.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char *__fastcall sub_1403BEFA8(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  char *v8; // rbx

  v4 = a2[1] + 24;
  v6 = (_QWORD *)sub_1403BF088(a1, v4);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  memset(v6, 0, v4);
  v7[2] = a3;
  v8 = (char *)(v7 + 3);
  memmove(v7 + 3, a2, a2[1]);
  if ( (int)sub_1403BF030(a2) < 0 )
    KeBugCheckEx(0xA5u, 0x1000BuLL, *a2, (ULONG_PTR)a2, 0LL);
  return v8;
}
