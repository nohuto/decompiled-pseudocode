/*
 * XREFs of ?GetDataProviderId@AnimationDataProvider@@UEBA_KXZ @ 0x18011E710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall AnimationDataProvider::GetDataProviderId(AnimationDataProvider *this)
{
  return *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 40LL))(*((_QWORD *)this + 4) + 8LL);
}
