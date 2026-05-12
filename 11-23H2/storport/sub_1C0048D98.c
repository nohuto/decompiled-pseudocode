/*
 * XREFs of sub_1C0048D98 @ 0x1C0048D98
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0048D98(__int64 a1)
{
  _DWORD *v1; // rax
  _DWORD *v2; // rdi
  unsigned int *v4; // rbx
  __int64 v5; // rbp
  struct _MDL *v6; // rcx
  unsigned int *v7; // rsi

  v1 = sub_1C000E2EC(a1);
  v2 = v1;
  if ( !v1 )
    return 3238002694LL;
  v4 = (unsigned int *)*((_QWORD *)v1 + 691);
  v5 = *((_QWORD *)v1 + 95);
  if ( !v4 )
    return 3238002689LL;
  do
  {
    v6 = (struct _MDL *)*((_QWORD *)v4 + 1);
    v7 = *(unsigned int **)v4;
    if ( v6 )
    {
      MmFreePagesFromMdl(v6);
      ExFreePoolWithTag(*((PVOID *)v4 + 1), 0);
    }
    if ( *((_QWORD *)v4 + 3) )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v5 + 8) + 24LL))(v5, v4[8], *((_QWORD *)v4 + 2));
    ExFreePoolWithTag(v4, 0);
    v4 = v7;
  }
  while ( v7 );
  *((_QWORD *)v2 + 691) = 0LL;
  return 0LL;
}
