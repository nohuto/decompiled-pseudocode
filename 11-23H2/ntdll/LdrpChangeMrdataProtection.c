/*
 * XREFs of LdrpChangeMrdataProtection @ 0x180032DD4
 * Callers:
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1800A18B0 (ZwProtectVirtualMemory.c)
 *     LdrpLocateMrdata @ 0x1800E1F94 (LdrpLocateMrdata.c)
 */

NTSTATUS __fastcall LdrpChangeMrdataProtection(ULONG a1)
{
  NTSTATUS result; // eax
  ULONG NewProtect; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  NewProtect = a1;
  if ( !LdrpMrdataBase )
    LdrpLocateMrdata();
  BaseAddress = (PVOID)LdrpMrdataBase;
  RegionSize = LdrpMrdataSize;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
  if ( result < 0 )
    __fastfail(5u);
  return result;
}
