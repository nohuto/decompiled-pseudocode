/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1406D0610
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x1406CFA84 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1406D0544 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x1407972F0 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1407FAAF8 (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x14083A1FC (_PnpGetMappedPropertyLocalesDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x14083AA78 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x14086CB20 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x140A64E64 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140A65090 (_PnpDeleteObjectDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectDispatchCallback(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 296);
  return v3;
}
