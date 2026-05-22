/*
 * XREFs of ?QueryInterface@RefCountedObject@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180096BF0
 * Callers:
 *     ?QueryInterface@InputContext@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CB260 (-QueryInterface@InputContext@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010DBC0 (-QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RefCountedObject::QueryInterface(RefCountedObject *this, struct _GUID *a2, void **a3)
{
  __int64 result; // rax

  if ( !a3 )
    return 2147942487LL;
  if ( !IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
    return 2147500034LL;
  (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)this + 8LL))(this);
  result = 0LL;
  *a3 = this;
  return result;
}
