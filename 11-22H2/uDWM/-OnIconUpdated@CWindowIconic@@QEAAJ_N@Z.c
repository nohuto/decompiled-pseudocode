/*
 * XREFs of ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107194
 * Callers:
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180034554 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180106E40 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180107808 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowIconic::OnIconUpdated(CWindowIconic *this, char a2)
{
  unsigned int v2; // ebx
  int CentralImage; // eax
  int updated; // eax
  int v7; // eax
  CVisual *v8; // rcx
  int v9; // eax
  int v10; // eax

  v2 = 0;
  *(_QWORD *)(*((_QWORD *)this + 10) + 152LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 152LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 160LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 160LL);
  if ( a2 && !*((_DWORD *)this + 4) )
  {
    CentralImage = CWindowIconic::LoadCentralImage(this);
    v2 = CentralImage;
    if ( CentralImage < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, 0x242u);
      return v2;
    }
    updated = CWindowIconic::UpdateClientArea(this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x245u);
      return v2;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x246u);
      return v2;
    }
  }
  v8 = (CVisual *)*((_QWORD *)this + 11);
  v9 = *((_DWORD *)v8 + 22);
  if ( (v9 & 0x20000) == 0 )
  {
    *((_DWORD *)v8 + 22) = v9 | 0x20000;
    CVisual::PropagateDirtyChildren(v8);
  }
  if ( a2 )
  {
    v10 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v2 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x24Du);
  }
  return v2;
}
