/*
 * XREFs of ??1GestureClient@GestureHandler@@QEAA@XZ @ 0x180152C08
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x1801527B8 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180156798 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 *     _GestureHandler::AddGestureClient_::_1_::dtor$3 @ 0x180156884 (_GestureHandler--AddGestureClient_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::GestureClient::~GestureClient(GestureHandler::GestureClient *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
