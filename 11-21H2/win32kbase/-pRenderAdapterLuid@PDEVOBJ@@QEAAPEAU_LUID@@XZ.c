/*
 * XREFs of ?pRenderAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C016B030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pRenderAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
  if ( v2 == -4 )
  {
    if ( _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1768) + 40LL) + 2552LL);
      if ( (*(_DWORD *)(v3 + 160) & 0x4800000) == 0x4000000 )
        return (struct _LUID *)(v3 + 296);
      else
        return (struct _LUID *)(v3 + 248);
    }
  }
  else if ( !v2 )
  {
    return 0LL;
  }
  if ( _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 160) & 0x4800000) == 0x4000000 )
    return (struct _LUID *)(v2 + 296);
  else
    return (struct _LUID *)(v2 + 248);
}
