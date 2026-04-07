/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_7b4eafa3d9ad544f92972777e9ad05a8___ @ 0x18005F800
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_7b4eafa3d9ad544f92972777e9ad05a8___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 688); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 664) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 16LL))(
      v5,
      *(_QWORD *)(*(_QWORD *)*a2 + 440LL),
      a2[1]);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
