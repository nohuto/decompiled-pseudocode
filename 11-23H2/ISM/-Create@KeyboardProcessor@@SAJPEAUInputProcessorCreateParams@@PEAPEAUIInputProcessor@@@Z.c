/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0KeyboardProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18003A58C (--0KeyboardProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003B378 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 */

__int64 __fastcall KeyboardProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  KeyboardProcessor *v4; // rax
  KeyboardProcessor *v5; // rax
  KeyboardProcessor *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (KeyboardProcessor *)RefCountedObject::operator new(0x58uLL);
  if ( v4 && (v5 = KeyboardProcessor::KeyboardProcessor(v4, *a1, a1[1]), (v6 = v5) != 0LL) )
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)v5 + 6);
    v7 = KeyboardModifierState::Create((struct KeyboardModifierState **)v6 + 6);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v6;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v7);
    v10 = 71LL;
  }
  else
  {
    v8 = -2147024882;
    v10 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
    (const char *)v8);
  return v8;
}
