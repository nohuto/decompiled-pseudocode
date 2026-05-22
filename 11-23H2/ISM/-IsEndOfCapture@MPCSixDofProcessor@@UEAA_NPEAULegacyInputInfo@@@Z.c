/*
 * XREFs of ?IsEndOfCapture@MPCSixDofProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801DE520
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800A8378 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A872C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800A8A04 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCSixDofProcessor::IsEndOfCapture(__int64 this, struct LegacyInputInfo *a2)
{
  char v3; // di
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)a2 + 2280) & 0x3F) != 0 )
    return 0;
  v3 = 1;
  if ( *(_BYTE *)(this + 3624) && !*((_BYTE *)a2 + 240) )
  {
    *(_DWORD *)(this + 5616) = 2;
    Instance = MPCGestureHandlerManager::GetInstance(this, (__int64)a2);
    v5 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
           &v8,
           this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 24) >> 64));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, this + 4760, v5, v6);
  }
  return v3;
}
