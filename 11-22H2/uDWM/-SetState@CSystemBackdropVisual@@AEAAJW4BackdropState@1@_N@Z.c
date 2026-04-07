/*
 * XREFs of ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x180017E90
 * Callers:
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001342C (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180023B04 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017C7C (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180017FFC (-CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Compos.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemBackdropVisual::SetState(__int64 a1, int a2, char a3)
{
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rax
  int v7; // edi
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  DWORD SysColor; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 280) = a3;
  v4 = 0LL;
  v19 = 0LL;
  v5 = a2 - 1;
  if ( v5 )
  {
    v9 = v5 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        goto LABEL_5;
      SysColor = GetSysColor(5);
      *(_BYTE *)(a1 + 288) = -1;
      *(_WORD *)(a1 + 289) = SysColor;
      *(_BYTE *)(a1 + 291) = BYTE2(SysColor);
      v19 = 0LL;
      v12 = CSystemBackdropVisual::CreateColorBrush(BYTE1(SysColor), *(unsigned int *)(a1 + 288), &v19);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *(_DWORD *)(a1 + 284) = 3;
        goto LABEL_13;
      }
      v15 = 176LL;
    }
    else
    {
      v10 = *(unsigned int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
      *(_DWORD *)(a1 + 288) = v10;
      v19 = 0LL;
      v12 = CSystemBackdropVisual::CreateColorBrush(v11, v10, &v19);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *(_DWORD *)(a1 + 284) = 2;
LABEL_13:
        v4 = v19;
        goto LABEL_5;
      }
      v15 = 162LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v12,
      v17);
LABEL_23:
    wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>(&v19);
    return v13;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1);
  v4 = v6;
  v19 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *(_BYTE *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 284) = 1;
LABEL_5:
  v7 = CrossFadeToNewBrush(
         *(_QWORD *)(a1 + 248),
         v4,
         *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27) + 64LL),
         250LL);
  if ( v7 < 0 )
  {
    v16 = 183LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v7,
      v17);
    v13 = v7;
    goto LABEL_23;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                       + 32LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 32LL));
  if ( v7 < 0 )
  {
    v16 = 188LL;
    goto LABEL_22;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
