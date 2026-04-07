/*
 * XREFs of ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180021050
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x180012628 (-SetContent@CVisualProxy@@QEAAJPEBVCResourceProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18004F6E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18004FC20 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CCanvasVisual *__fastcall CCanvasVisual::`scalar deleting destructor'(CCanvasVisual *this, char a2)
{
  char *v4; // rdi
  __int64 v5; // rcx
  CBaseObject *v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rcx
  CBaseObject *v9; // rcx
  __int64 v11; // rbp
  __int64 v12; // rsi
  CBaseObject *v13; // rcx
  int v14; // eax

  *(_QWORD *)this = &CRenderDataVisual::`vftable';
  v4 = (char *)this + 256;
  if ( *((int *)this + 70) > 0 )
  {
    v11 = *((int *)this + 70);
    v12 = 0LL;
    do
    {
      v13 = *(CBaseObject **)(*(_QWORD *)v4 + 8 * v12);
      if ( v13 )
      {
        CBaseObject::Release(v13);
        *(_QWORD *)(*(_QWORD *)v4 + 8 * v12) = 0LL;
      }
      ++v12;
    }
    while ( v12 < v11 );
    *((_DWORD *)v4 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize(v4, 8LL);
    (*(void (__fastcall **)(CCanvasVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  }
  v5 = *((_QWORD *)this + 31);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
    *((_QWORD *)this + 31) = 0LL;
  }
  if ( *(_QWORD *)v4 != *((_QWORD *)v4 + 1) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)v4 = 0LL;
  }
  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CCanvasVisual *)((char *)this + 32));
  v6 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 13) = 0LL;
    v7 = (__int64 *)((char *)this + 16);
    v14 = CVisualProxy::SetContent(*((CVisualProxy **)this + 2), 0LL);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x132u, 0LL);
  }
  else
  {
    v7 = (__int64 *)((char *)this + 16);
  }
  v8 = *v7;
  if ( *v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
    *v7 = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 14);
  if ( v9 )
  {
    CBaseObject::Release(v9);
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
