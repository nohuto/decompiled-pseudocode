/*
 * XREFs of PortMiniportRegistryWrite @ 0x1C0077FA4
 * Callers:
 *     StorPortRegistryWrite @ 0x1C0046B30 (StorPortRegistryWrite.c)
 * Callees:
 *     AsciiToWChar @ 0x1C0077AC0 (AsciiToWChar.c)
 */

int __fastcall PortMiniportRegistryWrite(__int64 a1, __int64 a2, ULONG a3, __int64 a4)
{
  int result; // eax
  unsigned int v9; // eax
  _BYTE *ValueData; // rdi
  unsigned int v11; // ebp
  unsigned int v12; // esi
  _WORD *Pool2; // rax
  _BYTE *v14; // r14
  ULONG ValueLength; // eax

  if ( RtlCheckRegistryKey(0, *(PWSTR *)(a1 + 8)) >= 0
    || (result = RtlCreateRegistryKey(0, *(PWSTR *)(a1 + 8)), result >= 0) )
  {
    v9 = *(_DWORD *)(a4 + 52);
    ValueData = (_BYTE *)(*(_QWORD *)(a4 + 32) + v9);
    if ( a3 == 1 )
    {
      v11 = 2 * *(_DWORD *)(a4 + 44);
      v12 = v11 + 2;
      if ( v11 + 2 < v11 || v9 + v12 < v12 )
        return -1073741675;
      if ( v9 + v12 > *(_DWORD *)(a4 + 40) )
        return -1073741789;
      Pool2 = (_WORD *)ExAllocatePool2(64LL, v12, 1112697936LL);
      v14 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      if ( v12 > 0xFFFF )
      {
        ExFreePoolWithTag(Pool2, 0x42526C50u);
        return -1073741675;
      }
      ValueLength = AsciiToWChar(Pool2, ValueData, (unsigned __int16)v11);
      if ( (unsigned __int16)v11 - ValueLength >= 2 )
        ValueLength += 2;
      ValueData = v14;
    }
    else
    {
      ValueLength = 4;
      if ( a3 != 4 )
        ValueLength = *(_DWORD *)(a4 + 44);
    }
    return RtlWriteRegistryValue(0, *(PCWSTR *)(a1 + 8), *(PCWSTR *)(a2 + 8), a3, ValueData, ValueLength);
  }
  return result;
}
