/*
 * XREFs of sub_18005BF0C @ 0x18005BF0C
 * Callers:
 *     sub_180067AE0 @ 0x180067AE0 (sub_180067AE0.c)
 * Callees:
 *     ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0 @ 0x18005BB18 (-GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0.c)
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005BF0C(Concurrency::details::UMSThreadProxy *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(Concurrency::details::UMSThreadProxy *, __int64))(*(_QWORD *)this + 176LL))(this, a3);
  (*(void (__fastcall **)(Concurrency::details::UMSThreadProxy *, __int64, __int64))(*(_QWORD *)this + 184LL))(
    this,
    a2,
    a3);
  sub_18005BFC0(this, a2, a3);
  result = Concurrency::details::UMSThreadProxy::GetId(this);
  if ( (_DWORD)result )
  {
    v8 = 0LL;
    sub_18005D26C(v7, &v8);
    v8 = 0LL;
    return sub_18005D0B8(this, &v8);
  }
  return result;
}
