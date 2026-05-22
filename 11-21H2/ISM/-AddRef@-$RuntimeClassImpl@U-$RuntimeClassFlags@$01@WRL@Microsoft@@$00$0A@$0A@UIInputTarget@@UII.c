/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputDestComparable@@UIInputSiteTarget@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007900
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputDestComparable@@UIInputSiteTarget@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18004F960 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInp_ea_18004F960.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputDestComparable@@UIInputSiteTarget@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18004F980 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInp_ea_18004F980.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputTarget,IInputDestComparable,IInputSiteTarget>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // edx

  v1 = *(_DWORD *)(a1 + 28);
  if ( v1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  while ( v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 28), v1 + 1, v1) )
  {
    v1 = *(_DWORD *)(a1 + 28);
    if ( v1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
  }
  return (unsigned int)(v1 + 1);
}
