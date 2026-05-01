/*
 * XREFs of ?InitializeCachedObject@CCachedSTAObject@@QEAAJK@Z @ 0x1805EDD6C
 * Callers:
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x1805EF3E0 (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedSTAObject::InitializeCachedObject(ULARGE_INTEGER *this, DWORD a2)
{
  HRESULT v3; // edi

  this[3].LowPart = a2;
  v3 = CoRegisterInitializeSpy((IInitializeSpy *)this, this + 2);
  if ( v3 >= 0 )
  {
    this[5].LowPart = 1;
    if ( !CCachedSTAObject::s_hmod )
      GetModuleHandleExW(4u, (LPCWSTR)&CCachedSTAObject::s_hmod, &CCachedSTAObject::s_hmod);
  }
  return (unsigned int)v3;
}
