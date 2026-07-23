/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140B4750C
 * Callers:
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140376004 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiActOnLargeKernelHalPages @ 0x14081E6F8 (MiActOnLargeKernelHalPages.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *i; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // rbx

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); ; i = (__int64 *)*i )
  {
    if ( i == v1 )
    {
      result = 1LL;
      LODWORD(MiFlags) = MiFlags | 0x800;
      return result;
    }
    v3 = i[6];
    v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
      break;
    if ( (MiFlags & 0x8000) != 0 )
      MiActOnLargeKernelHalPages((char *)v3, (__int64 (__fastcall *)(char *, char *))MiValidateKernelHalLargePageRange);
    if ( (unsigned int)dword_140C6997C >> 12 )
      MiInitializeBootLoadedDriverPfnRange(
        v4 + 8LL * (((_DWORD)v5 + 511) & 0xFFFFFE00),
        (unsigned int)dword_140C6997C >> 12,
        1);
LABEL_14:
    ;
  }
  v6 = MiInitializeBootLoadedDriverPfnRange(v4, (unsigned int)v5, 0);
  v7 = v4 + 8LL * (unsigned int)v5;
  v8 = (unsigned int)dword_140C6997C >> 12;
  if ( (unsigned int)dword_140C6997C >> 12 )
  {
    LODWORD(v5) = v8 + v5;
    v10 = v8;
    MiInitializeBootLoadedDriverPfnRange(v7, v8, 1);
    v7 += 8 * v10;
  }
  if ( (PVOID)v3 != PsHalImageBase && (PVOID)v3 != PsNtosImageBase && dword_140C65944 )
  {
    LODWORD(v5) = dword_140C65944 + v5;
    MiInitializeBootLoadedDriverPfnRange(v7, (unsigned int)dword_140C65944, 0);
  }
  if ( !v6 )
  {
LABEL_11:
    if ( (PVOID)v3 != PsHalImageBase && (PVOID)v3 != PsNtosImageBase )
    {
      _InterlockedExchangeAdd(&dword_140C69AD0, v5);
      qword_140C69AA8 -= (unsigned int)v5;
    }
    goto LABEL_14;
  }
  if ( (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, v6, 0LL, 0) >= 0 )
  {
    qword_140C69AA8 += v6;
    goto LABEL_11;
  }
  return 0LL;
}
