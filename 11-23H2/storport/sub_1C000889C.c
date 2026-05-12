/*
 * XREFs of sub_1C000889C @ 0x1C000889C
 * Callers:
 *     sub_1C000775C @ 0x1C000775C (sub_1C000775C.c)
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000A850 @ 0x1C000A850 (sub_1C000A850.c)
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C0011B58 @ 0x1C0011B58 (sub_1C0011B58.c)
 *     sub_1C0011DBC @ 0x1C0011DBC (sub_1C0011DBC.c)
 *     sub_1C0018A38 @ 0x1C0018A38 (sub_1C0018A38.c)
 *     sub_1C0018B98 @ 0x1C0018B98 (sub_1C0018B98.c)
 *     sub_1C0035FBC @ 0x1C0035FBC (sub_1C0035FBC.c)
 *     sub_1C003766C @ 0x1C003766C (sub_1C003766C.c)
 *     sub_1C0037B04 @ 0x1C0037B04 (sub_1C0037B04.c)
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     StorPortSynchronizeAccess @ 0x1C0047590 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall sub_1C000889C(__int64 a1)
{
  KIRQL v1; // bl
  struct _KINTERRUPT *v3; // rcx
  __int64 v5; // rsi
  unsigned int i; // edi

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4305) )
  {
    v5 = *(_QWORD *)(a1 + 4288);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 24));
    if ( *(_DWORD *)(a1 + 4272) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v5 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * i + 24));
    }
  }
  else
  {
    v3 = *(struct _KINTERRUPT **)(a1 + 728);
    if ( v3 )
      return KeAcquireInterruptSpinLock(v3);
  }
  return v1;
}
