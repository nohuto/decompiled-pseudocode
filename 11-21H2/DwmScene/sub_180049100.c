/*
 * XREFs of sub_180049100 @ 0x180049100
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180049100(_QWORD *lpMem, char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = (volatile signed __int32 *)lpMem[2];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  *lpMem = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
