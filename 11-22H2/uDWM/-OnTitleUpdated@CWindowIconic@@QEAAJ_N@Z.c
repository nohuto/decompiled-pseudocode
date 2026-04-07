/*
 * XREFs of ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18010731C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800E455C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180108648 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 */

__int64 __fastcall CWindowIconic::OnTitleUpdated(CWindowIconic *this, __int64 a2)
{
  char v3; // si
  int v4; // eax
  unsigned __int16 *v5; // r11
  unsigned int v6; // ebx
  int v7; // eax
  CVisual *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v4 = StringCchLengthW(*(const unsigned __int16 **)(*((_QWORD *)this + 9) + 16LL), a2, &v12);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = CWindowData::SetTitle(*((CWindowData **)this + 10), v5, v12);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = (CVisual *)*((_QWORD *)this + 11);
      v9 = *((_DWORD *)v8 + 22);
      if ( (v9 & 0x10000) == 0 )
      {
        *((_DWORD *)v8 + 22) = v9 | 0x10000;
        CVisual::PropagateDirtyChildren(v8);
      }
      if ( v3 )
      {
        v10 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x287u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x281u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x27Fu);
  }
  return v6;
}
