/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x180069090
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180008C6C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013228 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001B4D8 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001EE50 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18004C890 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800AE530 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  float v5; // xmm0_4
  struct tagSIZE *v6; // rbx
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  int v11; // ecx
  float v12; // xmm0_4
  int v13; // edx
  float v14; // xmm0_4
  int v15; // eax
  __int64 cx; // kr00_8
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  char v22; // al
  __int64 v23; // rax
  _QWORD *v24; // r8
  int v25; // eax
  double v26; // xmm1_8

  if ( !*((_QWORD *)this + 46) )
  {
    v2 = *((_DWORD *)this + 89);
    if ( (v2 & 1) != 0 )
    {
      v3 = *((_DWORD *)this + 104);
      v4 = (int)(float)((float)*(double *)(*((_QWORD *)this + 45) + 48LL) * (float)v3);
      if ( v4 >= v3 )
        v4 = v3 - 1;
      CImage::SetBitmapSource(*((CImage **)this + 47), *(struct CBitmapSource **)(*((_QWORD *)this + 49) + 8LL * v4));
      v2 = *((_DWORD *)this + 89);
    }
    if ( (v2 & 2) != 0 )
    {
      v5 = *(double *)(*((_QWORD *)this + 45) + 48LL);
      CVisual::SetOpacity(
        this,
        fmaxf(0.0, (float)((float)(*((float *)this + 85) - *((float *)this + 84)) * v5) + *((float *)this + 84)));
      v2 = *((_DWORD *)this + 89);
    }
    if ( (v2 & 8) != 0 )
    {
      v6 = (struct tagSIZE *)((char *)this + 384);
      v7 = *((float *)this + 86);
      v8 = *((float *)this + 87);
      v9 = *(double *)(*((_QWORD *)this + 45) + 48LL);
      *((_QWORD *)this + 48) = *(_QWORD *)(**((_QWORD **)this + 49) + 24LL);
      v10 = (float)((float)(v8 - v7) * v9) + v7;
      v11 = (int)(float)((float)*((int *)this + 96) * v10);
      v12 = (float)*((int *)this + 97);
      if ( v11 < 1 )
        v11 = 1;
      v6->cx = v11;
      v13 = (int)(float)(v12 * v10);
      if ( v13 < 1 )
        v13 = 1;
      *((_DWORD *)this + 97) = v13;
    }
    else
    {
      if ( (v2 & 4) == 0 )
        goto LABEL_20;
      v6 = (struct tagSIZE *)((char *)this + 384);
      v14 = *(double *)(*((_QWORD *)this + 45) + 48LL);
      v15 = (int)(float)((float)((float)((float)(*((float *)this + 87) - *((float *)this + 86)) * v14)
                               + *((float *)this + 86))
                       * (float)*((int *)this + 78));
      *((_DWORD *)this + 96) = v15;
      if ( v15 < 1 )
      {
        v6->cx = 1;
        v15 = 1;
      }
      *((_DWORD *)this + 97) = v15;
    }
    CVisual::SetSize(*((CVisual **)this + 47), v6);
    cx = v6->cx;
    v17 = *((_DWORD *)this + 77) - *((_DWORD *)this + 97) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 47), *((_DWORD *)this + 76) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 47), v17);
    goto LABEL_20;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_20:
  v18 = *((_QWORD *)this + 45);
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 72) )
    {
      CContactStationaryVisual::StopTimer(this);
      CVisual::SetOpacity(this, 0.0);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v19, (int)&UdwmContactStationaryVisual_End, *((_DWORD *)this + 106));
    }
  }
  v20 = *((_QWORD *)this + 46);
  if ( v20 && (*(_BYTE *)(v20 + 72) || (float)*(double *)(v20 + 48) == 1.0) )
  {
    v21 = (*(_DWORD *)(v20 + 8))-- == 1;
    v22 = CDesktopManager::s_fTimelineDirty;
    if ( v21 )
      v22 = 1;
    *((_QWORD *)this + 46) = 0LL;
    CDesktopManager::s_fTimelineDirty = v22;
    v23 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            112LL);
    if ( v23 )
    {
      CTimelineBase::CTimelineBase(v23, *((float *)this + 81), 0.0, 1.0, *((_DWORD *)this + 88));
      *v24 = &CTimeline<float>::`vftable';
    }
    else
    {
      v24 = 0LL;
    }
    v25 = *((_DWORD *)this + 89) & 2;
    *((_QWORD *)this + 45) = v24;
    if ( (_BYTE)v25 )
      v26 = *((float *)this + 84);
    else
      v26 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v26);
  }
  return 0LL;
}
