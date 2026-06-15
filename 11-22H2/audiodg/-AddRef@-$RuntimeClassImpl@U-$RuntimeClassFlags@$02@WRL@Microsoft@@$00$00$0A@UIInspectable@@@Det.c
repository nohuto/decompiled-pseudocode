/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F020
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140030FD0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_140030FD0.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001F7FC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 24);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::SafeUnknownIncrementReference(
           (Microsoft::WRL::Details *)(2 * v1 + 16),
           (volatile int *)((unsigned __int64)v1 >> 63));
}
