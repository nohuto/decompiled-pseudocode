/*
 * XREFs of ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B74E4
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B77D0 (-OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay(CDisplayExtendAnimatedVisual *this)
{
  const struct tagRECT *v1; // rsi
  int v3; // edx
  int v4; // r15d
  int v5; // ecx
  int v6; // eax
  int v7; // r12d
  int v8; // ecx
  int v9; // eax
  struct CBaseImageProxy ***v10; // rbx
  struct CBaseImageProxy **v11; // rcx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CBaseImageProxy **v13; // rcx
  struct CVisual *v14; // rbp
  int v15; // edi
  __int64 v16; // rdx
  struct CBaseImageProxy **v18; // rcx
  __int64 v19; // rcx
  int inserted; // eax
  unsigned int v21; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+7Ch] [rbp+14h]
  struct CBaseImageProxy *v26; // [rsp+80h] [rbp+18h]

  v1 = (const struct tagRECT *)((char *)this + 512);
  v3 = *((_DWORD *)this + 130) - *((_DWORD *)this + 128);
  v4 = 0;
  v5 = *((_DWORD *)this + 131);
  v6 = v3;
  if ( v3 < 0 )
    v6 = 0;
  v23 = 0LL;
  LODWORD(v26) = v6;
  v7 = 0;
  if ( v3 >= 0 )
    v4 = v3;
  v8 = v5 - *((_DWORD *)this + 129);
  v9 = v8;
  if ( v8 < 0 )
    v9 = 0;
  HIDWORD(v26) = v9;
  if ( v8 >= 0 )
    v7 = v8;
  GetDesktopID(1LL, &v23);
  v10 = (struct CBaseImageProxy ***)((char *)this + 472);
  v11 = (struct CBaseImageProxy **)*((_QWORD *)this + 59);
  if ( !v11 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                             v23);
    v13 = *v10;
    v14 = RootVisualForDesktop;
    *v10 = 0LL;
    if ( v13 )
      CBaseObject::Release((CBaseObject *)(v13 + 1));
    v15 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 59);
    if ( v15 < 0 )
    {
      v16 = 186LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
        (const char *)(unsigned int)v15);
      return (unsigned int)v15;
    }
    v15 = CAnimatedTransitionVisual::SetVisual(*v10, v14, 1, v1);
    if ( v15 < 0 )
    {
      v16 = 190LL;
      goto LABEL_14;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v10, v1);
    v18 = *v10;
    *(struct tagRECT *)(v18 + 109) = *v1;
    CVisual::SetDirtyFlags((CVisual *)(v18 + 1), 4096);
    v19 = (__int64)(*v10 + 1);
    v24 = v4;
    v25 = v7;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 96LL))(v19, &v24);
    (*v10)[119] = v26;
    CVisual::SetInterpolationMode((unsigned int *)*v10 + 2, 1u);
    v11 = *v10;
  }
  inserted = VisualCollection::InsertRelative(
               (CDisplayExtendAnimatedVisual *)((char *)this + 32),
               (struct CVisual *)((unsigned __int64)(v11 + 1) & -(__int64)(v11 != 0LL)),
               0LL,
               0,
               1);
  v21 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC7,
    (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)inserted);
  return v21;
}
