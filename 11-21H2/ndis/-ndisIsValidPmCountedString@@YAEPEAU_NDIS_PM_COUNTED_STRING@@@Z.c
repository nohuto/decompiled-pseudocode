/*
 * XREFs of ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C008DC90
 * Callers:
 *     ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x1C008DCD0 (-ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z.c)
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FBC0 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidPmCountedString(struct _NDIS_PM_COUNTED_STRING *a1)
{
  wchar_t *String; // rcx
  __int64 v2; // rdx

  if ( a1->Length > 0x80u )
    return 0;
  if ( (a1->Length & 1) != 0 )
    return 0;
  String = a1->String;
  if ( !String )
    return 0;
  v2 = 65LL;
  do
  {
    if ( !*String )
      break;
    ++String;
    --v2;
  }
  while ( v2 );
  return v2 != 0;
}
