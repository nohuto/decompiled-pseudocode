/*
 * XREFs of ?GetDedicatedVideoMemory@CDxDevice@DirectComposition@@QEBA_KXZ @ 0x1800F7704
 * Callers:
 *     ?ComputeVideoMemoryBreakdown@CSurfaceManager@DirectComposition@@IEAAXXZ @ 0x18001B9F0 (-ComputeVideoMemoryBreakdown@CSurfaceManager@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@UIDXGIAdapter@@@@YAXAEAPEAUIDXGIAdapter@@@Z @ 0x1800E950C (--$ReleaseInterface@UIDXGIAdapter@@@@YAXAEAPEAUIDXGIAdapter@@@Z.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::GetDedicatedVideoMemory(DirectComposition::CDxDevice *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-158h] BYREF
  __int64 v4; // [rsp+28h] [rbp-150h] BYREF
  _BYTE v5[272]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v6; // [rsp+140h] [rbp-38h]

  v1 = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
         *((_QWORD *)this + 3),
         &GUID_05008617_fbfd_4051_a790_144884b4f6a9,
         &v4) >= 0 )
  {
    v3 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56LL))(v4, &v3) >= 0 )
    {
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 64LL))(v3, v5) >= 0 )
        v1 = v6;
      ReleaseInterface<IDXGIAdapter>(&v3);
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v1;
}
