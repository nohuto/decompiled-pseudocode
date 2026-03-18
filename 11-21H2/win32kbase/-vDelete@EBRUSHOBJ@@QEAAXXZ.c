/*
 * XREFs of ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00CB9C0
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0086F68 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00802E0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

void __fastcall EBRUSHOBJ::vDelete(EBRUSHOBJ *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  char *v4; // rcx

  v2 = (char *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v2, 1);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    v4 = (char *)(v3 - 16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v4, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
}
