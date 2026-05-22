/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VAnimationController@Composition@UI@Windows@@UIAnimationController@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::AnimationController,Windows::UI::Composition::IAnimationController>::QueryInterface(
        __int64 a1,
        __int64 a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // r9
  __int64 *v5; // r10
  const struct _GUID *v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11

  v3 = (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 168);
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( *(_DWORD *)a2 == 2097779811
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
  {
    *a3 = v3;
    if ( _InterlockedIncrement((volatile signed __int32 *)v3 + 4) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(a1 - 168);
    return 0LL;
  }
  else
  {
    v5 = (__int64 *)*((_QWORD *)v3 + 1);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = (const struct _GUID *)v5[1];
        if ( *((_DWORD *)v5 + 4) )
          break;
LABEL_13:
        v5 = (__int64 *)*v5;
        if ( !v5 )
          return (*(__int64 (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v3 + 72LL))(v3);
      }
      while ( !InlineIsEqualGUID(v6, (const struct _GUID *)a2) )
      {
        v6 = (const struct _GUID *)(v7 + 24);
        if ( v9 == 1 )
          goto LABEL_13;
      }
      *v8 = (char *)v3 + *(unsigned int *)(v7 + 16);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v3);
      return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v3 + 72LL))(v3);
    }
  }
}
