/*
 * XREFs of sub_14051CF20 @ 0x14051CF20
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSecondaryInterruptServices @ 0x1409618C0 (KeInitializeSecondaryInterruptServices.c)
 */

__int64 __fastcall sub_14051CF20(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  if ( dword_140C4B0FC >= (unsigned int)dword_140C4B0F8 )
    return 3221225626LL;
  v4 = _InterlockedIncrement(&dword_140C4B0FC);
  if ( v4 >= dword_140C4B0F8 )
    return 3221225626LL;
  if ( v4 != 1 || (result = KeInitializeSecondaryInterruptServices(0LL), (int)result >= 0) )
  {
    *a3 = v4 + dword_140C4B06C - 1;
    return 0LL;
  }
  return result;
}
