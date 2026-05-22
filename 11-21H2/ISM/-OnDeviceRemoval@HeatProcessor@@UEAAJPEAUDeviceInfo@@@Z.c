/*
 * XREFs of ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801BC1F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800BC3A8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x1801BBEB4 (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceRemoval(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int16 v10; // [rsp+24h] [rbp-24h]
  __int16 v11; // [rsp+26h] [rbp-22h]
  __int16 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  __int64 v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      193LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      a4);
  if ( *((_DWORD *)a2 + 1) == 2048 )
  {
    if ( HeatProcessor::HeatCoreProcessingEnabled(this, (__int64)a2, a3, (__int64)a4) )
    {
      v6 = *((_QWORD *)this + 10);
      if ( v6 )
      {
        v9 = *(_DWORD *)a2;
        v10 = *((_WORD *)a2 + 16);
        v11 = *((_WORD *)a2 + 17);
        v12 = *((_WORD *)a2 + 18);
        v14 = *(_QWORD *)((char *)a2 + 20);
        v15 = *((_DWORD *)a2 + 7);
        v13 = 1;
        v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 32LL))(v6, &v9);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            209LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
            (const char *)(unsigned int)v7);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      197LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)0x80070057LL);
  }
  return 0LL;
}
