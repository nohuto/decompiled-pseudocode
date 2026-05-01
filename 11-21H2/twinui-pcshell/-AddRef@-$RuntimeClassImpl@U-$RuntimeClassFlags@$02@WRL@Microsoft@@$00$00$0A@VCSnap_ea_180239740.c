/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180239740
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18020F3D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControl.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18020F3F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnap_ea_18020F3F0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@WBCA@EAAKXZ @ 0x18020F410 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnap_ea_18020F410.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18020F430 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnap_ea_18020F430.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x18020F450 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnap_ea_18020F450.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x18020F470 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnap_ea_18020F470.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x18020F490 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnap_ea_18020F490.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 304);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 304), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
