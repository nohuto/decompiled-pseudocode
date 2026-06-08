/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0008484
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000840C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  void (__fastcall *v3)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *); // rax

  v1 = (char *)&__KMDF_CLASS_BIND_END;
  if ( off_1C0016D28 != &__KMDF_CLASS_BIND_START )
  {
    v2 = (char *)off_1C0016D28 + 80;
    while ( 1 )
    {
      while ( v1 + 8 <= v2 && !*(_QWORD *)v1 )
        v1 += 8;
      if ( v1 < v2 )
      {
        if ( v1 + 80 > v2 || *(_DWORD *)v1 != 80 )
        {
LABEL_16:
          DbgPrintEx((ULONG)77, (ULONG)0, "FxGetNextClassBindInfo failed\n");
          return;
        }
      }
      else
      {
        v1 = v2;
      }
      if ( !v1 )
        goto LABEL_16;
      if ( v1 >= v2 )
        return;
      v3 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *))*((_QWORD *)v1 + 8);
      if ( v3 )
        v3(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v1);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v1);
      v1 += *(unsigned int *)v1;
    }
  }
}
