/*
 * XREFs of ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18041A798
 * Callers:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180415C18 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800295B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x1801350E4 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x18041A780 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A868 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall UwpWindowReadyState::PosChanged(UwpWindowReadyState *this, unsigned int a2, unsigned int a3)
{
  char *v3; // rsi
  int *v5; // r14
  int *v7; // rdi
  char v8; // r12
  char IsReadyForPresentation; // al

  v3 = (char *)this + 8;
  v5 = (int *)((char *)this + 28);
  v7 = (int *)((char *)this + 32);
  v8 = *((_DWORD *)this + 2) == 0;
  if ( a2 != *((_DWORD *)this + 7) || a3 != *v7 )
  {
    if ( *((_BYTE *)this + 24) )
      UwpWindowReadyState::WaitFlags::Set((char *)this + 8, this, 2LL);
    BeginLayoutUpdate(*(_QWORD *)this);
    *(_QWORD *)v5 = __PAIR64__(a3, a2);
  }
  ++*((_QWORD *)this + 2);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    (__int64 *)this,
    (int *)this + 4,
    v5,
    v7);
  UwpWindowReadyState::WaitFlags::Set(v3, this, 8LL);
  IsReadyForPresentation = UwpWindowReadyState::IsReadyForPresentation(this);
  if ( v8 != IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 40, IsReadyForPresentation);
}
