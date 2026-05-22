/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ @ 0x1801AF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180015888 (--1-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsDispatcherPrincipalImpl@1@@Z @ 0x18004F53C (--0-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Micro_ea_18004F53C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenEventsDispatcherStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoPenEventsDispatcherStubImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( *(int *)(v3 + 8) > 0 )
  {
    v4 = v3 - 16;
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(
      (__int64)v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 88LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(v6);
  }
  return v2;
}
