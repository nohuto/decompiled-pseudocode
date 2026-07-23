/*
 * XREFs of DbgLoadImageSymbols @ 0x14020AAA0
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14020A9BC (DbgLoadImageSymbolsUnicode.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     DebugService2 @ 0x1404287C0 (DebugService2.c)
 */

__int64 __fastcall DbgLoadImageSymbols(__int64 a1, void *a2, __int64 a3)
{
  PIMAGE_NT_HEADERS v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int CheckSum; // [rsp+30h] [rbp-18h]
  unsigned int SizeOfImage; // [rsp+34h] [rbp-14h]

  v6[0] = a2;
  v6[1] = a3;
  v4 = RtlImageNtHeader(a2);
  if ( v4 )
  {
    CheckSum = v4->OptionalHeader.CheckSum;
    SizeOfImage = v4->OptionalHeader.SizeOfImage;
  }
  else
  {
    SizeOfImage = 0;
    CheckSum = 0;
  }
  return DebugService2(a1, v6, 3LL);
}
