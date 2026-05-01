/*
 * XREFs of ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1800901CC
 * Callers:
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x1800900B0 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 *     ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800C2D40 (-v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18040DFA4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18040E098 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall WindowReadyState::WaitFlags::Clear(int *a1, __int64 *a2, int a3)
{
  int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int16 *v8; // rax
  REGHANDLE v9; // rcx
  int v11; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v12[3]; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v13; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  __int64 *v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+1Fh]
  _DWORD *v21; // [rsp+98h] [rbp+27h]
  __int64 v22; // [rsp+A0h] [rbp+2Fh]
  int *v23; // [rsp+A8h] [rbp+37h]
  __int64 v24; // [rsp+B0h] [rbp+3Fh]

  v3 = *a1;
  *a1 &= ~a3;
  v6 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    v11 = *a1;
    v13 = *a2;
    v23 = &v11;
    v21 = v12;
    v19 = &v13;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v8 = *(unsigned __int16 **)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 32);
    UserData.Ptr = (ULONGLONG)v8;
    v12[0] = v3;
    v24 = 4LL;
    v22 = 4LL;
    v20 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *v8;
    v16 = &unk_1806B2C8E;
    UserData.Reserved = 2;
    v17 = 66;
    v18 = 1;
    v12[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v6) = EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v6;
}
