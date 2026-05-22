/*
 * XREFs of ?HintTiles@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJIPEAURectInt32@Graphics@4@@Z @ 0x180157164
 * Callers:
 *     ?HintTiles@XUCInternal@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJIPEAURectInt32@Graphics@5@@Z @ 0x180157300 (-HintTiles@XUCInternal@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJIPEAURectInt32@Gra.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?SetHintTiles@CSurfaceManager@DirectComposition@@QEAAXPEBUtagRECT@@I@Z @ 0x1800F54AC (-SetHintTiles@CSurfaceManager@DirectComposition@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?RectIToRECT@@YAJAEBURectInt32@Graphics@Windows@@PEAUtagRECT@@@Z @ 0x180152BD0 (-RectIToRECT@@YAJAEBURectInt32@Graphics@Windows@@PEAUtagRECT@@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1801B22A0 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::HintTiles(
        Windows::UI::Composition::CompositionGraphicsDevice *this,
        unsigned int a2,
        LONG *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned int v9; // ecx
  int *v10; // rax
  __int64 v11; // r14
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // esi
  struct tagRECT *v16[2]; // [rsp+20h] [rbp-40h] BYREF
  int v17; // [rsp+30h] [rbp-30h]
  int v18; // [rsp+34h] [rbp-2Ch]
  int v19; // [rsp+38h] [rbp-28h]
  _BYTE v20[16]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  if ( !a2 )
    return 0LL;
  if ( a3 )
  {
    v9 = 0;
    v10 = a3 + 2;
    do
    {
      if ( *(v10 - 2) < 0 || *(v10 - 1) < 0 || *v10 <= 0 || v10[1] <= 0 )
      {
        v6 = 378LL;
        goto LABEL_4;
      }
      ++v9;
      v10 += 4;
    }
    while ( v9 < a2 );
    v11 = *((_QWORD *)this + 26);
    if ( !v11 )
      return 0LL;
    v19 = 0;
    v16[0] = (struct tagRECT *)v20;
    v17 = 1;
    v16[1] = (struct tagRECT *)v20;
    v18 = 1;
    v12 = DynArrayImpl<0>::AddMultiple(v16, 16LL, a2);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = RectIToRECT(&a3[4 * v13], &v16[0][v13]);
        v15 = v14;
        if ( v14 < 0 )
          break;
        if ( ++v13 >= a2 )
        {
          DirectComposition::CSurfaceManager::SetHintTiles(
            *(DirectComposition::CSurfaceManager **)(v11 + 312),
            v16[0],
            a2);
          DynArrayImpl<0>::~DynArrayImpl<0>((void **)v16);
          return 0LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x186,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
        (const char *)(unsigned int)v14);
      v7 = v15;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x183,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
        (const char *)(unsigned int)v12);
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)v16);
  }
  else
  {
    v6 = 367LL;
LABEL_4:
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)0x80070057LL);
  }
  return v7;
}
