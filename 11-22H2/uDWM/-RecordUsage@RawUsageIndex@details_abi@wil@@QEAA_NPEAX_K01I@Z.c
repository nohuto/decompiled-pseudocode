/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180010B04
 * Callers:
 *     ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x180010600 (--R-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEA.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180010864 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x18009CCA4 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180010C18 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800113BC (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180016C3C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800580D8 (-MemoryFree@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v11; // rdx
  void *v12; // rdi
  void *v13; // rcx
  void *v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), v11);
  }
  else
  {
    *(_OWORD *)v14 = 0LL;
    v15 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v14, v11 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(this, v14[0], 0LL, v15 - (unsigned __int64)v14[0]);
      v12 = 0LL;
      v13 = (void *)*((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = *((_QWORD *)&v15 + 1);
      if ( v13 )
        MemoryFree(v13);
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v12 = (void *)*((_QWORD *)&v15 + 1);
    }
    if ( v12 )
      MemoryFree(v12);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6);
}
