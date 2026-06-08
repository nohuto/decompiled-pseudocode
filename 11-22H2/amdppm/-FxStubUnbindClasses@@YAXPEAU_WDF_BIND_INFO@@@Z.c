/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0003998
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C00035EC (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     FxGetNextClassBindInfo @ 0x1C0003A54 (FxGetNextClassBindInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  unsigned __int64 NextClassBindInfo; // rax
  unsigned int *v4; // rbx
  void (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax

  v1 = (char *)&__KMDF_CLASS_BIND_END;
  if ( off_1C0012228 != &__KMDF_CLASS_BIND_START )
  {
    v2 = (char *)off_1C0012228 + 80;
    while ( 1 )
    {
      NextClassBindInfo = FxGetNextClassBindInfo(v1, v2);
      v4 = (unsigned int *)NextClassBindInfo;
      if ( !NextClassBindInfo )
        break;
      if ( NextClassBindInfo >= (unsigned __int64)v2 )
        return;
      v5 = *(void (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))(NextClassBindInfo + 64);
      if ( v5 )
        v5(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v4);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v4);
      v1 = (char *)v4 + *v4;
    }
    DbgPrintEx((ULONG)77, (ULONG)0, "FxGetNextClassBindInfo failed\n");
  }
}
