/*
 * XREFs of ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x1800371D8
 * Callers:
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x180034FF8 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x18010D360 (-UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x1800C5500 (-Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(CTopLevelWindow *this, bool *a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTargetProxy *v5; // rcx
  int v7; // eax
  CBaseObject *v8; // rcx

  v2 = 0;
  *a2 = 0;
  v5 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 100);
  if ( v5 )
  {
    v7 = CIndirectSwapchainRenderTargetProxy::Unregister(v5);
    v2 = v7;
    if ( v7 >= 0 )
    {
      v8 = (CBaseObject *)*((_QWORD *)this + 100);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *((_QWORD *)this + 100) = 0LL;
      }
      *((_BYTE *)this + 792) = 0;
      *a2 = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1721u, 0LL);
    }
  }
  return v2;
}
