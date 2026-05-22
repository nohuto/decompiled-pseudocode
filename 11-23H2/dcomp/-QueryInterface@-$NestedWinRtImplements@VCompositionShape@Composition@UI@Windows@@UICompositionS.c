/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionShape@Composition@UI@Windows@@UICompositionShape@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001CED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionShape,Windows::UI::Composition::ICompositionShape>::QueryInterface(
        __int64 a1,
        __int64 a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  unsigned int v3; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v4; // r9
  Microsoft::WRL2::NestableRuntimeClass **v5; // r11
  __int64 *i; // r8
  const struct _GUID *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r10

  v3 = 0;
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 136);
  v5 = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *(_DWORD *)a2 == 2097779811
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
    {
      *a3 = v4;
      if ( _InterlockedIncrement((volatile signed __int32 *)v4 + 4) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(a1 - 136);
    }
    else
    {
      for ( i = (__int64 *)*((_QWORD *)v4 + 1); ; i = (__int64 *)*i )
      {
        if ( !i )
          return (*(unsigned int (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64, Microsoft::WRL2::NestableRuntimeClass **))(*(_QWORD *)v4 + 72LL))(
                   v4,
                   a2,
                   v5);
        v8 = (const struct _GUID *)i[1];
        if ( *((_DWORD *)i + 4) )
          break;
LABEL_14:
        ;
      }
      while ( !(unsigned int)InlineIsEqualGUID(v8, (const struct _GUID *)a2) )
      {
        v8 = (const struct _GUID *)(v9 + 24);
        if ( v10 == 1 )
          goto LABEL_14;
      }
      *v5 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v4 + *(unsigned int *)(v9 + 16));
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v4);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
