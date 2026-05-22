/*
 * XREFs of ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x1801BA14C
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801BA090 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180027EEC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003D588 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ButtonProcessor::Initialize(ButtonProcessor *this)
{
  int ChildInputProcessor; // ebx
  __int64 v3; // rdx
  HKEY v5; // rcx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 13);
  ChildInputProcessor = CoreUICreate((char *)this + 104);
  if ( ChildInputProcessor < 0 )
  {
    v3 = 54LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    return (unsigned int)ChildInputProcessor;
  }
  *((_WORD *)this + 60) = 0;
  if ( IsEdition(253345LL) )
  {
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 14);
    RegistryWatcher::Create(
      v5,
      L"SYSTEM\\INPUT\\BUTTONS",
      this,
      (void (*)(void *, HKEY))ButtonProcessor::OnButtonRegistryKeyChangeStatic,
      (struct RegistryWatcher **)this + 14);
    *(_DWORD *)(*((_QWORD *)this + 4) + 4LL) |= 4u;
    v6[0] = *((_QWORD *)this + 4);
    v6[1] = *((_QWORD *)this + 3);
    v6[2] = this;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 16);
    ChildInputProcessor = CreateChildInputProcessor(4, v6, (__int64)this + 128);
    if ( ChildInputProcessor < 0 )
    {
      v3 = 83LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
