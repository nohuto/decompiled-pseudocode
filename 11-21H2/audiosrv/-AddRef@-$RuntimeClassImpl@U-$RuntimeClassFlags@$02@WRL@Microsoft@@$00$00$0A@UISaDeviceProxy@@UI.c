/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009A90
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18006B1A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProx.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18006B1C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProc_ea_18006B1C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18006B1E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDe_ea_18006B1E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  signed __int32 v3; // r9d
  unsigned int v5; // r9d
  bool v6; // zf
  signed __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0x7FFFFFFF;
  do
  {
    if ( v1 < 0 )
    {
      v3 = *(_DWORD *)(2 * v1 + 0x10);
      if ( v3 != 0x7FFFFFFF )
      {
        while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v3 + 1, v3) )
        {
          v3 = *(_DWORD *)(2 * v1 + 0x10);
          if ( v3 == 0x7FFFFFFF )
            return v2;
        }
        return (unsigned int)(v3 + 1);
      }
      return v2;
    }
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v2;
    v5 = v1 + 1;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 + 1, v1);
    v6 = v1 == v7;
    v1 = v7;
  }
  while ( !v6 );
  return v5;
}
