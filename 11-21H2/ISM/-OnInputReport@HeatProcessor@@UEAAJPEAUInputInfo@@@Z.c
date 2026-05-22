/*
 * XREFs of ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BC3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800BC3A8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x1801BBEB4 (-HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ.c)
 */

__int64 __fastcall HeatProcessor::OnInputReport(HeatProcessor *this, struct InputInfo *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)a2 == 2048 )
  {
    if ( HeatProcessor::HeatCoreProcessingEnabled(this, (__int64)a2, a3, a4) )
    {
      v6 = *((_QWORD *)this + 10);
      if ( v6 )
      {
        v9[0] = *((_DWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        v9[1] = *((_DWORD *)a2 + 2);
        v11 = *((_QWORD *)a2 + 9);
        v12 = *((_DWORD *)a2 + 16);
        v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 48LL))(v6, v9);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            251LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
            (const char *)(unsigned int)v7);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      233LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)0x80070057LL);
  }
  return 0LL;
}
