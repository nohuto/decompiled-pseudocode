/*
 * XREFs of USBParseGetUnitString @ 0x1C0037D04
 * Callers:
 *     USBParseExtensionUnit @ 0x1C00367C0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x1C0036920 (USBParseFeatureUnit.c)
 *     USBParseMIDIElement @ 0x1C0037E60 (USBParseMIDIElement.c)
 *     USBParseMIDIInJack @ 0x1C0037FC0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C00380C0 (USBParseMIDIOutJack.c)
 *     USBParseMixerUnit @ 0x1C0038240 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x1C00384A0 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x1C00386F0 (USBParseSelectorUnit.c)
 *     USBParseTerminalUnit @ 0x1C0038820 (USBParseTerminalUnit.c)
 * Callees:
 *     memmove @ 0x1C0019680 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C0033484 (USBHwAllocateAndBag.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C0035C2C (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBParseGetUnitString(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  bool v4; // zf
  int StringDescriptor; // esi
  unsigned __int8 *v7; // rcx
  __int64 v8; // rax
  unsigned __int8 *v9; // rcx
  UCHAR v10; // bl
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v12; // rbp
  _WORD *v13; // rbx
  size_t v14; // rdi
  __int64 v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+68h] [rbp+10h] BYREF
  void *v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = a2[2] == 7;
  StringDescriptor = 0;
  *a3 = 0LL;
  if ( v4 && (unsigned __int16)(*((_WORD *)a2 + 2) - 1) <= 1u )
  {
    v7 = &a2[a2[6]];
    v8 = v7[11];
    v9 = v7 + 12;
  }
  else
  {
    v8 = *a2;
    v9 = a2 - 1;
  }
  v10 = v9[v8];
  if ( v10 )
  {
    Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, 255LL, 1096972357LL);
    v18 = 0LL;
    v12 = Pool2;
    v17 = 0;
    if ( Pool2 )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v10, 0x409u, Pool2, v16, &v17);
      if ( StringDescriptor < 0 )
      {
        if ( StringDescriptor == -1073741823 )
          StringDescriptor = 0;
      }
      else
      {
        StringDescriptor = USBHwAllocateAndBag(&v18, (unsigned int)*v12 + 2, 256LL, *(void **)(a1 + 8));
        if ( StringDescriptor >= 0 )
        {
          v13 = v18;
          v14 = (unsigned int)*v12 - 2;
          memmove(v18, v12 + 2, v14);
          *a3 = v13;
          v13[v14 >> 1] = 0;
        }
      }
      ExFreePool(v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
