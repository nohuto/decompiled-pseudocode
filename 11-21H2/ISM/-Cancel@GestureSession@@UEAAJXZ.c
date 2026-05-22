/*
 * XREFs of ?Cancel@GestureSession@@UEAAJXZ @ 0x1801B5280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::Cancel(GestureSession *this)
{
  __int64 result; // rax

  (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 80LL))(this);
  *((_DWORD *)this + 4) = 0;
  result = 0LL;
  *((_BYTE *)this + 25) = 1;
  return result;
}
