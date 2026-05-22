/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionBrush@Composition@UI@Windows@@UICompositionBrush@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ICompositionBrush>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v3; // rcx
  __int64 *v5; // r11
  __int64 v6; // rbx
  _DWORD *v7; // r10

  v3 = (volatile signed __int32 *)(a1 - 136);
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2, 2097779811)
    && a2[2] == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
    && a2[3] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
  {
    *a3 = v3;
    if ( _InterlockedIncrement(v3 + 4) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 80LL))(v3);
    return 0LL;
  }
  else
  {
    v5 = (__int64 *)*((_QWORD *)v3 + 1);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *((unsigned int *)v5 + 4);
        v7 = (_DWORD *)v5[1];
        if ( *((_DWORD *)v5 + 4) )
          break;
LABEL_18:
        v5 = (__int64 *)*v5;
        if ( !v5 )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 72LL))(v3);
      }
      while ( *v7 != *a2 || v7[1] != a2[1] || v7[2] != a2[2] || v7[3] != a2[3] )
      {
        v7 += 6;
        if ( !--v6 )
          goto LABEL_18;
      }
      *a3 = (volatile signed __int32 *)((char *)v3 + (unsigned int)v7[4]);
      if ( _InterlockedIncrement(v3 + 4) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 80LL))(v3);
      return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 72LL))(v3);
    }
  }
}
