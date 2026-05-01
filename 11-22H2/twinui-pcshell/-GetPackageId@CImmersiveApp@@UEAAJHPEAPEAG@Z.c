/*
 * XREFs of ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x18000DB50
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18000DBE0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 */

__int64 __fastcall CImmersiveApp::GetPackageId(CImmersiveApp *this, int a2, unsigned __int16 **a3)
{
  unsigned int v5; // ebx

  *a3 = 0LL;
  v5 = -2147023728;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_QWORD *)this + 69) && ((*((_BYTE *)this + 488) & 1) != 0 || a2) )
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo((char *)this + 552);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v5;
}
