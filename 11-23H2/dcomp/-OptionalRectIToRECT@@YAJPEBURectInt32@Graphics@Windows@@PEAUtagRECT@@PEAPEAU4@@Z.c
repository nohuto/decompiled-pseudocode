/*
 * XREFs of ?OptionalRectIToRECT@@YAJPEBURectInt32@Graphics@Windows@@PEAUtagRECT@@PEAPEAU4@@Z @ 0x180152B6C
 * Callers:
 *     ?Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32@64@@Z @ 0x180152C5C (-Scroll@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBURectInt32@Graphics@4@0AEBUPointInt32.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RectIToRECT@@YAJAEBURectInt32@Graphics@Windows@@PEAUtagRECT@@@Z @ 0x180152BD0 (-RectIToRECT@@YAJAEBURectInt32@Graphics@Windows@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall OptionalRectIToRECT(
        const struct Windows::Graphics::RectInt32 *a1,
        struct tagRECT *a2,
        struct tagRECT **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a1 )
  {
    v5 = RectIToRECT(a1, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x210,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\precomp.hpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    *a3 = a2;
  }
  return 0LL;
}
