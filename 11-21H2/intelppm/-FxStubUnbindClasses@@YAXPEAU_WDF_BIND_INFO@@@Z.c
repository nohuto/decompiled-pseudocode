/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0006BC4
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0006B58 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  char *i; // rax
  void (__fastcall *v4)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *); // rax

  v1 = (char *)&__KMDF_CLASS_BIND_END;
  if ( off_1C0015A08 != &__KMDF_CLASS_BIND_START )
  {
    v2 = (char *)off_1C0015A08 + 80;
    while ( 1 )
    {
      for ( i = v1 + 8; i <= v2 && !*(_QWORD *)v1; i += 8 )
        v1 = i;
      if ( v1 < v2 )
      {
        if ( v1 + 80 > v2 || *(_DWORD *)v1 != 80 )
        {
LABEL_17:
          DbgPrintEx((ULONG)77, (ULONG)0, "FxGetNextClassBindInfo failed\n");
          return;
        }
      }
      else
      {
        v1 = v2;
      }
      if ( !v1 )
        goto LABEL_17;
      if ( v1 >= v2 )
        return;
      v4 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *))*((_QWORD *)v1 + 8);
      if ( v4 )
        v4(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v1);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v1);
      v1 += *(unsigned int *)v1;
    }
  }
}
