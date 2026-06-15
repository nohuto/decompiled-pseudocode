/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180033108
 * Callers:
 *     ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x1800331B8 (--1CAudioSessionPropertyStore@@EEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPropertyStore@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180033910 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPropertyStore@@@WRL@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001A7C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release((volatile signed __int32 *)(2 * v1));
  return result;
}
