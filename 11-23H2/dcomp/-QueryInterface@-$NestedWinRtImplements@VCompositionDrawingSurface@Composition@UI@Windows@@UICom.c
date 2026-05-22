/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B840
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0BA0 (-QueryInterface@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@W_ea_1800B0BA0.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0BC0 (-QueryInterface@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@W_ea_1800B0BC0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::ICompositionDrawingSurface2,Windows::UI::Composition::ICompositionDrawingSurface,Windows::UI::Composition::ICompositionSurface>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 *i; // r9
  _DWORD *v8; // r8
  __int64 v9; // r10

  v3 = a1 - 192;
  v4 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data2, 2097779811)
      && a2[2] == *(_DWORD *)GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4
      && a2[3] == *(_DWORD *)&GUID_7d099463_1e1d_4495_828a_d36bd8ebeeb7.Data4[4] )
    {
      *a3 = v3;
    }
    else
    {
      for ( i = *(__int64 **)(v3 + 8); ; i = (__int64 *)*i )
      {
        if ( !i )
          return (*(unsigned int (__fastcall **)(__int64, _DWORD *, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2, a3);
        v9 = *((unsigned int *)i + 4);
        v8 = (_DWORD *)i[1];
        if ( *((_DWORD *)i + 4) )
          break;
LABEL_12:
        ;
      }
      while ( *v8 != *a2 || v8[1] != a2[1] || v8[2] != a2[2] || v8[3] != a2[3] )
      {
        v8 += 6;
        if ( !--v9 )
          goto LABEL_12;
      }
      *a3 = v3 + (unsigned int)v8[4];
    }
    if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 16)) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v4;
}
