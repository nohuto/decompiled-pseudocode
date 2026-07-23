/*
 * XREFs of VfThunkAddTargetNotify @ 0x140ABDF7C
 * Callers:
 *     VfTargetDriversAdd @ 0x14020A1B8 (VfTargetDriversAdd.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x140ABDF50 (ViThunkFreeSharedThunksArray.c)
 *     ViThunkCreateSharedExportInformation @ 0x140ABE010 (ViThunkCreateSharedExportInformation.c)
 */

void __fastcall VfThunkAddTargetNotify(PVOID *a1)
{
  void **v1; // rdi

  v1 = a1 + 3;
  if ( !(unsigned int)ViThunkCreateSharedExportInformation(*a1, (__int64)(a1 + 3))
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, (__int64)(a1 + 4))
    || !(unsigned int)ViThunkCreateSharedExportInformation(*a1, (__int64)(a1 + 5)) )
  {
    ViThunkFreeSharedThunksArray(v1);
    ViThunkFreeSharedThunksArray(a1 + 4);
    ViThunkFreeSharedThunksArray(a1 + 5);
    *(_DWORD *)v1 |= 1u;
  }
}
