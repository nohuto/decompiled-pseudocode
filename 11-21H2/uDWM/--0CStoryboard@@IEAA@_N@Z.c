/*
 * XREFs of ??0CStoryboard@@IEAA@_N@Z @ 0x1800D4768
 * Callers:
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800D44B8 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x1800D44E8 (--0CFade@@IEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800D4578 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800D45A8 (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 *     ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ @ 0x1800D45EC (--0CInputView_SizeOrModeChangeBase@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800D46C8 (--0CSlide@@IEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800D47D8 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800D506C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

CStoryboard *__fastcall CStoryboard::CStoryboard(CStoryboard *this, char a2)
{
  CStoryboard *result; // rax

  *((_DWORD *)this + 7) = -1;
  *(_QWORD *)this = &CFade::`vftable'{for `CBaseObject'};
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 18) = -1;
  result = this;
  *((GUID *)this + 3) = GUID_NULL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 68) = a2;
  *((_BYTE *)this + 76) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_OWORD *)this + 2) = 0LL;
  return result;
}
