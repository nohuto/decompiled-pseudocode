/*
 * XREFs of ??1ProtocolBindProperties@@QEAA@XZ @ 0x1C00B3670
 * Callers:
 *     ?reserve@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B3960 (-reserve@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C013B7C8 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013D2E0 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ProtocolBindProperties::~ProtocolBindProperties(ProtocolBindProperties *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 10) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x7272414Bu);
    *((_QWORD *)this + 4) = 0LL;
    *((_DWORD *)this + 7) = 0;
    *((_DWORD *)this + 6) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
}
