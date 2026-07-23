/*
 * XREFs of MiLockAndMapEntireDriver @ 0x140A34578
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiPrepareDriverPatchState @ 0x140A2B8D4 (MiPrepareDriverPatchState.c)
 */

__int64 __fastcall MiLockAndMapEntireDriver(__int64 a1, __int64 *a2, struct _MDL **a3)
{
  struct _MDL *v4; // rdi
  __int64 v7; // r14
  char *AnyMultiplexedVm; // rax
  int v9; // ebx
  ULONG v10; // edx
  unsigned int v11; // esi
  PMDL Mdl; // rax
  struct _MDL *v13; // rcx
  __int64 v14; // rdx
  ULONG_PTR v15; // rbp
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0;
  v4 = 0LL;
  v7 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = MiPrepareDriverPatchState((__int64)a2, (__int64)AnyMultiplexedVm);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 64);
    v11 = (v10 >> 12) + ((v10 & 0xFFF) != 0);
    if ( a3 )
    {
      Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), v10, 0, 0, 0LL);
      v4 = Mdl;
      if ( !Mdl )
        return (unsigned int)-1073741670;
      v7 = (__int64)&Mdl[1];
      if ( v11 )
      {
        v13 = Mdl + 1;
        v14 = v11;
        do
        {
          v13->Next = (struct _MDL *)qword_140C69708;
          v13 = (struct _MDL *)((char *)v13 + 8);
          --v14;
        }
        while ( v14 );
      }
    }
    v9 = MiLockDriverPageRange(a2, 0, v11 - 1, 2, (__int64)v4);
    if ( v9 >= 0 && a3 )
    {
      v15 = MiReservePtes((__int64)&qword_140C69940, v11);
      if ( v15 )
      {
        v9 = MiFillSystemPtes(v15, v11, v7, 4u, 2, &v17);
        v4->MdlFlags |= 1u;
        v4->MappedSystemVa = (PVOID)((__int64)(v15 << 25) >> 16);
        *a3 = v4;
        return (unsigned int)v9;
      }
      v9 = -1073741670;
    }
    if ( v4 )
      IoFreeMdl(v4);
  }
  return (unsigned int)v9;
}
