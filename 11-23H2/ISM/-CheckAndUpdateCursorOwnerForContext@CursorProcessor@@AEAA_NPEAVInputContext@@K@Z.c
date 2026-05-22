/*
 * XREFs of ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x180158A9C
 * Callers:
 *     ?OnInput@CursorProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801593B0 (-OnInput@CursorProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044CFC (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z @ 0x180158CA4 (-CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z.c)
 *     ?GenerateMouseLeaveEventMessage@CursorProcessor@@AEBAXKK@Z @ 0x180158F80 (-GenerateMouseLeaveEventMessage@CursorProcessor@@AEBAXKK@Z.c)
 *     ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x180158FE0 (-GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA-AU-$pair@KK@std@@PEAVInputCont.c)
 *     ?InputTargetsSameByInputSite@CursorProcessor@@CA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z @ 0x180159124 (-InputTargetsSameByInputSite@CursorProcessor@@CA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z.c)
 *     ?UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z @ 0x180159598 (-UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CursorProcessor::CheckAndUpdateCursorOwnerForContext(
        CursorProcessor *this,
        struct InputContext *a2,
        unsigned int a3)
{
  char v6; // r14
  const struct IInputTarget *v7; // rbx
  const struct IInputTarget **v8; // r15
  unsigned int v9; // r12d
  unsigned int v10; // edi
  const struct IInputTarget *v12; // [rsp+70h] [rbp+40h] BYREF
  const struct IInputTarget *v13; // [rsp+78h] [rbp+48h] BYREF
  const struct IInputTarget *v14; // [rsp+88h] [rbp+58h] BYREF

  v6 = 0;
  v7 = (const struct IInputTarget *)*((_QWORD *)a2 + 2);
  v14 = v7;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v14);
  v8 = (const struct IInputTarget **)((char *)this + 88);
  if ( *((_BYTE *)this + 72)
    || v7 != *v8
    && (v12 = *v8,
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v12),
        v13 = v7,
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v13),
        !(unsigned __int8)CursorProcessor::InputTargetsSameByInputSite(&v13, &v12)) )
  {
    CursorProcessor::GetWindowsMessageProcessAndThreadFromContext(&v12, a2);
    v9 = HIDWORD(v12);
    v10 = (unsigned int)v12;
    if ( *((const struct IInputTarget **)this + 14) != v12 )
    {
      InputTraceLogging::Cursor::CursorProcessorTargetUpdated(
        *v8,
        v7,
        *((_DWORD *)this + 28),
        (unsigned int)v12,
        *((_DWORD *)this + 29),
        HIDWORD(v12));
      CursorProcessor::UpdateCursorOwnerAndNotifyTargets(this, v9, a3);
      CursorProcessor::GenerateMouseLeaveEventMessage(this, v10, v9);
      *((_BYTE *)this + 72) = 0;
      *((_DWORD *)this + 28) = v10;
      *((_DWORD *)this + 29) = v9;
      v6 = 1;
    }
    Microsoft::WRL::ComPtr<IMessageSession>::operator=((__int64 *)this + 11, (__int64 *)&v14);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v14);
  return v6;
}
