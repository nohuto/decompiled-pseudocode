/*
 * XREFs of MiMakeProtectionMask @ 0x140276980
 * Callers:
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiInitializePoolCommitPacket @ 0x140286900 (MiInitializePoolCommitPacket.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MmMapIoSpaceEx @ 0x1403359B0 (MmMapIoSpaceEx.c)
 *     MiConvertContiguousMemoryParameters @ 0x1403BA438 (MiConvertContiguousMemoryParameters.c)
 *     MmSetPageProtection @ 0x1403C2C70 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x14061EDD0 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x14062F0A0 (MmMapMdl.c)
 *     MiValidateAllocationType @ 0x1406F7148 (MiValidateAllocationType.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1406F91D0 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9770 (MmProtectVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x140721110 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x140721660 (MiMapViewOfSection.c)
 *     MiInitializeCreateSectionPacket @ 0x140723010 (MiInitializeCreateSectionPacket.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3CFC4 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E0D4 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionMask(unsigned int a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( a1 >= 0x800 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0xF) != 0 )
  {
    if ( (a1 & 0xF0) != 0 )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask1 + (a1 & 0xF));
  }
  else
  {
    if ( !((unsigned __int8)a1 >> 4) )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask2 + ((unsigned __int8)a1 >> 4));
  }
  result = (unsigned int)v1;
  if ( (_DWORD)result == -1 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0x700) == 0 )
    return result;
  if ( (a1 & 0x100) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x600) == 0 )
    {
      result = (unsigned int)result | 0x10;
      goto LABEL_14;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_14:
  if ( (a1 & 0x200) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x400) == 0 )
      return (unsigned int)result | 8;
    return 0xFFFFFFFFLL;
  }
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
