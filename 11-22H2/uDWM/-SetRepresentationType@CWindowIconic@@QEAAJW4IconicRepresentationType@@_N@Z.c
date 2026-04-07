/*
 * XREFs of ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107634
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1801072B4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800AC934 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E6BF8 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1801065BC (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x180106788 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180106E40 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1801073E8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180107808 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::SetRepresentationType(__int64 a1, int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int CentralImage; // eax
  _QWORD *v8; // rax
  __int64 v9; // r8
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 != v3 )
  {
    if ( a2 == 1 )
    {
      CentralImage = CBitmapSourceArray::CopyAndAddRef(
                       (CBitmapSourceArray *)(a1 + 32),
                       (const struct CBitmapSourceArray *)CWindowIconic::s_rgpBitmapPendingImages);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 733;
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, v11);
        return v4;
      }
      v8 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       120LL);
      if ( v8 )
        v8 = CTimeline<unsigned int>::CTimeline<unsigned int>((__int64)v8, 0.54, v9, *(_DWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = v8;
      if ( !v8 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2DFu);
        return v4;
      }
      CTopLevelWindow::StartIconicAnimation(*(CTopLevelWindow **)(a1 + 88));
    }
    else if ( v3 == 1 )
    {
      CWindowIconic::CleanupAnimationResources((CWindowIconic *)a1);
    }
    if ( a3 )
    {
      CentralImage = CWindowIconic::OnWindowStyleUpdated((CWindowIconic *)a1, 0);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 746;
        goto LABEL_25;
      }
      CentralImage = CWindowIconic::LoadCentralImage((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 747;
        goto LABEL_25;
      }
      CentralImage = CWindowIconic::UpdateSizeOrMargins((CWindowIconic *)a1, 1);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 748;
        goto LABEL_25;
      }
      CentralImage = CWindowIconic::UpdateClientArea((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 749;
        goto LABEL_25;
      }
      CentralImage = CVisual::RenderRecursive(*(CVisual **)(a1 + 88));
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 752;
        goto LABEL_25;
      }
      CentralImage = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 64LL))(*(_QWORD *)(a1 + 104));
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v11 = 753;
        goto LABEL_25;
      }
    }
  }
  return v4;
}
