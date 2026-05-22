/*
 * XREFs of ?FlushPotentials@GestureSession@@UEAAJW4GestureType@@@Z @ 0x1801B52C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::FlushPotentials(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rsi
  __int64 v5; // rbp

  v3 = (_QWORD *)(a1 + 704);
  v5 = 5LL;
  do
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, a2);
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(a1 + 16) &= ~a2;
  return 0LL;
}
