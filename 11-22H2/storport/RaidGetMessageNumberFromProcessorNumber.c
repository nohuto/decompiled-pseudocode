/*
 * XREFs of RaidGetMessageNumberFromProcessorNumber @ 0x1C003B058
 * Callers:
 *     StorGetMessageInterruptIDFromProcessorIndex @ 0x1C0045754 (StorGetMessageInterruptIDFromProcessorIndex.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall RaidGetMessageNumberFromProcessorNumber(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  __int64 v3; // r9
  int v5; // ecx

  v3 = **(_QWORD **)(a1 - 16);
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 4596) & 2) == 0
      || *a2 >= *(_WORD *)(v3 + 4598)
      || (v5 = *(unsigned __int8 *)(*((unsigned __int8 *)a2 + 2) + ((unsigned __int64)*a2 << 6) + *(_QWORD *)(v3 + 4616)),
          *a3 = v5,
          v5 == 255) )
    {
      *a3 = 0;
    }
    return 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 34LL, &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids);
    }
    return 3238002694LL;
  }
}
