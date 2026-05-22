/*
 * XREFs of ?RectIToRECT@@YAJAEBURectInt32@Graphics@Windows@@PEAUtagRECT@@@Z @ 0x180152BD0
 * Callers:
 *     ?OptionalRectIToRECT@@YAJPEBURectInt32@Graphics@Windows@@PEAUtagRECT@@PEAPEAU4@@Z @ 0x180152B6C (-OptionalRectIToRECT@@YAJPEBURectInt32@Graphics@Windows@@PEAUtagRECT@@PEAPEAU4@@Z.c)
 *     ?HintTiles@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJIPEAURectInt32@Graphics@4@@Z @ 0x180157164 (-HintTiles@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJIPEAURectInt32@Graphics@4@@Z.c)
 *     ?Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z @ 0x1801960CC (-Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RectIToRECT(LONG *a1, struct tagRECT *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1 + (__int64)a1[2];
  if ( (unsigned __int64)(v2 + 0x80000000LL) > 0xFFFFFFFF )
  {
    a2->right = -1;
    v5 = 511LL;
  }
  else
  {
    a2->right = v2;
    v3 = a1[1] + (__int64)a1[3];
    if ( (unsigned __int64)(v3 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      a2->bottom = v3;
      a2->left = *a1;
      a2->top = a1[1];
      return 0LL;
    }
    a2->bottom = -1;
    v5 = 512LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\precomp.hpp",
    (const char *)0x80070216LL);
  return 2147942934LL;
}
