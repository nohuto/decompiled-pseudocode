/*
 * XREFs of ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x1C0093CA8
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095F50 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C0093C68 (-ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z.c)
 */

unsigned __int8 __fastcall ndisIsValidWoLPattern(struct _NDIS_PM_WOL_PATTERN *a1)
{
  UCHAR Revision; // al
  _DWORD *v2; // r8
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx

  if ( a1->Header.Type != 0x80 )
    return 0;
  Revision = a1->Header.Revision;
  if ( Revision != 1 && Revision != 2 )
    return 0;
  if ( a1->Header.Size < 0xC4u || !ndisIsValidPmCountedString(&a1->FriendlyName) || v2[38] )
    return 0;
  if ( v2[3] == 1 )
  {
    v6 = v2[41];
    if ( !v6 )
      return 0;
    v7 = v2[43];
    if ( !v7 )
      return 0;
    if ( v6 < v7 >> 3 )
      return 0;
    v8 = v2[40];
    if ( v8 < v3 )
      return 0;
    if ( v8 + v6 < v8 )
      return 0;
    if ( v8 + v6 > v4 )
      return 0;
    v9 = v2[42];
    if ( v9 < v3 )
      return 0;
    v10 = v9 + v7;
    if ( v10 < v9 || v10 > v4 )
      return 0;
  }
  else if ( v2[3] != 2 && v2[3] != 3 && (unsigned int)(v2[3] - 4) >= 2 )
  {
    return 0;
  }
  return 1;
}
