/*
 * XREFs of ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x1800A0328
 * Callers:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800A01EC (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800522CC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x1800A05A0 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x1800C3144 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x180178D28 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 */

void __fastcall UwpWindowReadyState::PosChanged(UwpWindowReadyState *this, unsigned int a2, unsigned int a3)
{
  char *v3; // rbp
  _QWORD *v5; // rsi
  char v8; // r12
  char IsReadyForPresentation; // al

  v3 = (char *)this + 8;
  v5 = (_QWORD *)((char *)this + 28);
  v8 = *((_DWORD *)this + 2) == 0;
  if ( a2 != *((_DWORD *)this + 7) || a3 != *((_DWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 24) )
      UwpWindowReadyState::WaitFlags::Set((char *)this + 8, this, 2LL);
    BeginLayoutUpdate(*(_QWORD *)this);
    *v5 = __PAIR64__(a3, a2);
  }
  ++*((_QWORD *)this + 2);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    this,
    (char *)this + 16,
    v5,
    (char *)this + 32);
  UwpWindowReadyState::WaitFlags::Set(v3, this, 8LL);
  IsReadyForPresentation = UwpWindowReadyState::IsReadyForPresentation(this);
  if ( v8 != IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 40, IsReadyForPresentation);
}
