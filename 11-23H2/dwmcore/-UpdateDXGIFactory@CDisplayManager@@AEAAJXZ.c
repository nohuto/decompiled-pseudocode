/*
 * XREFs of ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x180100724
 * Callers:
 *     ?Initialize@CDisplayManager@@IEAAJXZ @ 0x1800D2440 (-Initialize@CDisplayManager@@IEAAJXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1801011E8 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180042C70 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800AF054 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x18010086C (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180101048 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x18012DB80 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ??$ReleaseInterface@UIDXGIFactory5@@@@YAXAEAPEAUIDXGIFactory5@@@Z @ 0x180285B6C (--$ReleaseInterface@UIDXGIFactory5@@@@YAXAEAPEAUIDXGIFactory5@@@Z.c)
 */

__int64 __fastcall CDisplayManager::UpdateDXGIFactory(CDisplayManager *this)
{
  int CurrentFrameId; // eax
  int v2; // ecx
  HRESULT v3; // eax
  unsigned int v4; // ebx
  CDisplayManager *v5; // rax
  CComposition *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppFactory; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp+10h] BYREF

  ppFactory = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    CurrentFrameId = GetCurrentFrameId();
    McTemplateU0qqq_EventWriteTransfer(v2, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, CurrentFrameId, 0);
  }
  ppFactory = 0LL;
  v3 = CreateDXGIFactory1(&GUID_7632e1f5_ee65_4dca_87fd_84cd75f8838d, &ppFactory);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = &g_DisplayManager;
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_1803EA188 && (unsigned __int64)(qword_1803EA190 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !byte_1803EA19D )
    {
      (*(void (__fastcall **)(CDisplayManager *, _QWORD))(*(_QWORD *)qword_1803EA188 + 184LL))(
        qword_1803EA188,
        (unsigned int)dword_1803EA198);
      dword_1803EA198 = 0;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &qword_1803EA190,
      0LL);
    ReleaseInterface<IDXGIFactory5>(&qword_1803EA188);
    v5 = (CDisplayManager *)ppFactory;
    ppFactory = 0LL;
    qword_1803EA188 = v5;
    byte_1803EA19D = GetSystemMetrics(4096) != 0;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
    CComposition::ResetTokenThread(v6);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppFactory);
  return v4;
}
