/*
 * XREFs of ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x1800C2E68
 * Callers:
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800A0000 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1800A0130 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1800A03FC (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A04F0 (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall UwpWindowReadyState::WaitFlags::Clear(int *a1, __int64 *a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  _DWORD *v7; // rcx
  int v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  int *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  int *v16; // [rsp+88h] [rbp+37h]
  __int64 v17; // [rsp+90h] [rbp+3Fh]

  v3 = *a1;
  *a1 &= ~a3;
  result = wil::details::static_lazy<ViewManagerInteropLogging>::get(
             a1,
             _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(result + 8);
  if ( *v7 > 5u )
  {
    v8 = *a1;
    v10 = *a2;
    v16 = &v8;
    v14 = &v9;
    v12 = &v10;
    v9 = v3;
    v17 = 4LL;
    v15 = 4LL;
    v13 = 8LL;
    return tlgWriteTransfer_EventWriteTransfer((int)v7, (int)&dword_18085A228, 0, 0, 5u, &v11);
  }
  return result;
}
