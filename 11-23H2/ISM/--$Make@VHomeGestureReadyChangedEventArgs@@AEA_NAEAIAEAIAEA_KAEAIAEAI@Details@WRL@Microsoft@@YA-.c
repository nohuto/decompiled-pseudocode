/*
 * XREFs of ??$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureReadyChangedEventArgs@@@12@AEA_NAEAI1AEA_K11@Z @ 0x1801770C0
 * Callers:
 *     ?OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x18017B1E4 (-OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0HomeGestureReadyChangedEventArgs@@QEAA@_NII_KII@Z @ 0x1801778F8 (--0HomeGestureReadyChangedEventArgs@@QEAA@_NII_KII@Z.c)
 */

// Hidden C++ exception states: #wind=1
HomeGestureReadyChangedEventArgs **__fastcall Microsoft::WRL::Details::Make<HomeGestureReadyChangedEventArgs,bool &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &,unsigned int &>(
        HomeGestureReadyChangedEventArgs **a1,
        bool *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  HomeGestureReadyChangedEventArgs *v11; // rax
  HomeGestureReadyChangedEventArgs *v12; // rdi

  *a1 = 0LL;
  v11 = (HomeGestureReadyChangedEventArgs *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = HomeGestureReadyChangedEventArgs::HomeGestureReadyChangedEventArgs(v11, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( *a1 )
      (*(void (__fastcall **)(HomeGestureReadyChangedEventArgs *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v12;
  }
  return a1;
}
