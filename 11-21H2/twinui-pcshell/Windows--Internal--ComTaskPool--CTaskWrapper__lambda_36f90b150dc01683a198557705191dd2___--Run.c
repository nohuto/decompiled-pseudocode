/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_36f90b150dc01683a198557705191dd2___::Run @ 0x1804CD340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_36f90b150dc01683a198557705191dd2___::Run(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 16);
  v2 = *v1;
  v4 = 0xFFFFFFFFLL;
  v5 = 1;
  return (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 256))(v1, &v4);
}
