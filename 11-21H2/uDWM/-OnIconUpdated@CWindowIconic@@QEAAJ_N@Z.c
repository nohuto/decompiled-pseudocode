/*
 * XREFs of ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B578
 * Callers:
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180020C14 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18004A8F4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004AE70 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18004B430 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::OnIconUpdated(CWindowIconic *this, char a2)
{
  unsigned int v2; // ebx
  int CentralImage; // eax
  int updated; // eax
  int v8; // eax
  int v9; // eax

  v2 = 0;
  *(_QWORD *)(*((_QWORD *)this + 10) + 152LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 152LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 160LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 160LL);
  if ( a2 && !*((_DWORD *)this + 4) )
  {
    CentralImage = CWindowIconic::LoadCentralImage(this);
    v2 = CentralImage;
    if ( CentralImage < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, 0x243u);
      return v2;
    }
    updated = CWindowIconic::UpdateClientArea(this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x246u);
      return v2;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x247u);
      return v2;
    }
  }
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x20000);
  if ( a2 )
  {
    v9 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v2 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x24Eu);
  }
  return v2;
}
