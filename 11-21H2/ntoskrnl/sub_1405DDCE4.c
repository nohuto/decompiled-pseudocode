/*
 * XREFs of sub_1405DDCE4 @ 0x1405DDCE4
 * Callers:
 *     sub_1405DDBE0 @ 0x1405DDBE0 (sub_1405DDBE0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405DDCE4(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  NTSTATUS v8; // edi
  char v9; // si

  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 272), (PVOID)0x72466F50, &File, 1u, 0x20u);
  if ( v8 >= 0 )
  {
    v9 = sub_14042A5E0(a2, a3);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
    *a5 = v9;
  }
  return (unsigned int)v8;
}
