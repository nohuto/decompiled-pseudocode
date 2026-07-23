/*
 * XREFs of HalpInitializeCmciVector @ 0x14037C1B4
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x14037BBF0 (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x140320110 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x14037C7F0 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetLineStateInternal @ 0x14037CBD0 (HalpInterruptSetLineStateInternal.c)
 */

__int64 __fastcall HalpInitializeCmciVector(__int64 a1)
{
  bool v2; // zf
  unsigned int v4; // [rsp+70h] [rbp+10h] BYREF
  int v5; // [rsp+74h] [rbp+14h]

  v2 = *(_DWORD *)(a1 + 240) == 2;
  v4 = *(_DWORD *)(a1 + 256);
  v5 = -7;
  if ( !v2 || !HalpInterruptFindLines(&v4) )
    return 0LL;
  HalpInterruptGetPriority(a1);
  return HalpInterruptSetLineStateInternal(a1, &v4);
}
