/*
 * XREFs of ??_GCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801117F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ @ 0x180055764 (--1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *__fastcall Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
