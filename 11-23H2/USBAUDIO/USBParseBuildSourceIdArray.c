/*
 * XREFs of USBParseBuildSourceIdArray @ 0x1C003399C
 * Callers:
 *     USBParseExtensionUnit @ 0x1C0034370 (USBParseExtensionUnit.c)
 *     USBParseMixerUnit @ 0x1C0035BD0 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x1C0035E60 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x1C0036100 (USBParseSelectorUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBParseBuildSourceIdArray(unsigned int a1, unsigned __int8 *a2)
{
  __int64 v4; // rdi
  __int64 Pool2; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  int v8; // eax

  v4 = a1;
  Pool2 = ExAllocatePool2(256LL, 4LL * a1, 1096972357LL);
  v6 = Pool2;
  if ( Pool2 && a1 )
  {
    v7 = (_DWORD *)Pool2;
    do
    {
      v8 = *a2++;
      *v7++ = v8;
      --v4;
    }
    while ( v4 );
  }
  return v6;
}
