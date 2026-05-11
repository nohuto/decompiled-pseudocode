/*
 * XREFs of USBParseGetMIDIJackStringFromDeviceID @ 0x1C0034DA0
 * Callers:
 *     USBParseMIDIInJack @ 0x1C00358E0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C0035A00 (USBParseMIDIOutJack.c)
 * Callees:
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C00397EC (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBParseGetMIDIJackStringFromDeviceID(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v6; // edx
  int v7; // esi
  _WORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  *a3 = 0LL;
  v6 = *(_DWORD *)(v3 + 32);
  if ( v6 <= 0xFF )
  {
    v7 = USBHwAllocateAndBag(&v13, v6 + 12, 256LL, *(_QWORD *)(a1 + 8));
    if ( v7 >= 0 )
    {
      v8 = v13;
      memmove(v13, *(const void **)(v3 + 24), *(unsigned int *)(v3 + 32));
      v9 = (unsigned int)(((unsigned __int64)*(unsigned int *)(v3 + 32) - 2) >> 1);
      v8[v9] = 32;
      v8[(unsigned int)(v9 + 1)] = 91;
      v10 = (unsigned int)(v9 + 2);
      v11 = (unsigned int)(v9 + 3);
      if ( a2 <= 0xA )
      {
        v8[v10] = a2 + 48;
      }
      else
      {
        v8[(unsigned int)v10] = a2 / 0xA + 48;
        v8[v11] = a2 % 0xA + 48;
        v11 = (unsigned int)(v11 + 1);
      }
      *a3 = v8;
      v8[v11] = 93;
      v8[(unsigned int)(v11 + 1)] = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741668;
  }
  return (unsigned int)v7;
}
