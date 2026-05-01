/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18010D260
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002B06C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x18010D200 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180436A78 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x18046F860 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x18002BB00 (-BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009742C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x1800B588C (-UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18010D49C (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010DABC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_18010DABC.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x18010DBF8 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x18010DCFC (-StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b77313e954014d84b78f3886c1783ac6___ @ 0x180285798 (Windows--Internal--ComTaskPool--QueueTask__lambda_b77313e954014d84b78f3886c1783ac6___.c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x180285848 (_lambda_b77313e954014d84b78f3886c1783ac6_--_lambda_b77313e954014d84b78f3886c1783ac6_.c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x1802859F8 (_lambda_b77313e954014d84b78f3886c1783ac6_--__lambda_b77313e954014d84b78f3886c1783ac6_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  void *v4; // r14
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  HSTRING v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  HSTRING v18; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h]
  int v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[352]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  v2 = 16LL;
  if ( dword_1809904E8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1809904E8);
    if ( dword_1809904E8 == -1 )
    {
      dword_18098D900 = SHTaskPoolGetUniqueContext(v16);
      Init_thread_footer(&dword_1809904E8);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    v4 = (void *)ExperienceManagerUtils::WindowFromViewWrapper(
                   v3,
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    v4 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v6 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v21,
    "Launch");
  *(_QWORD *)v21 = &SingleViewExperienceTelemetry::Launch::`vftable';
  SingleViewExperienceTelemetry::Launch::StartActivity(
    (SingleViewExperienceTelemetry::Launch *)v21,
    v6,
    StringRawBuffer,
    v4);
  v18 = *(HSTRING *)this;
  newString = 0LL;
  v7 = Microsoft::WRL::Wrappers::HString::Set(&newString, &v18);
  v10 = v7;
  v20 = v7;
  if ( v7 >= 0 )
  {
    if ( (*((_BYTE *)this + 68) & 8) == 0 )
      CSingleViewShellExperience::BoostPriority((__int64)this, 0LL, v8, v9);
    v11 = (HSTRING)*((_QWORD *)this + 12);
    v18 = v11;
    if ( v11 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_(
            v22,
            &v18,
            this,
            &newString);
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_b77313e954014d84b78f3886c1783ac6___(
            v14,
            v13,
            (unsigned int)dword_18098D900,
            v12);
    lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_(v22);
    if ( v10 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x147,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v10,
        (int)v21);
    }
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      v17);
  }
  ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)&newString);
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)v21);
  return (unsigned int)v10;
}
