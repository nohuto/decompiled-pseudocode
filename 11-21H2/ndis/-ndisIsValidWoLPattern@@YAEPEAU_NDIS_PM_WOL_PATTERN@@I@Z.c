/*
 * XREFs of ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x1C008DCD0
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FF50 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C008DC90 (-ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z.c)
 */

unsigned __int8 __fastcall ndisIsValidWoLPattern(struct _NDIS_PM_WOL_PATTERN *a1)
{
  UCHAR Revision; // al
  _DWORD *v3; // r8
  unsigned int v4; // r9d
  unsigned int v5; // r11d
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx

  if ( a1->Header.Type != 0x80 )
    return 0;
  Revision = a1->Header.Revision;
  if ( Revision != 1 && Revision != 2 )
    return 0;
  if ( a1->Header.Size < 0xC4u || !ndisIsValidPmCountedString(&a1->FriendlyName) || v3[38] )
    return 0;
  v6 = v3[3];
  if ( v6 == 1 )
  {
    v7 = v3[41];
    if ( !v7 )
      return 0;
    v8 = v3[43];
    if ( !v8 )
      return 0;
    if ( v7 < v8 >> 3 )
      return 0;
    v9 = v3[40];
    if ( v9 < v4 )
      return 0;
    if ( v9 + v7 < v9 )
      return 0;
    if ( v9 + v7 > v5 )
      return 0;
    v10 = v3[42];
    if ( v10 < v4 )
      return 0;
    v11 = v10 + v8;
    if ( v11 < v10 || v11 > v5 )
      return 0;
  }
  else if ( v6 <= 1 || v6 > 5 )
  {
    return 0;
  }
  return 1;
}
