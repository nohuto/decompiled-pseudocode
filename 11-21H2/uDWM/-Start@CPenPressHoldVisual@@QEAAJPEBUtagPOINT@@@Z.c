/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800C8FF8
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800AB8F0 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180008C6C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013228 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001B4D8 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001EE50 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025C70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18004C890 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800509DC (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800C91D0 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800E9150 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // ebx
  unsigned int v7; // eax
  struct tagSIZE *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rax
  _QWORD *v15; // r8

  *((struct tagPOINT *)this + 38) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer((__int64)this, (int)&UdwmPenPressHoldVisual_Start, 0);
  v4 = (struct CBitmapSource ***)((char *)this + 336);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (struct CBitmapSource ***)this + 42);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v7 = 56;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, v7);
    CPenPressHoldVisual::Stop(this);
    return (unsigned int)BitmapsFromAtlasImageStrip;
  }
  v8 = (struct tagSIZE *)((char *)this + 328);
  v9 = *((_QWORD *)**v4 + 3);
  *((_QWORD *)this + 41) = v9;
  v10 = v9;
  if ( (int)v9 < 1 )
  {
    v8->cx = 1;
    v10 = 1;
  }
  v11 = *((_DWORD *)this + 83);
  if ( v11 < 1 )
  {
    *((_DWORD *)this + 83) = 1;
    v11 = 1;
  }
  v12 = a2->x - (v10 >> 1);
  v13 = a2->y - ((unsigned int)v11 >> 1);
  CVisual::SetSize(*((CVisual **)this + 40), v8);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 40), v12);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 40), v13);
  CImage::SetBitmapSource(*((CImage **)this + 40), **v4);
  CVisual::SetOpacity(this, 1.0);
  v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  if ( v14 )
  {
    CTimelineBase::CTimelineBase(v14, 0.300000011920929, 0.0, 1.0, 0);
    *v15 = &CTimeline<float>::`vftable';
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)this + 39) = v15;
  if ( !v15 )
  {
    BitmapsFromAtlasImageStrip = -2147024882;
    v7 = 83;
    goto LABEL_16;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v7 = 85;
    goto LABEL_16;
  }
  return (unsigned int)BitmapsFromAtlasImageStrip;
}
