/*
 * XREFs of ?AreResourcesAvailableForStream@CAudioResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800FE7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioResourceManager::AreResourcesAvailableForStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct _GUID *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v5 = (__int64 *)*((_QWORD *)this + 5);
  v6 = *v5;
  v8 = (__int128)*a3;
  return (*(__int64 (__fastcall **)(__int64 *, struct CEndpointCharacteristics *, __int128 *, __int64, unsigned int))(v6 + 64))(
           v5,
           a2,
           &v8,
           a4,
           a5);
}
