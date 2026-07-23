/*
 * XREFs of MiFreeDriverInitialization @ 0x1407036E4
 * Callers:
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x140811078 (MiLoadImportDll.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084DCFC (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSnapDriverRange @ 0x140703908 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  PVOID v1; // rbx
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(PVOID *)(a1 + 48);
  v6 = 0LL;
  v5 = 0LL;
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( (!(_DWORD)result || v1 == PsNtosImageBase || v1 == PsHalImageBase)
    && (*(_DWORD *)(a1 + 104) & 0x800) == 0
    && (!dword_140D1D228 || v1 != PsNtosImageBase && v1 != PsHalImageBase) )
  {
    v4 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v4, 2, 0, (__int64)&v5, (__int64)&v6);
      v4 = result;
      if ( v5 )
        result = MiFreeInitializationCode(a1, v5, v6, 0LL);
    }
    while ( v4 );
  }
  return result;
}
