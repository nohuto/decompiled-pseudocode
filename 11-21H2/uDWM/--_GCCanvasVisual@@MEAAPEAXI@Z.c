/*
 * XREFs of ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180025F30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x18003850C (-SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CCanvasVisual *__fastcall CCanvasVisual::`scalar deleting destructor'(CCanvasVisual *this, char a2)
{
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  __int64 v6; // rcx
  CBaseObject *v7; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdi
  CBaseObject *v11; // rcx
  int v12; // eax

  *(_QWORD *)this = &CRenderDataVisual::`vftable';
  if ( *((int *)this + 70) > 0 )
  {
    v9 = *((int *)this + 70);
    v10 = 0LL;
    do
    {
      v11 = *(CBaseObject **)(*((_QWORD *)this + 32) + 8 * v10);
      if ( v11 )
      {
        CBaseObject::Release(v11);
        *(_QWORD *)(*((_QWORD *)this + 32) + 8 * v10) = 0LL;
      }
      ++v10;
    }
    while ( v10 < v9 );
    *((_DWORD *)this + 70) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 256, 8u);
    (*(void (__fastcall **)(CCanvasVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  }
  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    *((_QWORD *)this + 31) = 0LL;
  }
  if ( *((_QWORD *)this + 32) != *((_QWORD *)this + 33) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 32) = 0LL;
  }
  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CCanvasVisual *)((char *)this + 32));
  v5 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 13) = 0LL;
    v12 = CVisualProxy::SetContent(*((CVisualProxy **)this + 2), 0LL);
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x132u);
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
    *((_QWORD *)this + 2) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 14);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x120uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CCanvasVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
