/*
 * XREFs of ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C001C630
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1C001C6BC (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkCompositionObject::Delete(_QWORD *a1)
{
  bool v2; // zf
  int v3; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-68h] BYREF
  PVOID Object; // [rsp+28h] [rbp-60h]
  int v6; // [rsp+30h] [rbp-58h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  Object = 0LL;
  v2 = a1[2] == 0LL;
  v3 = *((_DWORD *)a1 + 2);
  v4[0] = 0;
  v6 = v3;
  if ( !v2 )
  {
    if ( (int)DxgkAttachToObjectSession::Attach((DxgkAttachToObjectSession *)v4) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[2] + 32LL))(a1[2], a1);
    if ( v4[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
