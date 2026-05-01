/*
 * XREFs of ??$_AnimateComponent@P8IDCompThumbnail@@EAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@_ENW42@PEAU3@@CSwitchItemElement@@IEAAJW4SwitchItemComponent@@P8IDCompThumbnail@@EAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@_EN12@Z @ 0x180572548
 * Callers:
 *     ?SetComponentOpacity@CSwitchItemElement@@UEAAJW4SwitchItemComponent@@NW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180573200 (-SetComponentOpacity@CSwitchItemElement@@UEAAJW4SwitchItemComponent@@NW4DCompThumbnailAnimation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IDCompThumbnail@@$BCA@AA @ 0x1802A43D0 (--_9IDCompThumbnail@@$BCA@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ____AnimateComponent_P8IDCompThumbnail__EAAJNW4DCompThumbnailAnimation__PEAUIUIAnimationStoryboardEventHandler2____ENW42_PEAU3__CSwitchItemElement__IEAAJW4SwitchItemComponent__P8IDCompThumbnail__EAAJNW4DCompThumbnailAnimation__PEAUIUIAnimationStoryboardEventHandler2____EN12_Z(
        _QWORD *a1,
        int a2,
        __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  if ( !a2 )
  {
    v11 = a1[76];
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, &v14);
      v12 =  IDCompThumbnail::`vcall'{32,{flat}}(v14);
      v10 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x179,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
          (const char *)(unsigned int)v12);
      goto LABEL_15;
    }
    return 0LL;
  }
  if ( a2 != 1 )
    return 0LL;
  v4 = a1[77];
  if ( v4 )
  {
    v5 =  IDCompThumbnail::`vcall'{32,{flat}}(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17F,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  v8 = a1[75];
  if ( !v8 )
    return 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v14);
  if ( !v14 || (v9 =  IDCompThumbnail::`vcall'{32,{flat}}(v14), v10 = v9, v9 >= 0) )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
    (const char *)(unsigned int)v9);
LABEL_15:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
  return v10;
}
