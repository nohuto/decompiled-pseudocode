/*
 * XREFs of ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x14002A320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14004E1A4 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComClassFactory::CreateInstance(
        __int64 (__fastcall **this)(struct IUnknown *, const struct _GUID *, void **),
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  struct IUnknown *v5; // r11
  __int64 result; // rax

  v5 = a2;
  result = 2147500035LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( !a2 || (unsigned int)ATL::InlineIsEqualUnknown(a3) )
      return this[8](v5, a3, a4);
    else
      return 2147746064LL;
  }
  return result;
}
