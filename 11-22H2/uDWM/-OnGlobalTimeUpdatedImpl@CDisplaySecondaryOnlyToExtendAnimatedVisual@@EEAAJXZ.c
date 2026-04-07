/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BEF40
 * Callers:
 *     <none>
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18000D0CC (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180052D5C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800BEDBC (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF380 (-ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // edi
  struct CAnimatedTransitionVisual **v5; // r14
  CBaseObject *v6; // rbx
  HWND ShellWindowForDesktop; // rax
  struct CWindowData *WindowDataByHwnd; // rax
  volatile signed __int32 *v9; // rdx
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // r15
  struct CAnimatedTransitionVisual *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // r12d
  struct CAnimatedTransitionVisual *v22; // rax
  CVisual *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int inserted; // eax
  struct tagPOINT **v27; // rbx
  _DWORD *v28; // r14
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // r15d
  int v33; // ecx
  int v34; // eax
  int v35; // r12d
  struct tagPOINT *v36; // rax
  CVisual *v37; // rcx
  LONG x; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  bool v41; // zf
  char v42; // al
  int v43; // eax
  int v45; // [rsp+20h] [rbp-50h]
  unsigned __int64 v46; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-30h] BYREF
  CBaseObject *v49; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v50; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = (struct CAnimatedTransitionVisual **)((char *)this + 448);
  if ( !*((_QWORD *)this + 56) || !*((_QWORD *)this + 57) )
  {
    v48 = 0LL;
    GetDesktopID(1LL, &v48, a3);
    if ( !*v5 )
    {
      v6 = 0LL;
      v49 = 0LL;
      ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                v48);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           ShellWindowForDesktop);
      if ( WindowDataByHwnd )
      {
        v9 = (volatile signed __int32 *)*((_QWORD *)WindowDataByHwnd + 55);
        if ( v9 )
        {
          wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(&v49, v9);
          v10 = 0;
          if ( *((_DWORD *)this + 77) - *((_DWORD *)this + 75) >= 0 )
            v10 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
          v11 = 0;
          if ( *((_DWORD *)this + 76) - *((_DWORD *)this + 74) >= 0 )
            v11 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
          v6 = v49;
          if ( *((_DWORD *)v49 + 32) == v11 && *((_DWORD *)v49 + 33) == v10 )
          {
            v12 = (_DWORD *)((char *)this + 484);
            v50.left = *((_DWORD *)this + 121) - *((_DWORD *)v49 + 30);
            v50.top = *((_DWORD *)this + 122) - *((_DWORD *)v49 + 31);
            v50.right = *((_DWORD *)this + 123) - *((_DWORD *)v49 + 30);
            v50.bottom = *((_DWORD *)this + 124) - *((_DWORD *)v49 + 31);
            v13 = *v5;
            *v5 = 0LL;
            if ( v13 )
              CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v13 + 8));
            v14 = CAnimatedTransitionVisual::Create(v5);
            v4 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x115u);
LABEL_16:
              CBaseObject::Release(v6);
LABEL_55:
              CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
              return (unsigned int)v4;
            }
            v15 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v5, v6, 1, &v50);
            v4 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x116u);
              goto LABEL_16;
            }
            v16 = *((_DWORD *)this + 123) - *v12;
            v17 = v16;
            if ( v16 < 0 )
              v17 = 0;
            LODWORD(v47) = v17;
            v18 = 0;
            if ( v16 >= 0 )
              v18 = v16;
            v19 = *((_DWORD *)this + 124) - *((_DWORD *)this + 122);
            v20 = v19;
            if ( v19 < 0 )
              v20 = 0;
            HIDWORD(v47) = v20;
            v21 = 0;
            if ( v19 >= 0 )
              v21 = v19;
            CAnimatedTransitionVisual::SetBeginRect(
              (struct tagPOINT *)*v5,
              (const struct tagRECT *)((char *)this + 484));
            v22 = *v5;
            *(_OWORD *)((char *)v22 + 872) = *(_OWORD *)v12;
            v23 = (struct CAnimatedTransitionVisual *)((char *)v22 + 8);
            v24 = *((_DWORD *)v22 + 24);
            if ( (v24 & 0x1000) == 0 )
            {
              *((_DWORD *)v23 + 22) = v24 | 0x1000;
              CVisual::PropagateDirtyChildren(v23);
            }
            v25 = (__int64)*v5 + 8;
            v46 = __PAIR64__(v21, v18);
            (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v25 + 104LL))(v25, &v46);
            *((_QWORD *)*v5 + 119) = v47;
            CVisual::SetInterpolationMode((unsigned int *)*v5 + 2, 1u);
            inserted = VisualCollection::InsertRelative(
                         (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 32),
                         ((unsigned __int64)*v5 + 8) & -(__int64)(*v5 != 0LL),
                         0LL,
                         0,
                         v45);
            v4 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x120u);
              goto LABEL_16;
            }
          }
        }
      }
      if ( v6 )
        CBaseObject::Release(v6);
    }
    v27 = (struct tagPOINT **)((char *)this + 456);
    if ( !*((_QWORD *)this + 57) )
    {
      *v27 = 0LL;
      v28 = (_DWORD *)((char *)this + 500);
      v29 = CDisplayAnimatedVisual::CaptureAndAddVisual(
              this,
              v48,
              (const struct tagRECT *)((char *)this + 500),
              (const struct tagRECT *)((char *)this + 500),
              (struct CAnimatedTransitionVisual **)this + 57);
      v4 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x128u);
        goto LABEL_55;
      }
      v30 = *((_DWORD *)this + 127) - *v28;
      v31 = v30;
      if ( v30 < 0 )
        v31 = 0;
      LODWORD(v46) = v31;
      v32 = 0;
      if ( v30 >= 0 )
        v32 = v30;
      v33 = *((_DWORD *)this + 128) - *((_DWORD *)this + 126);
      v34 = v33;
      if ( v33 < 0 )
        v34 = 0;
      HIDWORD(v46) = v34;
      v35 = 0;
      if ( v33 >= 0 )
        v35 = v33;
      CAnimatedTransitionVisual::SetBeginRect(*v27, (const struct tagRECT *)((char *)this + 500));
      v36 = *v27;
      *(_OWORD *)&v36[109].x = *(_OWORD *)v28;
      v37 = (CVisual *)&v36[1];
      x = v36[12].x;
      if ( (x & 0x1000) == 0 )
      {
        *((_DWORD *)v37 + 22) = x | 0x1000;
        CVisual::PropagateDirtyChildren(v37);
      }
      v39 = (__int64)&(*v27)[1];
      v47 = __PAIR64__(v35, v32);
      (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v39 + 104LL))(v39, &v47);
      (*v27)[119] = (struct tagPOINT)v46;
    }
  }
  v40 = *((_QWORD *)this + 58);
  if ( v40 && *(_BYTE *)(v40 + 72) )
  {
    *((_QWORD *)this + 58) = 0LL;
    v41 = (*(_DWORD *)(v40 + 8))-- == 1;
    v42 = CDesktopManager::s_fTimelineDirty;
    if ( v41 )
      v42 = 1;
    CDesktopManager::s_fTimelineDirty = v42;
    v43 = CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(this);
    v4 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x136u);
      goto LABEL_55;
    }
  }
  else if ( v4 < 0 )
  {
    goto LABEL_55;
  }
  return (unsigned int)v4;
}
