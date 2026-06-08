/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002AE0
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0002984 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  unsigned int v1; // edi
  unsigned int *i; // rcx
  unsigned int *v4; // rbx
  __int64 (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax
  int v6; // eax
  int v7; // eax

  v1 = 0;
  if ( &__KMDF_CLASS_BIND_START > &__KMDF_CLASS_BIND_END )
  {
    DbgPrintEx(
      (ULONG)77,
      (ULONG)0,
      "FxStubBindClasses: invalid driver image, the address of symbol __KMDF_CLASS_BIND_START 0x%p is greater than the ad"
      "dress of symbol __KMDF_CLASS_BIND_END 0x%p, status 0x%x\n",
      &__KMDF_CLASS_BIND_START,
      &__KMDF_CLASS_BIND_END,
      -1073741701);
  }
  else
  {
    for ( i = (unsigned int *)&__KMDF_CLASS_BIND_END; ; i = (unsigned int *)((char *)v4 + *v4) )
    {
      while ( i + 2 <= (unsigned int *)&__KMDF_CLASS_BIND_END && !*(_QWORD *)i )
        i += 2;
      if ( i >= (unsigned int *)&__KMDF_CLASS_BIND_END )
        return v1;
      if ( i + 20 > (unsigned int *)&__KMDF_CLASS_BIND_END )
        break;
      if ( *i != 80 )
        break;
      v4 = i;
      if ( !i )
        break;
      v5 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))*((_QWORD *)i + 7);
      off_1C0016D28 = i;
      if ( v5 )
      {
        v6 = v5(WdfVersionBindClass, &WdfBindInfo, WdfDriverGlobals, i);
        v1 = v6;
        if ( v6 < 0 )
        {
          DbgPrintEx(
            (ULONG)77,
            (ULONG)0,
            "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            *((const void **)v4 + 7),
            v4,
            *((const wchar_t **)v4 + 1),
            v6);
          return v1;
        }
      }
      else
      {
        v7 = WdfVersionBindClass(&WdfBindInfo, WdfDriverGlobals, i);
        v1 = v7;
        if ( v7 < 0 )
        {
          DbgPrintEx(
            (ULONG)77,
            (ULONG)0,
            "FxStubBindClasses: VersionBindClass WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            v4,
            *((const wchar_t **)v4 + 1),
            v7);
          return v1;
        }
      }
    }
    DbgPrintEx((ULONG)77, (ULONG)0, "FxGetNextClassBindInfo failed\n");
  }
  return 3221225595LL;
}
