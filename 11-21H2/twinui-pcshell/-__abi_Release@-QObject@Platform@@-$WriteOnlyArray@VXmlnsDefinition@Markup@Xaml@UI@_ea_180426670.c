/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x180426670
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAKXZ @ 0x1801FECA0 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBA@E$AAAKXZ @ 0x1801FECC0 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShel.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAKXZ @ 0x1801FECE0 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@C_ea_1801FECE0.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCA@E$AAAKXZ @ 0x1801FED00 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@C_ea_1801FED00.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  int v4; // eax
  Platform::Details::ControlBlock *v5; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 56);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 56));
  if ( !v3 )
  {
    if ( (-(__int64)(a1 != 0) & (a1 + 8)) != 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)((a1 + 8) & -(__int64)(a1 != 0)) + 48LL))(
             (a1 + 8) & -(__int64)(a1 != 0),
             -a1);
      if ( v4 < 0 )
      {
        __abi_WinRTraiseException(v4);
        __debugbreak();
      }
    }
    v5 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v3;
}
