/*
 * XREFs of ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z @ 0x18001D81C
 * Callers:
 *     ?SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z @ 0x18001D700 (-SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z.c)
 *     ?Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV12@@Z @ 0x18001D760 (-Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IMessageSession>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v5);
  }
  return a1;
}
