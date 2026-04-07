/*
 * XREFs of ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BAC60
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BAF50 (-OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay(
        CDisplayExtendAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  const struct tagRECT *v3; // rsi
  int v5; // edx
  int v6; // r15d
  int v7; // ecx
  int v8; // eax
  int v9; // r12d
  int v10; // ecx
  int v11; // eax
  struct CBaseImageProxy ***v12; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CBaseImageProxy **v14; // rcx
  struct CVisual *v15; // rbp
  int v16; // edi
  __int64 v17; // rdx
  CVisual *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int inserted; // eax
  unsigned int v23; // ebx
  int v24; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  int v27; // [rsp+78h] [rbp+10h] BYREF
  int v28; // [rsp+7Ch] [rbp+14h]
  struct CBaseImageProxy *v29; // [rsp+80h] [rbp+18h]

  v3 = (const struct tagRECT *)((char *)this + 512);
  v5 = *((_DWORD *)this + 130) - *((_DWORD *)this + 128);
  v6 = 0;
  v7 = *((_DWORD *)this + 131);
  v8 = v5;
  if ( v5 < 0 )
    v8 = 0;
  v26 = 0LL;
  LODWORD(v29) = v8;
  v9 = 0;
  if ( v5 >= 0 )
    v6 = v5;
  v10 = v7 - *((_DWORD *)this + 129);
  v11 = v10;
  if ( v10 < 0 )
    v11 = 0;
  HIDWORD(v29) = v11;
  if ( v10 >= 0 )
    v9 = v10;
  GetDesktopID(1LL, &v26, a3);
  v12 = (struct CBaseImageProxy ***)((char *)this + 472);
  if ( !*((_QWORD *)this + 59) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             v26);
    v14 = *v12;
    v15 = RootVisualForDesktop;
    *v12 = 0LL;
    if ( v14 )
      CBaseObject::Release((CBaseObject *)(v14 + 1));
    v16 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 59);
    if ( v16 < 0 )
    {
      v17 = 186LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
        (const char *)(unsigned int)v16);
      return (unsigned int)v16;
    }
    v16 = CAnimatedTransitionVisual::SetVisual(*v12, v15, 1, v3);
    if ( v16 < 0 )
    {
      v17 = 190LL;
      goto LABEL_14;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v12, v3);
    v19 = (CVisual *)(*v12 + 1);
    *(struct tagRECT *)(*v12 + 109) = *v3;
    v20 = *((_DWORD *)v19 + 22);
    if ( (v20 & 0x1000) == 0 )
    {
      *((_DWORD *)v19 + 22) = v20 | 0x1000;
      CVisual::PropagateDirtyChildren(v19);
    }
    v21 = (__int64)(*v12 + 1);
    v27 = v6;
    v28 = v9;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 104LL))(v21, &v27);
    (*v12)[119] = v29;
    CVisual::SetInterpolationMode((unsigned int *)*v12 + 2, 1u);
  }
  inserted = VisualCollection::InsertRelative(
               (CDisplayExtendAnimatedVisual *)((char *)this + 32),
               (unsigned __int64)(*v12 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v12 >> 64),
               0LL,
               0,
               v24);
  v23 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC7,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)inserted);
  return v23;
}
