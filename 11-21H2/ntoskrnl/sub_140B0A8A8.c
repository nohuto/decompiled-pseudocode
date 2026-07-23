/*
 * XREFs of sub_140B0A8A8 @ 0x140B0A8A8
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1403C3F68 @ 0x1403C3F68 (sub_1403C3F68.c)
 *     sub_14082CD48 @ 0x14082CD48 (sub_14082CD48.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_140B0A8A8(int a1)
{
  _QWORD *v1; // rdx
  char *v2; // rcx
  char *PoolWithTag; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char v6; // dl
  int v7; // r8d
  int v8; // edx

  if ( a1 )
  {
    sub_1403C3F68(0, 5, -1073741756);
    sub_1403C3F68(1, v6, v7);
    sub_1403C3F68(2, 0, -1073741524);
    sub_1403C3F68(v8 + 3, v8, -1073741663);
    qword_140C1BF10 = 0LL;
    dword_140C1BF38 = 0;
    qword_140C1BF48 = 0LL;
    qword_140C1BF30 = (__int64)&qword_140C1BF28;
    qword_140C1BF28 = (__int64)&qword_140C1BF28;
    qword_140C1BF68 = (__int64)&qword_140C1BF60;
    qword_140C1BF60 = (__int64)&qword_140C1BF60;
    qword_140C1BF08[0] = 0x10000LL;
    qword_140C1BF18 = (__int64)sub_140266430;
    qword_140C1BF20 = (__int64)sub_140255700;
    dword_140C1BF00[0] = 1;
    qword_140C1BF40 = 0x80000LL;
    qword_140C1BF50 = (__int64)sub_140266430;
    qword_140C1BF58 = (__int64)sub_140255700;
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_140C5A540 = 1;
  v1 = &unk_140C5A380;
  dword_140C5A544 = 1;
  v2 = byte_140D07030;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)&byte_140D07050 );
  *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1384LL) = &unk_140C5A340;
  sub_14082CD48((unsigned int *)dword_140D3CD18, 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x74517350u);
  qword_140D3CBC8 = (ULONG_PTR)PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = PoolWithTag + 8;
    v5 = 32LL;
    do
    {
      v4[1] = v4;
      *v4 = v4;
      *(v4 - 1) = 0LL;
      v4 += 3;
      --v5;
    }
    while ( v5 );
    goto LABEL_9;
  }
  return (char)PoolWithTag;
}
