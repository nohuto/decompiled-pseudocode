/*
 * XREFs of ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x180130720
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1801307E8 (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

__int64 __fastcall CImmersiveMode::UnregisterForDesktopVisibilityChanges(CImmersiveMode *this, int a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  CImmersiveMode::DesktopVisibilityChangeListener *v7; // rdi
  _DWORD **v8; // rcx
  CImmersiveMode::DesktopVisibilityChangeListener **v9; // rcx
  unsigned int v10; // edx

  v4 = -2147023728;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *((_QWORD *)this + 33);
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    v8 = (_DWORD **)*((_QWORD *)this + 32);
    while ( **v8 != a2 )
    {
      ++v6;
      ++v8;
      if ( v6 >= v5 )
        goto LABEL_8;
    }
    v4 = 0;
    v9 = (CImmersiveMode::DesktopVisibilityChangeListener **)(*((_QWORD *)this + 32) + 8 * v6);
    v7 = *v9;
    if ( v6 < v5 )
    {
      if ( v6 != v5 - 1 )
        memmove_0(v9, v9 + 1, 8 * (v5 - v6) - 8);
      --*((_QWORD *)this + 33);
    }
  }
LABEL_8:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v7 )
    CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(v7, v10);
  return v4;
}
