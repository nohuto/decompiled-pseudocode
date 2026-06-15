/*
 * XREFs of ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x140004CA4
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x14000518C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x14007E768 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
  *a1 = a2;
  return result;
}
