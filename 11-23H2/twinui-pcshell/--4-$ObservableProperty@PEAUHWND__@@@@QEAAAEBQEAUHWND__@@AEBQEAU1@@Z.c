/*
 * XREFs of ??4?$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z @ 0x180564808
 * Callers:
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180565690 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x180570AEC (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ObservableProperty<HWND__ *>::operator=(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi

  *a1 = *a2;
  v3 = (_QWORD *)a1[1];
  v4 = &v3[a1[2]];
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 24LL))(*v3);
    ++v3;
  }
  return a1;
}
