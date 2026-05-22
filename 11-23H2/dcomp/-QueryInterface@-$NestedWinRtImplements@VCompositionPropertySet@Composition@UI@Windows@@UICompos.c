/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionPropertySet@Composition@UI@Windows@@UICompositionPropertySet@234@UICompositionPropertySet2@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077F40
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionPropertySet@Composition@UI@Windows@@UICompositionPropertySet@234@UICompositionPropertySet2@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEA70 (-QueryInterface@-$NestedWinRtImplements@VCompositionPropertySet@Composition@UI@Wind_ea_1800AEA70.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionPropertySet,Windows::UI::Composition::ICompositionPropertySet,Windows::UI::Composition::ICompositionPropertySet2>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  __int64 v3; // r11
  int v5; // r9d
  _DWORD *v6; // rcx
  _DWORD *v7; // rdx
  __int64 *v8; // r14
  __int64 v9; // r15
  _DWORD *v10; // rax

  v3 = a1 - 136;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = *a2;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2, 2097779811)
    && a2[2] == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
    && a2[3] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
  {
    *a3 = v3;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 136));
    return 0LL;
  }
  else
  {
    v6 = a2 + 1;
    v7 = a2 + 2;
    v8 = *(__int64 **)(v3 + 8);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *((unsigned int *)v8 + 4);
        v10 = (_DWORD *)v8[1];
        if ( *((_DWORD *)v8 + 4) )
          break;
LABEL_7:
        v8 = (__int64 *)*v8;
        if ( !v8 )
          return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3);
      }
      while ( *v10 != v5 || v10[1] != *v6 || v10[2] != *v7 || v10[3] != a2[3] )
      {
        v10 += 6;
        if ( !--v9 )
          goto LABEL_7;
      }
      *a3 = v3 + (unsigned int)v10[4];
      if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 16)) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
      return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3);
    }
  }
}
