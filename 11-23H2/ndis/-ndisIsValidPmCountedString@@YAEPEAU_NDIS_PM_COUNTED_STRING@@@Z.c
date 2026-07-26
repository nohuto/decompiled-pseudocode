/*
 * XREFs of ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C0093C68
 * Callers:
 *     ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x1C0093CA8 (-ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z.c)
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095BB0 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidPmCountedString(struct _NDIS_PM_COUNTED_STRING *a1)
{
  wchar_t *String; // rax
  __int64 v2; // rcx

  if ( a1->Length > 0x80u )
    return 0;
  if ( (a1->Length & 1) != 0 )
    return 0;
  String = a1->String;
  if ( a1 == (struct _NDIS_PM_COUNTED_STRING *)-2LL )
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
