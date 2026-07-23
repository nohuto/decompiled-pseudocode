/*
 * XREFs of sub_14086379C @ 0x14086379C
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_14086379C(__int64 a1)
{
  __int64 v1; // rdi
  void *result; // rax

  v1 = a1 + 1064;
  *(_QWORD *)(a1 + 1192) = 0LL;
  memset((void *)(a1 + 1064), 0, 0x40uLL);
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_DWORD *)v1 = 327145;
  *(_DWORD *)(v1 + 4) = -196545;
  *(_DWORD *)(v1 + 8) = 4128831;
  memset((void *)(v1 + 64), 0, 0x40uLL);
  *(_QWORD *)(v1 + 160) = 0LL;
  result = &unk_140D3BA80;
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_QWORD *)(v1 + 176) = 0LL;
  *(_QWORD *)(v1 + 144) = &unk_140D3BA80;
  *(_QWORD *)(v1 + 152) = &unk_140D3BA80;
  *(_DWORD *)(v1 + 64) = 327145;
  *(_DWORD *)(v1 + 68) = -196545;
  *(_DWORD *)(v1 + 72) = 4128831;
  return result;
}
