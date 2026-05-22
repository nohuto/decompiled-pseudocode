/*
 * XREFs of ?CreateTouchpadInteractionConfiguration@CDevice@DirectComposition@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_TOUCHPAD@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18007F700
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateTouchpadInteractionConfiguration(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        _QWORD *a5)
{
  unsigned int v5; // edi
  _QWORD *v9; // rax
  _DWORD *v10; // rbx

  v5 = 0;
  if ( a5 )
  {
    v9 = DefaultHeap::AllocClear(0x28uLL);
    v10 = v9;
    if ( v9 )
    {
      v9[1] = 0LL;
      v9[3] = 0LL;
      v9[4] = 0LL;
      *v9 = &DirectComposition::CInteractionConfiguration::`vftable'{for `CMILCOMBaseT<IDCompositionInteractionConfigurationPartner>'};
      v9[2] = &DirectComposition::CInteractionConfiguration::`vftable'{for `IDCompositionInteractionConfigurationInternal'};
      (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
      if ( a2 > a3 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      else
      {
        v10[6] = 1;
        v10[7] = a2;
        v10[8] = a3;
        v10[9] = a4;
        *a5 = v10;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v5;
}
