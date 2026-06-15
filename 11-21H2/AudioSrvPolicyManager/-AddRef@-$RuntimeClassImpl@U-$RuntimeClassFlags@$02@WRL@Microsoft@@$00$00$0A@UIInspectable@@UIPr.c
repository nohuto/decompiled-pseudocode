/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800339D0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180033A30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_180033A30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180033A50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInsp_ea_180033A50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  signed __int64 v6; // rax
  signed __int32 v7; // r9d

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v3;
    v4 = v1 + 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    v5 = v1 == v6;
    v1 = v6;
    if ( v5 )
      return v4;
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v7 == 0x7FFFFFFF )
      break;
    if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v7 + 1, v7) )
      return (unsigned int)(v7 + 1);
  }
  return v3;
}
