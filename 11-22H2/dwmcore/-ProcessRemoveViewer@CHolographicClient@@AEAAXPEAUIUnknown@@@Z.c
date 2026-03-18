/*
 * XREFs of ?ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AE0CC
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AD924 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAUIHolographicViewer@@$0A@@@QEAAHAEBQEAUIHolographicViewer@@@Z @ 0x1802AE57C (-Remove@-$DynArray@PEAUIHolographicViewer@@$0A@@@QEAAHAEBQEAUIHolographicViewer@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessRemoveViewer(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67,
         &v3) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 216LL))(*((_QWORD *)this + 3), v3);
    if ( (unsigned int)DynArray<IHolographicViewer *,0>::Remove((char *)this + 160, &v3) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
