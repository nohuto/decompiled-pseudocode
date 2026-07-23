/*
 * XREFs of sub_14091C9E8 @ 0x14091C9E8
 * Callers:
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 */

void __fastcall sub_14091C9E8(volatile signed __int32 *P, unsigned int a2)
{
  ULONG_PTR v3; // rcx

  v3 = *((_QWORD *)P + 206) + 24LL * a2;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  if ( _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    sub_1406BBAD8(P);
}
