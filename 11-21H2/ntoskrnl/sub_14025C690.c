/*
 * XREFs of sub_14025C690 @ 0x14025C690
 * Callers:
 *     sub_14025C678 @ 0x14025C678 (sub_14025C678.c)
 *     sub_1402D72FC @ 0x1402D72FC (sub_1402D72FC.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D749C @ 0x1402D749C (sub_1402D749C.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x1406DF130 (MmUnmapViewInSystemSpace.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_14025C690(__int64 a1)
{
  char v2; // bl
  int v3; // edi
  int v4; // r15d
  _QWORD *v5; // rsi
  char *v6; // rcx
  void *v7; // rcx
  int v8; // ebx
  int v9; // eax
  PVOID PoolWithTag; // rax
  void *v11; // rdi

  v2 = 0;
  if ( !a1 )
    return 0;
  sub_1402D749C();
  KeWaitForSingleObject(&Mutant, Executive, 0, 0, 0LL);
  v3 = dword_140C1BC58;
  if ( dword_140C1BC58 )
  {
    while ( 1 )
    {
      if ( v3 <= 0 )
        goto LABEL_21;
      v4 = v3 - 1;
      v5 = (char *)P + 64 * (__int64)(v3 - 1);
      if ( v5[1] == a1 )
        break;
LABEL_5:
      v3 = v4;
    }
    v6 = (char *)v5[4];
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v6);
      v7 = (void *)v5[5];
      if ( v7 )
      {
        ZwClose(v7);
        v5[5] = 0LL;
      }
      v5[4] = 0LL;
    }
    v8 = dword_140C1BC58;
    if ( v3 != dword_140C1BC58 )
      memmove(v5, v5 + 8, (unsigned __int64)(unsigned int)(dword_140C1BC58 - v3) << 6);
    dword_140C1BC58 = v8 - 1;
    if ( v8 == 1 )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      v9 = 0;
    }
    else
    {
      if ( v8 - 1 >= (unsigned int)(dword_140C1BC98 - 32) )
      {
LABEL_20:
        v2 = 1;
        goto LABEL_5;
      }
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned __int64)(unsigned int)(dword_140C1BC98 - 32) << 6,
                      0x69507472u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v2 = 0;
        goto LABEL_21;
      }
      memmove(PoolWithTag, P, (unsigned __int64)(unsigned int)(dword_140C1BC98 - 32) << 6);
      ExFreePoolWithTag(P, 0);
      P = v11;
      v9 = dword_140C1BC98 - 32;
    }
    dword_140C1BC98 = v9;
    goto LABEL_20;
  }
  v2 = 1;
LABEL_21:
  KeReleaseMutant(&Mutant, 1, 0, 0);
  return v2;
}
