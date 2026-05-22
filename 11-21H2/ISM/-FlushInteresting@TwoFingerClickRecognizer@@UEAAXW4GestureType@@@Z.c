/*
 * XREFs of ?FlushInteresting@TwoFingerClickRecognizer@@UEAAXW4GestureType@@@Z @ 0x1801B8A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwoFingerClickRecognizer::FlushInteresting(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  if ( (a2 & 0x800) != 0 )
  {
    result = 65534LL;
    *(_WORD *)(a1 + 16) &= ~1u;
  }
  if ( (a2 & 0x1000) != 0 )
  {
    result = 65533LL;
    *(_WORD *)(a1 + 16) &= ~2u;
  }
  if ( (a2 & 0x400) != 0 )
  {
    result = 65527LL;
    *(_WORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
