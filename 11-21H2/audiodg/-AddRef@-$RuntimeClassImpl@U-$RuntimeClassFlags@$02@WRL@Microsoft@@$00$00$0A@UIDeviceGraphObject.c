/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400243C0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140033E30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDevi_ea_140033E30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x140033E50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDevi_ea_140033E50.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x140033E70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDevi_ea_140033E70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  signed __int32 v4; // r9d
  unsigned int v5; // ecx
  bool v7; // zf
  signed __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v3;
    v5 = v1 + 1;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 + 1, v1);
    v7 = v1 == v8;
    v1 = v8;
    if ( v7 )
      return v5;
  }
  while ( 1 )
  {
    v4 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v4 == 0x7FFFFFFF )
      break;
    if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v4 + 1, v4) )
      return (unsigned int)(v4 + 1);
  }
  return v3;
}
