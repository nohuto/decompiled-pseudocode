/*
 * XREFs of __dyn_tls_dtor @ 0x180057770
 * Callers:
 *     <none>
 * Callees:
 *     _free_base @ 0x18005653A (_free_base.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall _dyn_tls_dtor(__int64 a1, int a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rdi
  int v4; // ebx
  void (**v5)(void); // rsi
  _QWORD *v6; // rbx

  if ( a2 == 3 || !a2 )
  {
    v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    v3 = *(_QWORD **)(v2 + 32);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)v3 - 1;
        if ( v4 >= 0 )
        {
          v5 = (void (**)(void))&v3[v4 + 2];
          do
          {
            if ( *v5 )
              (*v5)();
            --v5;
            --v4;
          }
          while ( v4 >= 0 );
        }
        v6 = (_QWORD *)v3[1];
        if ( !v6 )
          break;
        free_base(v3);
        *(_QWORD *)(v2 + 32) = v6;
        v3 = v6;
      }
      *(_QWORD *)(v2 + 32) = 0LL;
    }
  }
}
