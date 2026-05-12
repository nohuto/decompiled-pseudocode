/*
 * XREFs of StorpFreeHostMemoryBuffer @ 0x1C00452F0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorpFreeHostMemoryBuffer(__int64 a1)
{
  _DWORD *Adapter; // rax
  _DWORD *v2; // rdi
  unsigned int *v4; // rbx
  __int64 v5; // rbp
  struct _MDL *v6; // rcx
  unsigned int *v7; // rsi

  Adapter = RaidpPortGetAdapter(a1);
  v2 = Adapter;
  if ( !Adapter )
    return 3238002694LL;
  v4 = (unsigned int *)*((_QWORD *)Adapter + 683);
  v5 = *((_QWORD *)Adapter + 94);
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
  *((_QWORD *)v2 + 683) = 0LL;
  return 0LL;
}
