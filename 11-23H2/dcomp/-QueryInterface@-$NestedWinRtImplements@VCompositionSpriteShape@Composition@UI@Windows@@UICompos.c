/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionSpriteShape@Composition@UI@Windows@@UICompositionSpriteShape@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::ICompositionSpriteShape>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  __int64 v3; // r11
  int v5; // r10d
  __int64 *v6; // rdx
  _DWORD *v7; // r9
  __int64 v8; // rbp
  _DWORD *v9; // rax

  v3 = a1 - 192;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = *a2;
  if ( *a2 == 2097779811
    && a2[1] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2
    && a2[2] == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
    && a2[3] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
  {
    *a3 = v3;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 192));
    return 0LL;
  }
  else
  {
    v6 = *(__int64 **)(v3 + 8);
    v7 = a2 + 3;
    if ( v6 )
    {
      while ( 1 )
      {
        v8 = *((unsigned int *)v6 + 4);
        v9 = (_DWORD *)v6[1];
        if ( *((_DWORD *)v6 + 4) )
          break;
LABEL_7:
        v6 = (__int64 *)*v6;
        if ( !v6 )
          return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *, _DWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3, v7);
      }
      while ( *v9 != v5 || v9[1] != a2[1] || v9[2] != a2[2] || v9[3] != *v7 )
      {
        v9 += 6;
        if ( !--v8 )
          goto LABEL_7;
      }
      *a3 = v3 + (unsigned int)v9[4];
      if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 16)) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
      return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *, _DWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3, v7);
    }
  }
}
