/*
 * XREFs of ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x180528BD0
 * Callers:
 *     ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x1805295B0 (-ObservedKeyUp@JointResize@@UEAAJI@Z.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180529764 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@AEBU_GUID@@PEAPEAX@Z @ 0x18052BF8C (-GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDivide.c)
 */

__int64 __fastcall JointResize::CreateGhostDivider(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // ebp
  unsigned int v10; // esi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rdi
  __int64 v16; // r14
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  _QWORD *v20; // rdi
  int Instance; // ebx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-58h]
  struct tagRECT rcDst; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = *(_DWORD *)(a1 + 320) - 10;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = 3;
        if ( v8 != 3 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            485LL,
            (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)0x80070057LL,
            v23);
      }
      else
      {
        v9 = 2;
      }
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    v9 = 0;
  }
  v10 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v11 = *(_QWORD *)(a1 + 200);
  rcDst = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v11 + 128LL))(v11, &rcDst);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EC,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  v15 = *(_QWORD *)(a1 + 216);
  v16 = *(_QWORD *)(a1 + 224);
  if ( v15 != v16 )
  {
    do
    {
      if ( !*(_BYTE *)(v15 + 40) )
        goto LABEL_21;
      UnionRect(&rcDst, &rcDst, (const RECT *)(v15 + 24));
      v15 += 88LL;
    }
    while ( v15 != v16 );
    v17 = *(_DWORD *)(a1 + 320);
    if ( v17 >= 10 )
    {
      if ( v17 <= 11 )
      {
        v18 = *(_DWORD *)(a1 + 308) - *(_DWORD *)(a1 + 300);
        v19 = rcDst.bottom - rcDst.top;
        goto LABEL_20;
      }
      if ( v17 == 12 || v17 == 15 )
      {
        v18 = *(_DWORD *)(a1 + 304) - *(_DWORD *)(a1 + 296);
        v19 = rcDst.right - rcDst.left;
LABEL_20:
        LOBYTE(v10) = v19 != v18;
        goto LABEL_21;
      }
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      523LL,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)0x8000FFFFLL,
      v23);
  }
LABEL_21:
  v20 = (_QWORD *)(a1 + 176);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 176));
  Instance = GhostDivider_CreateInstance(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 200), v9, v10);
  if ( Instance < 0 )
  {
    v22 = 528LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v20 + 24LL))(*v20, a2);
  if ( Instance < 0 )
  {
    v22 = 529LL;
    goto LABEL_23;
  }
  return 0LL;
}
