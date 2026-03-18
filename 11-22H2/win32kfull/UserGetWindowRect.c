/*
 * XREFs of UserGetWindowRect @ 0x1C00769D0
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C0077DA8 (GreUpdateSpriteClipRgn.c)
 *     DxgkEngGetWindowRect @ 0x1C00BEB10 (DxgkEngGetWindowRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetWindowRect(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( result )
  {
    v4 = *(_QWORD *)(result + 40);
    result = 1LL;
    *v2 = *(_OWORD *)(v4 + 88);
  }
  return result;
}
