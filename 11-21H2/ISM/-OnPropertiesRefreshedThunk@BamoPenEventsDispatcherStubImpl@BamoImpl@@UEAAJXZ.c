/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ @ 0x1801913A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800424A4 (--1-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsDispatcherPrincipalImpl@1@@Z @ 0x18018FC84 (--0-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Micro_ea_18018FC84.c)
 */

__int64 __fastcall BamoImpl::BamoPenEventsDispatcherStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoPenEventsDispatcherStubImpl *this)
{
  BamoImpl::BamoPenEventsDispatcherStubImpl *v1; // rbx
  void (__fastcall ***v2)(_QWORD); // r8
  void (__fastcall ***v3)(_QWORD); // rdi
  __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 3);
  v3 = v2 - 2;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(
    (__int64)v5,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL),
    v2);
  LODWORD(v1) = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), __int64))(*v3)[11])(v3, (__int64)v1 - 16);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(v5);
  return (unsigned int)v1;
}
