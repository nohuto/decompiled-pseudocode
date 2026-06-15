/*
 * XREFs of ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180038E50
 * Callers:
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180039030 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180007F54 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_IfFailedMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-38h]
  wil::details *v9; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = (unsigned int)a4;
  if ( (int)a4 < 0 )
  {
    LODWORD(v9) = (_DWORD)a4;
    wil::details::ReportFailure_HrMsg<2>((__int64)this, a2, a3, (__int64)a4, v8, retaddr, v9, a5, (va_list)&a6);
  }
  return v6;
}
