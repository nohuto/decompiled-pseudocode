/*
 * XREFs of sub_1C0045200 @ 0x1C0045200
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C0044154 @ 0x1C0044154 (sub_1C0044154.c)
 *     StorPortResume @ 0x1C0047270 (StorPortResume.c)
 */

char __fastcall sub_1C0045200(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  char v5; // di
  int v7; // [rsp+20h] [rbp-18h]

  v3 = (_QWORD *)(a1 + 576);
  if ( (byte_1C0093A00 & 2) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    sub_1C0044154(a1, &stru_1C0088E68, a3, *v3 + 16LL, v7);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 2012), 1);
  v5 = StorPortResume(*v3 + 16LL);
  if ( v5 )
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
  return v5;
}
