/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C0003ADC
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00036A4 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 FxStubInitTypes(void)
{
  unsigned int *i; // rcx
  unsigned int *v2; // rbx
  __int64 (*v3)(void); // rax

  if ( &__KMDF_TYPE_INIT_START <= (_UNKNOWN *)__KMDF_TYPE_INIT_END )
  {
    for ( i = (unsigned int *)__KMDF_TYPE_INIT_END; ; i = (unsigned int *)((char *)v2 + *v2) )
    {
      while ( i + 2 <= (unsigned int *)__KMDF_TYPE_INIT_END && !*(_QWORD *)i )
        i += 2;
      if ( i >= (unsigned int *)__KMDF_TYPE_INIT_END )
        break;
      if ( i + 10 > (unsigned int *)__KMDF_TYPE_INIT_END || *i != 40 || (v2 = i) == 0LL )
      {
        DbgPrintEx((ULONG)77, (ULONG)0, "FxGetNextObjectContextTypeInfo failed\n");
        return 3221225595LL;
      }
      v3 = (__int64 (*)(void))*((_QWORD *)i + 4);
      if ( v3 )
        *((_QWORD *)i + 3) = v3();
    }
    return 0LL;
  }
  else
  {
    DbgPrintEx(
      (ULONG)77,
      (ULONG)0,
      "FxStubInitTypes: invalid driver image, the address of symbol __KMDF_TYPE_INIT_START 0x%p is greater than the addre"
      "ss of symbol __KMDF_TYPE_INIT_END 0x%p, status 0x%x\n",
      &__KMDF_TYPE_INIT_START,
      __KMDF_TYPE_INIT_END,
      -1073741701);
    return 3221225595LL;
  }
}
