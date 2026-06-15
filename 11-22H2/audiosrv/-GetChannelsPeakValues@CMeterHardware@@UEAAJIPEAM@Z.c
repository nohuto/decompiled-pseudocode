/*
 * XREFs of ?GetChannelsPeakValues@CMeterHardware@@UEAAJIPEAM@Z @ 0x18010FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterHardware::GetChannelsPeakValues(CMeterHardware *this, unsigned int a2, float *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  float v9; // xmm0_4
  float v11; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v5 = -2147467261;
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CMeterHardware::GetChannelsPeakValues", 516, v5);
    return v5;
  }
  if ( a2 != *((_DWORD *)this + 6) )
  {
    v5 = -2147024809;
    goto LABEL_13;
  }
  v5 = 0;
  if ( *((_QWORD *)this + 5) )
  {
    v6 = 0LL;
    if ( *((_DWORD *)this + 6) )
    {
      do
      {
        v7 = *((_QWORD *)this + 5);
        v11 = 0.0;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v7 + 32LL))(v7, (unsigned int)v6, &v11);
        v5 = v8;
        v9 = fminf(v11, 1.0);
        if ( v9 <= 0.0 )
          v9 = 0.0;
        a3[v6] = v9;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 6) );
      if ( v8 < 0 )
        goto LABEL_13;
    }
  }
  else if ( a2 )
  {
    memset_0(a3, 0, 4LL * a2);
  }
  return v5;
}
