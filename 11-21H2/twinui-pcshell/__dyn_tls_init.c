/*
 * XREFs of __dyn_tls_init @ 0x18018ECB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall _dyn_tls_init(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 (__fastcall **i)(); // rbx

  if ( a2 == 2 )
  {
    v2 = (unsigned int)tls_index;
    v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( *(_BYTE *)(v3 + 20) != 1 )
    {
      *(_BYTE *)(v3 + 20) = 1;
      for ( i = &off_18066B530; i != (__int64 (__fastcall **)())&unk_18066B538; ++i )
      {
        if ( *i )
          ((void (__fastcall *)(__int64))*i)(v2);
      }
    }
  }
}
