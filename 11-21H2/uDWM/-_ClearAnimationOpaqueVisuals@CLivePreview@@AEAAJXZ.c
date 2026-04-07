/*
 * XREFs of ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C328C
 * Callers:
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800C1954 (--1CLivePreview@@MEAA@XZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C1F14 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C26E0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800111F0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CLivePreview::_ClearAnimationOpaqueVisuals(CLivePreview *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v4; // r14
  __int64 v5; // rsi
  CVisual *v6; // rbx
  int v7; // eax
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  struct CVisual *v10; // rdx
  __int64 v11; // rcx

  v1 = 0;
  v2 = *((_DWORD *)this + 92) - 1;
  v4 = v2;
  if ( v2 < 0 )
  {
LABEL_7:
    *((_DWORD *)this + 92) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 344, 0x30u);
    v9 = *((_QWORD *)this + 62);
    if ( v9 )
    {
      VisualCollection::RemoveAll((VisualCollection *)(v9 + 32));
      v10 = (struct CVisual *)*((_QWORD *)this + 62);
      v11 = *((_QWORD *)v10 + 3);
      if ( v11 )
        VisualCollection::Remove((VisualCollection *)(v11 + 32), v10);
      *((_DWORD *)this + 108) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 408, 0x10u);
      *((_DWORD *)this + 116) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 440, 0x20u);
    }
  }
  else
  {
    v5 = 48LL * v2;
    while ( 1 )
    {
      v6 = *(CVisual **)(v5 + *((_QWORD *)this + 43));
      CVisual::RenderRecursive(v6);
      CTopLevelWindow::StopLivePreviewAnimation(v6);
      v7 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v6 + 3) + 32LL), v6);
      v1 = v7;
      if ( v7 < 0 )
        break;
      v8 = *(CBaseObject **)(*((_QWORD *)this + 43) + v5 + 16);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *(_QWORD *)(*((_QWORD *)this + 43) + v5 + 16) = 0LL;
      }
      v5 -= 48LL;
      if ( --v4 < 0 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x83u);
  }
  return v1;
}
