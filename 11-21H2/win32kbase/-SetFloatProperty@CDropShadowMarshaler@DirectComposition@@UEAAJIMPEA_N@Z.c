/*
 * XREFs of ?SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0231D80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetFloatProperty(
        DirectComposition::CDropShadowMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  *a4 = 0;
  if ( a2 )
  {
    if ( a2 != 4 )
      return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 30) = a3;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 26) = a3;
  }
  *a4 = 1;
  return 0LL;
}
