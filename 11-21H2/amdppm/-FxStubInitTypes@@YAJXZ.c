/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C00037C4
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0003404 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 FxStubInitTypes(void)
{
  _QWORD *i; // rcx
  _QWORD *j; // rax
  unsigned int *v3; // rbx
  __int64 (*v4)(void); // rax

  if ( &__KMDF_TYPE_INIT_START <= (_UNKNOWN *)__KMDF_TYPE_INIT_END )
  {
    for ( i = __KMDF_TYPE_INIT_END; ; i = (_QWORD *)((char *)v3 + *v3) )
    {
      for ( j = i + 1; j <= __KMDF_TYPE_INIT_END && !*i; ++j )
        i = j;
      if ( i >= __KMDF_TYPE_INIT_END )
        break;
      if ( i + 5 > __KMDF_TYPE_INIT_END || *(_DWORD *)i != 40 || (v3 = (unsigned int *)i) == 0LL )
      {
        DbgPrintEx((ULONG)77, (ULONG)0, "FxGetNextObjectContextTypeInfo failed\n");
        return 3221225595LL;
      }
      v4 = (__int64 (*)(void))i[4];
      if ( v4 )
        i[3] = v4();
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
