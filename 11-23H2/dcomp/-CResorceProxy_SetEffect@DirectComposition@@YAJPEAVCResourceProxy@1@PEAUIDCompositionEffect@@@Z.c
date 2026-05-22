/*
 * XREFs of ?CResorceProxy_SetEffect@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionEffect@@@Z @ 0x18000AF48
 * Callers:
 *     ?SetEffect@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAUIDCompositionEffect@@@Z @ 0x18000AF30 (-SetEffect@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAUID.c)
 * Callees:
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CResorceProxy_SetEffect(
        DirectComposition *this,
        struct IUnknown *a2,
        struct IDCompositionEffect *a3)
{
  DirectComposition::CResourceProxy *v4; // rdi
  struct IUnknown *v5; // r8
  unsigned int v6; // ebx
  struct IUnknown *v8; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = this;
  if ( a2 )
  {
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_e32fd191_37f7_4bc9_b1fd_0e29678d0703,
           &v9) >= 0 )
    {
      v8 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
      v6 = DirectComposition::CResourceProxy::SetReferenceProperty(v4, 5u, v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      return v6;
    }
    v5 = a2;
    this = v4;
  }
  else
  {
    v5 = 0LL;
  }
  return (unsigned int)DirectComposition::CResourceProxy::SetReferenceProperty(this, 5u, v5);
}
