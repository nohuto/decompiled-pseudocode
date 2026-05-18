/*
 * XREFs of sub_180063FE4 @ 0x180063FE4
 * Callers:
 *     sub_180071610 @ 0x180071610 (sub_180071610.c)
 * Callees:
 *     ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0 @ 0x180063C78 (-GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0.c)
 *     sub_180064098 @ 0x180064098 (sub_180064098.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180063FE4(Concurrency::details::UMSThreadProxy *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(Concurrency::details::UMSThreadProxy *, __int64))(*(_QWORD *)this + 176LL))(this, a3);
  (*(void (__fastcall **)(Concurrency::details::UMSThreadProxy *, __int64, __int64))(*(_QWORD *)this + 184LL))(
    this,
    a2,
    a3);
  sub_180064098(this, a2, a3);
  result = Concurrency::details::UMSThreadProxy::GetId(this);
  if ( (_DWORD)result )
  {
    v8 = 0LL;
    sub_18006558C(v7, &v8);
    v8 = 0LL;
    return sub_180065394(this, &v8);
  }
  return result;
}
