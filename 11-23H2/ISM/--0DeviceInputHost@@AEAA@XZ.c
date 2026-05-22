/*
 * XREFs of ??0DeviceInputHost@@AEAA@XZ @ 0x180096EB4
 * Callers:
 *     ?Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z @ 0x180097194 (-Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003589C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x18003ABFC (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ @ 0x1800972B0 (-InternalRelease@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800972EC (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18009E354 (--0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18009EF4C (-InternalRelease@-$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0190 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800CA6F8 (--0InputProcess@@AEAA@XZ.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18013C284 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 */

// Hidden C++ exception states: #wind=11
DeviceInputHost *__fastcall DeviceInputHost::DeviceInputHost(DeviceInputHost *this)
{
  InputProcess **v2; // r15
  _QWORD *v3; // r14
  __int64 *v4; // rdi
  InputProcess *v5; // rax
  const char *v6; // r9
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  const char *v10; // r9
  int v11; // eax
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct ISMBamos_AutoBamos::BamoConnection *v15; // [rsp+58h] [rbp+10h] BYREF
  InputProcess *v16; // [rsp+60h] [rbp+18h]
  SystemContextEndpoint *v17; // [rsp+68h] [rbp+20h]

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &DeviceInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &DeviceInputHost::`vftable'{for `RefCountedObject'};
  v2 = (InputProcess **)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  v3 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v4 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease((char *)this + 24);
  v5 = (InputProcess *)RefCountedObject::operator new(0x28uLL);
  v16 = v5;
  if ( v5 )
    v5 = InputProcess::InputProcess(v5);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x23,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocess\\lib\\inputprocess.cpp",
      v6);
  *v2 = v5;
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v3);
  *v3 = 0LL;
  InputSystemInternalClientConnection::GetForCurrentThread(&v15);
  v16 = 0LL;
  v17 = (SystemContextEndpoint *)operator new(0x38uLL);
  *v3 = SystemContextEndpoint::SystemContextEndpoint(v17, v15);
  Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v4);
  v9 = InputStateManager::Create(0LL, (struct IRawInputClient **)v4, v7, v8);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)(unsigned int)v9,
      v13);
  v11 = InputProviderManager::InitializeHelper((__int64)this + 48, *v4, 0, v10);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)(unsigned int)v11,
      v13);
  return this;
}
