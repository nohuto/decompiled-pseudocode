/*
 * XREFs of ?Find@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEAVCConnectionNode@@PEAU3@@Z @ 0x14000E6CC
 * Callers:
 *     ?InnerRemove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@I@Z @ 0x14000E67C (-InnerRemove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 *     ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x140010EE8 (-InsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::Find(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  while ( *(_QWORD *)(v2[2] + 16LL) != *(_QWORD *)(*(_QWORD *)a2 + 16LL) )
  {
    v2 = (_QWORD *)*v2;
    if ( !v2 )
      return 0LL;
  }
  return v2;
}
