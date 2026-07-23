/*
 * XREFs of DbgUnLoadImageSymbolsUnicode @ 0x14020B814
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiSegmentDelete @ 0x1406B0984 (MiSegmentDelete.c)
 *     MiSwitchBaseAddress @ 0x1407D40EC (MiSwitchBaseAddress.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x14020A9F4 (DbgUnicodeStringToAnsiString.c)
 *     DebugService2 @ 0x140429210 (DebugService2.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, __int64 a2, __int64 a3)
{
  PVOID P[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  *(_OWORD *)P = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString((PANSI_STRING)P, SourceString) )
    return 0LL;
  v8 = 0;
  v9 = 0;
  v7[0] = a2;
  v7[1] = a3;
  DebugService2(P, v7, 4LL);
  ExFreePoolWithTag(P[1], 0);
  return 1LL;
}
