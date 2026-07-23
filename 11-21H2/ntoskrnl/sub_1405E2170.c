/*
 * XREFs of sub_1405E2170 @ 0x1405E2170
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405E2170(__int64 a1)
{
  ULONG_PTR **v2; // r14
  _DWORD *PoolWithTag; // rax
  unsigned __int64 v4; // rbx
  unsigned int v6; // eax
  ULONG_PTR *v7; // rax
  char *v8; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v9; // [rsp+58h] [rbp+10h]

  LODWORD(v8) = 0;
  v2 = *(ULONG_PTR ***)(a1 + 16);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x70507549u);
  v4 = (unsigned __int64)PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  PoolWithTag[22] = 0;
  PoolWithTag[1] = 0;
  *((_QWORD *)PoolWithTag + 1) = v2;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 < 8 )
    v6 = 8;
  *(_DWORD *)(v4 + 152) = v6;
  v8 = (char *)(v4 + 96);
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_WORD *)(v4 + 104) = 8 * ((((v4 & 0xFFF) + 4263) >> 12) + 6);
  *(_WORD *)(v4 + 106) = 0;
  *(_QWORD *)(v4 + 128) = v4 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v4 + 140) = v4 & 0xFFF;
  *(_DWORD *)(v4 + 136) = 168;
  sub_14029C5B0((_DWORD *)(v4 + 96), 0, 1);
  v7 = sub_1405B1A10(v2, *(unsigned int *)(v4 + 152), 3, 1, &v8);
  *(_QWORD *)(v4 + 160) = v7;
  if ( v7 )
  {
    *(_DWORD *)(v4 + 156) = *(_DWORD *)(v4 + 152);
    if ( v2 )
      ObfReferenceObjectWithTag(v2, 0x746C6644u);
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 144);
    return 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(v4 + 106) & 2) != 0 )
      MmUnlockPages((PMDL)(v4 + 96));
    ExFreePoolWithTag((PVOID)v4, 0);
    return 3221225626LL;
  }
}
