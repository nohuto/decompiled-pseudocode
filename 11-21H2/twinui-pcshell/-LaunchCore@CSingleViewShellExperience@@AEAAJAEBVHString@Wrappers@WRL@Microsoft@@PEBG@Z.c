/*
 * XREFs of ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180137074
 * Callers:
 *     _lambda_e93b07e05eb73953e8a67c4fda015070_::operator() @ 0x180136F40 (_lambda_e93b07e05eb73953e8a67c4fda015070_--operator().c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800A46A0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

__int64 __fastcall CSingleViewShellExperience::LaunchCore(
        CSingleViewShellExperience *this,
        HSTRING *a2,
        const unsigned __int16 *a3)
{
  int v3; // edi
  const unsigned __int16 *StringRawBuffer; // rax
  unsigned int v7; // esi
  int v8; // eax

  v3 = *((_DWORD *)this + 33);
  StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
  v7 = 0;
  v8 = ActivateApplicationForExperienceWithPropertySet(
         StringRawBuffer,
         a3,
         (unsigned __int64)L"ShellExperience" & -(__int64)((v3 & 2) != 0),
         0LL,
         (v3 & 2) == 0,
         (__int64)this + 56);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v7;
}
