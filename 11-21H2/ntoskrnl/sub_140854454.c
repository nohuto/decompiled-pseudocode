/*
 * XREFs of sub_140854454 @ 0x140854454
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 *     sub_140B24C44 @ 0x140B24C44 (sub_140B24C44.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140854454(__int64 a1)
{
  __int128 v2; // xmm1
  unsigned __int16 v3; // ax
  _WORD *PoolWithTag; // rax
  char *v5; // rbx
  __int64 v6; // rdx
  char *v7; // rbx

  *(_OWORD *)(a1 + 1000) = *(_OWORD *)(a1 + 1264);
  v2 = *(_OWORD *)(a1 + 1264);
  v3 = 2 * (*(_WORD *)(a1 + 1264) + 42);
  *(_WORD *)(a1 + 1016) = v3;
  v3 += 2;
  *(_WORD *)(a1 + 1018) = v3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x6C537350u);
  *(_QWORD *)(a1 + 1024) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = *(_QWORD *)L"Path=";
  PoolWithTag[4] = aPath[4];
  v5 = (char *)(PoolWithTag + 5);
  memmove(PoolWithTag + 5, *(const void **)(a1 + 1272), *(unsigned __int16 *)(a1 + 1264));
  v6 = *(unsigned __int16 *)(a1 + 1264);
  *(_OWORD *)&v5[v6] = *(_OWORD *)L"\\System32";
  *(_WORD *)&v5[v6 + 16] = aSystem32[8];
  *(_WORD *)&v5[v6 + 18] = 0;
  *(_OWORD *)&v5[v6 + 20] = *(_OWORD *)L"SystemDrive=";
  *(_QWORD *)&v5[v6 + 36] = *(_QWORD *)L"ive=";
  *(_DWORD *)&v5[v6 + 44] = **((_DWORD **)&v2 + 1);
  *(_WORD *)&v5[v6 + 48] = 0;
  *(_OWORD *)&v5[v6 + 50] = *(_OWORD *)L"SystemRoot=";
  *(_DWORD *)&v5[v6 + 66] = *(_DWORD *)L"ot=";
  *(_WORD *)&v5[v6 + 70] = aSystemroot_13[10];
  v7 = &v5[v6];
  memmove(v7 + 72, *(const void **)(a1 + 1272), *(unsigned __int16 *)(a1 + 1264));
  *(_DWORD *)&v7[*(unsigned __int16 *)(a1 + 1264) + 72] = 0;
  return 0LL;
}
