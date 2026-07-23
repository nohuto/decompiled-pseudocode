/*
 * XREFs of RtlDispatchAPC @ 0x18007FD40
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RtlDispatchAPC(void (__fastcall *a1)(__int64), __int64 a2, _ACTIVATION_CONTEXT *a3)
{
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+28h] [rbp-50h]
  __int128 v8; // [rsp+30h] [rbp-48h]
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int128 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  v6 = 72LL;
  v7 = 1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a3 == (_ACTIVATION_CONTEXT *)-1LL )
  {
    a1(a2);
  }
  else
  {
    RtlActivateActivationContextUnsafeFast((__int64)&v6, (__int64)a3);
    a1(a2);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v6);
    RtlReleaseActivationContext(a3);
  }
}
