/*
 * XREFs of __dyn_tls_init @ 0x18000C6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall _dyn_tls_init(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  void (__fastcall **i)(__int64); // rbx

  if ( a2 == 2 )
  {
    v2 = (unsigned int)tls_index;
    v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( *(_BYTE *)(v3 + 20) != 1 )
    {
      *(_BYTE *)(v3 + 20) = 1;
      for ( i = (void (__fastcall **)(__int64))&unk_1801029C0; i != (void (__fastcall **)(__int64))&unk_1801029C0; ++i )
      {
        if ( *i )
          (*i)(v2);
      }
    }
  }
}
