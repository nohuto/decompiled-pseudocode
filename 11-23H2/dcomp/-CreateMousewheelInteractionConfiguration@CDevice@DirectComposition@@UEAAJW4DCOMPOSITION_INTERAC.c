/*
 * XREFs of ?CreateMousewheelInteractionConfiguration@CDevice@DirectComposition@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSEWHEEL@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x1800EFC20
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateMousewheelInteractionConfiguration(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi

  v3 = 0;
  if ( a3 )
  {
    v6 = DefaultHeap::AllocClear(0x28uLL);
    v7 = v6;
    if ( v6 )
    {
      v6[1] = 0LL;
      v6[3] = 0LL;
      v6[4] = 0LL;
      *v6 = &DirectComposition::CInteractionConfiguration::`vftable'{for `CMILCOMBaseT<IDCompositionInteractionConfigurationPartner>'};
      v6[2] = &DirectComposition::CInteractionConfiguration::`vftable'{for `IDCompositionInteractionConfigurationInternal'};
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
      *((_DWORD *)v7 + 6) = 4;
      *((_DWORD *)v7 + 7) = a2;
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
