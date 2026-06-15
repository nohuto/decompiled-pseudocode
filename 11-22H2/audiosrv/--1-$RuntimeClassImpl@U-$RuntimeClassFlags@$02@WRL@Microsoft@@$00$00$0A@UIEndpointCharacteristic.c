/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800056C4
 * Callers:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18000557C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIEndpointCharacteristics@@@WRL@Microsoft@@UEAA@XZ @ 0x18014A4E8 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIEndpointCharacteristics@@@WRL@Micros.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIEndpointCharacteristics@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18014AD00 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIEndpointCharacteristics@@@WRL@Micro.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IEndpointCharacteristics>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IEndpointCharacteristics>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return result;
}
