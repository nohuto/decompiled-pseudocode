/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BAE80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001A200 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B4618 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800BACFC (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BB2C4 (-ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  int v2; // esi
  struct CAnimatedTransitionVisual **v3; // r15
  CBaseObject *v4; // rbx
  HWND ShellWindowForDesktop; // rax
  struct CWindowData *WindowDataByHwnd; // rax
  volatile signed __int32 *v7; // rdx
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // r12
  struct CAnimatedTransitionVisual *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // esi
  int v17; // edi
  int v18; // eax
  struct CAnimatedTransitionVisual *v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int inserted; // eax
  struct tagPOINT **v23; // r15
  _DWORD *v24; // r13
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edi
  int v29; // ebx
  int v30; // eax
  struct tagPOINT *v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  bool v35; // zf
  char v36; // al
  int v37; // eax
  struct tagPOINT v39; // [rsp+30h] [rbp-40h] BYREF
  __int64 v40; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-30h] BYREF
  CBaseObject *v42; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v43; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v3 = (struct CAnimatedTransitionVisual **)((char *)this + 448);
  if ( !*((_QWORD *)this + 56) || !*((_QWORD *)this + 57) )
  {
    v41 = 0LL;
    GetDesktopID(1LL, &v41);
    if ( !*v3 )
    {
      v4 = 0LL;
      v42 = 0LL;
      ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 52));
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           ShellWindowForDesktop);
      if ( WindowDataByHwnd )
      {
        v7 = (volatile signed __int32 *)*((_QWORD *)WindowDataByHwnd + 55);
        if ( v7 )
        {
          wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(&v42, v7);
          v8 = 0;
          if ( *((_DWORD *)this + 77) - *((_DWORD *)this + 75) >= 0 )
            v8 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
          v9 = 0;
          if ( *((_DWORD *)this + 76) - *((_DWORD *)this + 74) >= 0 )
            v9 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
          v4 = v42;
          if ( *((_DWORD *)v42 + 32) == v9 && *((_DWORD *)v42 + 33) == v8 )
          {
            v10 = (_DWORD *)((char *)this + 484);
            v43.left = *((_DWORD *)this + 121) - *((_DWORD *)v42 + 30);
            v43.top = *((_DWORD *)this + 122) - *((_DWORD *)v42 + 31);
            v43.right = *((_DWORD *)this + 123) - *((_DWORD *)v42 + 30);
            v43.bottom = *((_DWORD *)this + 124) - *((_DWORD *)v42 + 31);
            v11 = *v3;
            *v3 = 0LL;
            if ( v11 )
              CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v11 + 8));
            v12 = CAnimatedTransitionVisual::Create(v3);
            v2 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x115u);
LABEL_16:
              CBaseObject::Release(v4);
LABEL_51:
              CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
              return (unsigned int)v2;
            }
            v13 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v3, v4, 1, &v43);
            v2 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x116u);
              goto LABEL_16;
            }
            v14 = *((_DWORD *)this + 123) - *v10;
            v15 = v14;
            if ( v14 < 0 )
              v15 = 0;
            LODWORD(v40) = v15;
            v16 = 0;
            if ( v14 >= 0 )
              v16 = v14;
            v17 = *((_DWORD *)this + 124) - *((_DWORD *)this + 122);
            v18 = v17;
            if ( v17 < 0 )
              v18 = 0;
            HIDWORD(v40) = v18;
            CAnimatedTransitionVisual::SetBeginRect(
              (struct tagPOINT *)*v3,
              (const struct tagRECT *)((char *)this + 484));
            v19 = *v3;
            *(_OWORD *)((char *)v19 + 872) = *(_OWORD *)v10;
            CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v19 + 8), 4096);
            v20 = (__int64)*v3 + 8;
            v39.x = v16;
            v21 = 0;
            if ( v17 >= 0 )
              v21 = v17;
            v39.y = v21;
            (*(void (__fastcall **)(__int64, struct tagPOINT *))(*(_QWORD *)v20 + 96LL))(v20, &v39);
            *((_QWORD *)*v3 + 119) = v40;
            CVisual::SetInterpolationMode((unsigned int *)*v3 + 2, 1u);
            inserted = VisualCollection::InsertRelative(
                         (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 32),
                         (struct CVisual *)(((unsigned __int64)*v3 + 8) & -(__int64)(*v3 != 0LL)),
                         0LL,
                         0,
                         1);
            v2 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x120u);
              goto LABEL_16;
            }
          }
        }
      }
      if ( v4 )
        CBaseObject::Release(v4);
    }
    v23 = (struct tagPOINT **)((char *)this + 456);
    if ( !*((_QWORD *)this + 57) )
    {
      *v23 = 0LL;
      v24 = (_DWORD *)((char *)this + 500);
      v25 = CDisplayAnimatedVisual::CaptureAndAddVisual(
              this,
              v41,
              (const struct tagRECT *)((char *)this + 500),
              (const struct tagRECT *)((char *)this + 500),
              (struct CAnimatedTransitionVisual **)this + 57);
      v2 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x128u);
        goto LABEL_51;
      }
      v26 = *((_DWORD *)this + 127) - *v24;
      v27 = v26;
      if ( v26 < 0 )
        v27 = 0;
      v39.x = v27;
      v28 = 0;
      if ( v26 >= 0 )
        v28 = v26;
      v29 = *((_DWORD *)this + 128) - *((_DWORD *)this + 126);
      v30 = v29;
      if ( v29 < 0 )
        v30 = 0;
      v39.y = v30;
      CAnimatedTransitionVisual::SetBeginRect(*v23, (const struct tagRECT *)((char *)this + 500));
      v31 = *v23;
      *(_OWORD *)&v31[109].x = *(_OWORD *)v24;
      CVisual::SetDirtyFlags((CVisual *)&v31[1], 4096);
      v32 = (__int64)&(*v23)[1];
      LODWORD(v40) = v28;
      v33 = 0;
      if ( v29 >= 0 )
        v33 = v29;
      HIDWORD(v40) = v33;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 96LL))(v32, &v40);
      (*v23)[119] = v39;
    }
  }
  v34 = *((_QWORD *)this + 58);
  if ( v34 && *(_BYTE *)(v34 + 72) )
  {
    *((_QWORD *)this + 58) = 0LL;
    v35 = (*(_DWORD *)(v34 + 8))-- == 1;
    v36 = CDesktopManager::s_fTimelineDirty;
    if ( v35 )
      v36 = 1;
    CDesktopManager::s_fTimelineDirty = v36;
    v37 = CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(this);
    v2 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x136u);
      goto LABEL_51;
    }
  }
  else if ( v2 < 0 )
  {
    goto LABEL_51;
  }
  return (unsigned int)v2;
}
