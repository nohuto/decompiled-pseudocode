/*
 * XREFs of IovpCancelRoutine @ 0x140ABFCBC
 * Callers:
 *     IoCancelIrp @ 0x140351E90 (IoCancelIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IovpCancelRoutine(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  if ( pXdvDriverCancel )
    return pXdvDriverCancel();
  else
    return a3();
}
