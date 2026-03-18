/*
 * XREFs of SyspartGetSystemPartition @ 0x140A5F30C
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x140373F70 (BiMapEfiDeviceForSpaces.c)
 *     CmpMountPreloadedHives @ 0x1408630AC (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x1407D3358 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x1408023F0 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(98LL, a1, a2, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemPartition, a1, a2, a3);
  return result;
}
