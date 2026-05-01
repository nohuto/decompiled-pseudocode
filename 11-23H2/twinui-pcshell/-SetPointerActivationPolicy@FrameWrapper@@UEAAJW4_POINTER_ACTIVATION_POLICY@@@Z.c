/*
 * XREFs of ?SetPointerActivationPolicy@FrameWrapper@@UEAAJW4_POINTER_ACTIVATION_POLICY@@@Z @ 0x1803C7870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall FrameWrapper::SetPointerActivationPolicy(__int64 a1, int a2)
{
  __int64 v3; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), &v5);
  if ( !a2 )
  {
    v3 = 0LL;
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
    v3 = 0x8000000LL;
LABEL_5:
    SHSetWindowBits(v5, 4294967276LL, 0x8000000LL, v3);
  }
  return 0LL;
}
