/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009710
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18006B200 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBase_ea_18006B200.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBAA@EAAKXZ @ 0x18006B220 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBase_ea_18006B220.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WPI@EAAKXZ @ 0x18006B240 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBase_ea_18006B240.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r9d
  signed __int32 v3; // ecx
  unsigned int v5; // r8d
  bool v6; // zf
  signed __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 272);
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
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 272), v1 + 1, v1);
    v6 = v1 == v7;
    v1 = v7;
  }
  while ( !v6 );
  return v5;
}
