/*
 * XREFs of ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x1805E29B0
 * Callers:
 *     ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x1805E35B0 (-ObservedKeyUp@JointResize@@UEAAJI@Z.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1805E374C (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@AEBU_GUID@@PEAPEAX@Z @ 0x1805E6E94 (-GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDivide.c)
 */

__int64 __fastcall JointResize::CreateGhostDivider(__int64 a1, unsigned int a2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ebp
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // rsi
  __int64 v14; // r14
  int v15; // ecx
  int v16; // eax
  _QWORD *v17; // rsi
  int Instance; // ebx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-58h]
  struct tagRECT rcDst; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 296) - 10;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 3 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1E0,
            (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)0x80070057LL,
            v20);
        v7 = 3;
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)(a1 + 192);
  rcDst = 0LL;
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v8 + 128LL))(v8, &rcDst);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E5,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  v13 = *(_QWORD *)(a1 + 200);
  v14 = *(_QWORD *)(a1 + 208);
  if ( v13 != v14 )
  {
    while ( *(_BYTE *)(v13 + 40) )
    {
      UnionRect(&rcDst, &rcDst, (const RECT *)(v13 + 24));
      v13 += 96LL;
      if ( v13 == v14 )
      {
        if ( *(_DWORD *)(a1 + 296) == 10 || *(_DWORD *)(a1 + 296) == 11 )
        {
          v15 = *(_DWORD *)(a1 + 284) - *(_DWORD *)(a1 + 276);
          v16 = rcDst.bottom - rcDst.top;
        }
        else
        {
          if ( *(_DWORD *)(a1 + 296) != 12 && *(_DWORD *)(a1 + 296) != 15 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x204,
              (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
              (const char *)0x8000FFFFLL,
              v20);
          v15 = *(_DWORD *)(a1 + 280) - *(_DWORD *)(a1 + 272);
          v16 = rcDst.right - rcDst.left;
        }
        LOBYTE(v9) = v16 != v15;
        break;
      }
    }
  }
  v17 = (_QWORD *)(a1 + 176);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 176));
  Instance = GhostDivider_CreateInstance(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 192), v7, v9);
  if ( Instance < 0 )
  {
    v19 = 520LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v17 + 24LL))(*v17, a2);
  if ( Instance < 0 )
  {
    v19 = 521LL;
    goto LABEL_25;
  }
  return 0LL;
}
