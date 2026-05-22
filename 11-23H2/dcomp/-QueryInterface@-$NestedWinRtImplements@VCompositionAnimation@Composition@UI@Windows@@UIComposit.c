/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800740D0
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE0B0 (-QueryInterface@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Window_ea_1800AE0B0.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE0D0 (-QueryInterface@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Window_ea_1800AE0D0.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE0F0 (-QueryInterface@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Window_ea_1800AE0F0.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE110 (-QueryInterface@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Window_ea_1800AE110.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE130 (-QueryInterface@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Window_ea_1800AE130.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionAnimation,Windows::UI::Composition::ICompositionAnimation,Windows::UI::Composition::ICompositionAnimation2,Windows::UI::Composition::ICompositionAnimation3,Windows::UI::Composition::ICompositionAnimation4,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal>::QueryInterface(
        __int64 a1,
        int *a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // rsi
  int v5; // ebp
  _DWORD *v7; // rax
  _DWORD *v8; // r11
  __int64 *v9; // r14
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // rdx

  v3 = (volatile signed __int32 *)(a1 - 128);
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = *a2;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2, 2097779811)
    && a2[2] == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
    && a2[3] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
  {
    *a3 = v3;
    if ( _InterlockedIncrement(v3 + 4) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(a1 - 128);
    return 0LL;
  }
  else
  {
    v7 = a2 + 1;
    v8 = a2 + 2;
    v9 = (__int64 *)*((_QWORD *)v3 + 1);
    v10 = a2 + 3;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = *((unsigned int *)v9 + 4);
        v12 = (_DWORD *)v9[1];
        if ( *((_DWORD *)v9 + 4) )
          break;
LABEL_12:
        v9 = (__int64 *)*v9;
        if ( !v9 )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *, int *, volatile signed __int32 **))(*(_QWORD *)v3 + 72LL))(
                   v3,
                   a2,
                   a3);
      }
      while ( *v12 != v5 || v12[1] != *v7 || v12[2] != *v8 || v12[3] != *v10 )
      {
        v12 += 6;
        if ( !--v11 )
          goto LABEL_12;
      }
      *a3 = (volatile signed __int32 *)((char *)v3 + (unsigned int)v12[4]);
      v13 = (unsigned int)_InterlockedIncrement(v3 + 4);
      if ( (_DWORD)v13 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, _DWORD *))(*(_QWORD *)v3 + 80LL))(v3, v13, v7);
      return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, int *, volatile signed __int32 **))(*(_QWORD *)v3 + 72LL))(
               v3,
               a2,
               a3);
    }
  }
}
