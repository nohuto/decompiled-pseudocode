/*
 * XREFs of sub_1C0041CE0 @ 0x1C0041CE0
 * Callers:
 *     sub_1C0042150 @ 0x1C0042150 (sub_1C0042150.c)
 *     sub_1C00742D0 @ 0x1C00742D0 (sub_1C00742D0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 */

__int64 __fastcall sub_1C0041CE0(__int64 a1, int a2, struct _STRING *a3)
{
  unsigned int v3; // edi
  struct _STRING *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  PCHAR Buffer; // rcx
  PCSZ v12; // r10
  CHAR *Lock; // rax

  v3 = 0;
  v7 = (struct _STRING *)sub_1C0007CF4(64LL, 48LL, 1213423954LL, 0LL);
  if ( !v7 )
    return (unsigned int)-1073741670;
  v8 = (unsigned int)(a2 + 1);
  v9 = v8;
  v10 = sub_1C0007CF4(64LL, v8, 1213423954LL, 0LL);
  if ( !v10 )
  {
    Buffer = v7[1].Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x48536152u);
    ExFreePoolWithTag(v7, 0x48536152u);
    return (unsigned int)-1073741670;
  }
  sub_1C0042880(v10, v9, a1);
  v7->Buffer = (PCHAR)v7;
  *(_QWORD *)&v7->Length = v7;
  RtlInitAnsiString(v7 + 1, v12);
  v7[2] = *a3;
  Lock = (CHAR *)stru_1C0093880.DeviceQueue.Lock;
  if ( *(struct _DEVICE_OBJECT **)stru_1C0093880.DeviceQueue.Lock != (struct _DEVICE_OBJECT *)&stru_1C0093880.DeviceQueue.DeviceListHead.Blink )
    __fastfail(3u);
  *(_QWORD *)&v7->Length = &stru_1C0093880.DeviceQueue.DeviceListHead.Blink;
  v7->Buffer = Lock;
  *(_QWORD *)Lock = v7;
  stru_1C0093880.DeviceQueue.Lock = (KSPIN_LOCK)v7;
  return v3;
}
