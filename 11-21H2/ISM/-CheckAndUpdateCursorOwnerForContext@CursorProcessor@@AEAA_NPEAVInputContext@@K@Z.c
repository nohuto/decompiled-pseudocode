/*
 * XREFs of ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x180138B0C
 * Callers:
 *     ?OnInput@CursorProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180139410 (-OnInput@CursorProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE7F4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z @ 0x180138D14 (-CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z.c)
 *     ?GenerateMouseLeaveEventMessage@CursorProcessor@@AEBAXKK@Z @ 0x180138FF0 (-GenerateMouseLeaveEventMessage@CursorProcessor@@AEBAXKK@Z.c)
 *     ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x180139048 (-GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA-AU-$pair@KK@std@@PEAVInputCont.c)
 *     ?InputTargetsSameByInputSite@CursorProcessor@@CA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z @ 0x18013918C (-InputTargetsSameByInputSite@CursorProcessor@@CA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z.c)
 *     ?UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z @ 0x1801395F8 (-UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CursorProcessor::CheckAndUpdateCursorOwnerForContext(
        CursorProcessor *this,
        struct InputContext *a2,
        unsigned int a3)
{
  char v6; // r14
  const struct IInputTarget *v7; // rbx
  unsigned int v8; // r15d
  unsigned int v9; // edi
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF
  const struct IInputTarget *v12; // [rsp+78h] [rbp+48h] BYREF
  const struct IInputTarget *v13; // [rsp+88h] [rbp+58h] BYREF

  v6 = 0;
  v7 = (const struct IInputTarget *)*((_QWORD *)a2 + 2);
  v13 = v7;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v13);
  if ( *((_BYTE *)this + 72)
    || v7 != *((const struct IInputTarget **)this + 11)
    && (v11 = *((_QWORD *)this + 11),
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v11),
        v12 = v7,
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v12),
        !(unsigned __int8)CursorProcessor::InputTargetsSameByInputSite(&v12, &v11)) )
  {
    CursorProcessor::GetWindowsMessageProcessAndThreadFromContext(&v11, a2);
    v8 = HIDWORD(v11);
    v9 = v11;
    if ( *((_QWORD *)this + 14) != v11 )
    {
      InputTraceLogging::Cursor::CursorProcessorTargetUpdated(
        *((const struct IInputTarget **)this + 11),
        v7,
        *((_DWORD *)this + 28),
        v11,
        *((_DWORD *)this + 29),
        HIDWORD(v11));
      CursorProcessor::UpdateCursorOwnerAndNotifyTargets(this, v8, a3);
      CursorProcessor::GenerateMouseLeaveEventMessage(this, v9, v8);
      *((_BYTE *)this + 72) = 0;
      *((_DWORD *)this + 28) = v9;
      *((_DWORD *)this + 29) = v8;
      v6 = 1;
    }
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 11, (__int64 *)&v13);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v13);
  return v6;
}
