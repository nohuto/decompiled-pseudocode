/*
 * XREFs of ??_EInteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801241B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::Interactions::InteractionTrackerBindingManager *__fastcall Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::`vector deleting destructor'(
        Windows::UI::Composition::Interactions::InteractionTrackerBindingManager *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rdx

  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 4 * ((__int64)(*((_QWORD *)this + 19) - (_QWORD)v4) >> 2));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
