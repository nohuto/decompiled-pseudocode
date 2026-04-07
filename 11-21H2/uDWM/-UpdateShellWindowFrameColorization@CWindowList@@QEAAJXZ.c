/*
 * XREFs of ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x18005D2E8
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800105A4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180035D2C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateShellWindowFrameColorization(CWindowList *this)
{
  _QWORD *v2; // rax
  CWindowData *v4; // rdi
  CWindowData *i; // rbx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h] BYREF

  RestartKey = 0LL;
  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    if ( !v2 )
      break;
    v4 = (CWindowData *)(v2 + 10);
    for ( i = (CWindowData *)v2[10]; i != v4; i = *(CWindowData **)i )
    {
      if ( (*((_BYTE *)i + 668) & 0x40) != 0 )
        CWindowData::OnColorizationUpdated(i);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return 0LL;
}
