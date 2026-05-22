/*
 * XREFs of ?QueryInterface@GestureSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E1320
 * Callers:
 *     <none>
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::QueryInterface(GestureSession *this, struct _GUID *a2, void **a3)
{
  void *v4; // rbx
  void *v5; // r8
  _QWORD *v6; // r9

  v4 = 0LL;
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || IsEqualGUID(v6, &GUID_771487fa_af98_46fe_9c2a_09b9988c067a) )
  {
    v4 = v5;
    if ( v5 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  *a3 = v4;
  return v4 == 0LL ? 0x80004002 : 0;
}
