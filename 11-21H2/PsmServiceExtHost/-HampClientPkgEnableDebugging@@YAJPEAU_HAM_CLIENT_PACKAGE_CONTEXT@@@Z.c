/*
 * XREFs of ?HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180078788
 * Callers:
 *     ?HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18006F904 (-HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180078B84 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampClientPkgEnableDebugging(struct _HAM_CLIENT_PACKAGE_CONTEXT *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  unsigned int v4; // ebx

  v1 = *((_QWORD *)a1 + 7);
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v1);
  if ( (*((_BYTE *)a1 + 64) & 4) != 0 )
  {
    v4 = -1073741431;
  }
  else
  {
    if ( (*((_BYTE *)a1 + 64) & 2) == 0 && (*(_BYTE *)(v1 + 340) & 2) == 0 )
    {
      *(_DWORD *)(*((_QWORD *)a1 + 7) + 340LL) |= 2u;
      *((_DWORD *)a1 + 16) |= 2u;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v1, v3);
      HampPkgNotifyDebugModeChanged((struct _HAM_PACKAGE *)v1);
      return 0;
    }
    v4 = -1073700861;
  }
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v1, v3);
  return v4;
}
