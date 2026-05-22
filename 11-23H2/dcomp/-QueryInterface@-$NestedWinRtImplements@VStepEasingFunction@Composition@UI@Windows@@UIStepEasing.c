/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VStepEasingFunction@Composition@UI@Windows@@UIStepEasingFunction@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800772D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::StepEasingFunction,Windows::UI::Composition::IStepEasingFunction>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  __int64 v3; // r14
  int v6; // esi
  __int64 *v7; // rax
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  _DWORD *v10; // rdi
  __int64 v11; // r8
  _DWORD *v12; // rdx

  v3 = a1 - 152;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = *a2;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2, 2097779811)
    && a2[2] == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
    && a2[3] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
  {
    *a3 = v3;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 152));
    return 0LL;
  }
  else
  {
    v7 = *(__int64 **)(v3 + 8);
    v8 = a2 + 1;
    v9 = a2 + 2;
    v10 = a2 + 3;
    if ( v7 )
    {
      while ( 1 )
      {
        v11 = *((unsigned int *)v7 + 4);
        v12 = (_DWORD *)v7[1];
        if ( *((_DWORD *)v7 + 4) )
          break;
LABEL_13:
        v7 = (__int64 *)*v7;
        if ( !v7 )
          return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *, _DWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3, v9);
      }
      while ( *v12 != v6 || v12[1] != *v8 || v12[2] != *v9 || v12[3] != *v10 )
      {
        v12 += 6;
        if ( !--v11 )
          goto LABEL_13;
      }
      *a3 = v3 + (unsigned int)v12[4];
      if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 16)) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
      return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(__int64, int *, _QWORD *, _DWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3, v9);
    }
  }
}
