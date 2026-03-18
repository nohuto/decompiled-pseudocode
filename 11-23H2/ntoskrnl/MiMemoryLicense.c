/*
 * XREFs of MiMemoryLicense @ 0x140B5F220
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x1407AEF90 (NtQueryLicenseValue.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140B5F310 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140B5F44C (MiLimitLoaderBlockTotalMemory.c)
 */

__int64 __fastcall MiMemoryLicense(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0;
  v7 = 0;
  v6[1] = L"Kernel-WindowsMaxMemAllowedx64";
  v6[0] = 4063292LL;
  v8 = 4;
  if ( (int)NtQueryLicenseValue((unsigned __int64)v6, &v9, &v7, 4u, &v8) >= 0 && v7 )
    v2 = (unsigned __int64)v7 << 8;
  else
    v2 = 0x80000LL;
  qword_140C65AF0 = v2;
  v3 = 0x3FFFFFF7FELL;
  if ( (unsigned __int64)(1LL << dword_140C65AE4) < 0x3FFFFFF7FELL )
    v3 = 1LL << dword_140C65AE4;
  if ( qword_140C65B40 && v3 > (unsigned __int64)qword_140C65B40 >> 12 )
    v3 = (unsigned __int64)qword_140C65B40 >> 12;
  v4 = v3 - 1;
  MiLimitLoaderBlockHighMemory(a1, v4);
  result = MiLimitLoaderBlockTotalMemory(a1, v2);
  qword_140C65BA0 = v4;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  qword_140C68160 = 0x3FFFFFF7FELL;
  return result;
}
