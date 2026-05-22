/*
 * XREFs of ??$make_unique@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@PEAVSharedD3DDevicePool@2345@AEAU_LUID@@PEAUID3D11Device4@@$0A@@std@@YA?AV?$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@@0@$$QEAPEAVSharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAU_LUID@@$$QEAPEAUID3D11Device4@@@Z @ 0x1800A4C04
 * Callers:
 *     ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A57D8 (-CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUShared.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_unique<Windows::UI::Composition::Internal::DeviceRemovedWaiter,Windows::UI::Composition::Internal::SharedD3DDevicePool *,_LUID &,ID3D11Device4 *,0>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *result; // rax

  v8 = operator new(0x30uLL);
  if ( v8 )
  {
    v9 = *a4;
    v10 = *a2;
    *v8 = *a3;
    v8[1] = v10;
    v8[2] = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v8[3] = 0LL;
    v8[4] = 0LL;
    *((_BYTE *)v8 + 44) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  result = a1;
  *a1 = v8;
  return result;
}
