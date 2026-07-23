/*
 * XREFs of MiLockPatchIatForDV @ 0x1406409F0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     IopAllocateMdl @ 0x1402FC37C (IopAllocateMdl.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140641714 (MiUnlockAndFreeDvPatchImage.c)
 *     MiInitializeDriverPatchState @ 0x140697230 (MiInitializeDriverPatchState.c)
 *     MiPrepareDriverPatchState @ 0x140A2B8D4 (MiPrepareDriverPatchState.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_BOOL8 __fastcall MiLockPatchIatForDV(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char *v5; // r15
  __int64 v6; // r14
  __int64 Pool2; // rax
  int v8; // ebx
  __int64 *v9; // r12
  unsigned __int64 SessionVm; // rax
  __int64 v11; // r9
  __int64 *v12; // rsi
  __int64 Mdl; // rax
  unsigned int v14; // r9d
  __int64 v15; // r8
  char *v16; // rcx
  char *v17; // rcx
  _QWORD *v18; // rcx
  ULONG Size; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h]

  Size = 0;
  v21 = 0;
  v2 = 0LL;
  v5 = (char *)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &Size);
  if ( v5 && (v6 = Size, Size >= 8) )
  {
    Pool2 = ExAllocatePool2(64LL, 144LL, 1349807944LL);
    v2 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
LABEL_4:
      v8 = -1073741670;
      goto LABEL_24;
    }
    v9 = (__int64 *)(Pool2 + 16);
    MiInitializeDriverPatchState(a1, Pool2 + 16);
    if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
      SessionVm = MiGetSessionVm();
    else
      SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
    v8 = MiPrepareDriverPatchState(v9, SessionVm);
    if ( v8 < 0 )
      goto LABEL_24;
    if ( (MiFlags & 0x8000) != 0 )
    {
      v21 = 1;
      v12 = v2 + 15;
    }
    else
    {
      Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), 0, v11, 0LL, 0);
      v12 = v2 + 15;
      v2[15] = Mdl;
      if ( !Mdl )
        goto LABEL_4;
      v14 = 0;
      if ( ((*(unsigned int *)(Mdl + 40) + (*(_DWORD *)(Mdl + 32) & 0xFFFLL) + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v15 = 0LL;
        do
        {
          ++v14;
          *(_QWORD *)(Mdl + 8 * v15 + 48) = qword_140C69708;
          v15 = v14;
        }
        while ( v14 < (*(unsigned int *)(*v12 + 40) + (*(_DWORD *)(*v12 + 32) & 0xFFFuLL) + 4095) >> 12 );
      }
    }
    v8 = MiLockDriverPageRange(
           v9,
           (unsigned int)((_DWORD)v5 - *(_DWORD *)(a1 + 48)) >> 12,
           ((unsigned int)((_DWORD)v5 - *(_DWORD *)(a1 + 48)) >> 12)
         + ((v6 + 4095 + (unsigned __int64)((unsigned __int16)v5 & 0xFFF)) >> 12)
         - 1,
           v21,
           *v12);
    if ( v8 >= 0 )
    {
      if ( *v12 )
      {
        v16 = (char *)MmMapLockedPagesSpecifyCache((PMDL)*v12, 0, MmCached, 0LL, 0, 0x10u);
        if ( !v16 )
          goto LABEL_4;
        v17 = &v16[(_QWORD)v5 - *(_QWORD *)(a1 + 48)];
      }
      else
      {
        v17 = v5;
      }
      *((_DWORD *)v2 + 34) = v6;
      v2[16] = v17;
      v18 = *(_QWORD **)(a2 + 64);
      if ( *v18 != a2 + 56 )
        __fastfail(3u);
      *v2 = a2 + 56;
      v2[1] = v18;
      *v18 = v2;
      *(_QWORD *)(a2 + 64) = v2;
      v2 = 0LL;
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_24:
  *(_DWORD *)(a2 + 72) = v8;
  if ( v2 )
    MiUnlockAndFreeDvPatchImage(v2);
  return v8 >= 0;
}
