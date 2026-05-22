/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800771E0
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEB30 (-QueryInterface@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@_ea_1800AEB30.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEB50 (-QueryInterface@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@_ea_1800AEB50.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::KeyFrameAnimation,Windows::UI::Composition::IKeyFrameAnimation,Windows::UI::Composition::IKeyFrameAnimation2,Windows::UI::Composition::IKeyFrameAnimation3>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  __int64 v3; // r14
  int v6; // edi
  _DWORD *v7; // rcx
  _DWORD *v8; // r8
  __int64 *v9; // rsi
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  _DWORD *v12; // rax

  v3 = a1 - 344;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = *a2;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2, 2097779811)
    && a2[2] == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
    && a2[3] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
  {
    *a3 = v3;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 344));
    return 0LL;
  }
  else
  {
    v7 = a2 + 1;
    v8 = a2 + 2;
    v9 = *(__int64 **)(v3 + 8);
    v10 = a2 + 3;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = *((unsigned int *)v9 + 4);
        v12 = (_DWORD *)v9[1];
        if ( *((_DWORD *)v9 + 4) )
          break;
LABEL_7:
        v9 = (__int64 *)*v9;
        if ( !v9 )
          return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3);
      }
      while ( *v12 != v6 || v12[1] != *v7 || v12[2] != *v8 || v12[3] != *v10 )
      {
        v12 += 6;
        if ( !--v11 )
          goto LABEL_7;
      }
      *a3 = v3 + (unsigned int)v12[4];
      if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 16)) == 1 )
        (*(void (__fastcall **)(__int64, __int64, _DWORD *, _DWORD *))(*(_QWORD *)v3 + 80LL))(v3, v11, v8, v7);
      return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3);
    }
  }
}
