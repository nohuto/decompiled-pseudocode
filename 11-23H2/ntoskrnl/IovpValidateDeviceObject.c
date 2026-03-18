/*
 * XREFs of IovpValidateDeviceObject @ 0x140AC1FF8
 * Callers:
 *     IovCallDriver @ 0x140AC11D0 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x140AC19B4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 4) >= 0;
}
