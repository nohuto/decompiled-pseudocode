/*
 * XREFs of ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180107100
 * Callers:
 *     ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x18006DAA0 (-OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180106E40 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowIconic::OnGlobalTimeUpdated(CWindowIconic *this)
{
  unsigned int v2; // eax
  __int64 v3; // rcx

  v2 = *((_DWORD *)this + 14) - 1;
  if ( v2 >= (int)*(double *)(*((_QWORD *)this + 8) + 48LL) )
    v2 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
  if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v2) != *(_QWORD *)(*((_QWORD *)this + 12) + 288LL) )
  {
    CWindowIconic::LoadCentralImage(this);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
  }
  v3 = *((_QWORD *)this + 8);
  if ( *(_BYTE *)(v3 + 72) )
  {
    *(_WORD *)(v3 + 72) = 256;
    *(_QWORD *)(v3 + 24) = 0x3FE147AE147AE148LL;
    *(_QWORD *)(v3 + 48) = *(_QWORD *)(v3 + 32);
    CDesktopManager::s_fTimelineDirty = 1;
  }
  return 0LL;
}
