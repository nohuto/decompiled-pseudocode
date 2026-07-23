/*
 * XREFs of sub_1409F10B0 @ 0x1409F10B0
 * Callers:
 *     <none>
 * Callees:
 *     NotifyRoutine @ 0x1409F1600 (NotifyRoutine.c)
 */

__int64 __fastcall sub_1409F10B0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v3[4]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v4; // [rsp+48h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 48);
  v3[2] = 0LL;
  v4 = 0LL;
  v3[0] = 1280LL;
  v3[1] = v1;
  v3[3] = *(unsigned int *)(a1 + 64);
  NotifyRoutine((PUNICODE_STRING)(a1 + 72), 0LL, (PIMAGE_INFO)v3);
  return 0LL;
}
