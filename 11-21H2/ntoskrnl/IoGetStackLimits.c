/*
 * XREFs of IoGetStackLimits @ 0x1402AB940
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1406375D0 @ 0x1406375D0 (sub_1406375D0.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 *     sub_14083EB44 @ 0x14083EB44 (sub_14083EB44.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 *     sub_140A62018 @ 0x140A62018 (sub_140A62018.c)
 *     sub_140A993C8 @ 0x140A993C8 (sub_140A993C8.c)
 * Callees:
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)sub_1402AB970(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
