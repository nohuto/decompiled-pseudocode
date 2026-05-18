/*
 * XREFs of sub_1800F5B88 @ 0x1800F5B88
 * Callers:
 *     sub_1800F5C14 @ 0x1800F5C14 (sub_1800F5C14.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F5B88(char **a1)
{
  char *v1; // rdx
  char *v3; // rbx
  volatile signed __int32 *v4; // rcx
  char *v5; // rsi

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(char **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = (volatile signed __int32 *)*((_QWORD *)v3 + 3);
      v5 = *(char **)v3;
      if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      sub_180010884(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  return sub_180010884(*a1, 0x20uLL);
}
