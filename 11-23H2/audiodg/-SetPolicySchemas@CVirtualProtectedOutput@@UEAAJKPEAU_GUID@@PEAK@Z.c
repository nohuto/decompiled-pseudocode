/*
 * XREFs of ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x14005E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicySchemas(
        CVirtualProtectedOutput *this,
        unsigned int a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  int v4; // r11d
  unsigned int i; // r10d
  int v9; // r10d
  int v10; // ebx
  struct _GUID v12; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  for ( i = 0; i < a2; i = v9 + 1 )
  {
    v12 = a3[i];
    if ( IsEqualGUID(&MFPROTECTION_DISABLE, &v12) )
    {
      if ( (unsigned int)a3 >= 2 )
        goto LABEL_14;
      if ( ((unsigned __int8)a3 & 1) != 0 && v4 <= 4 )
        v4 = 4;
    }
    else
    {
      if ( !IsEqualGUID(&MFPROTECTION_CONSTRICTAUDIO, &v12) )
      {
        v10 = -2147467263;
        goto LABEL_17;
      }
      if ( (unsigned int)a3 >= 0x100 )
      {
LABEL_14:
        v10 = -2147024809;
        goto LABEL_17;
      }
      if ( v4 <= (unsigned __int8)a3 )
        v4 = (unsigned __int8)a3;
    }
  }
  v10 = (*(__int64 (__fastcall **)(CVirtualProtectedOutput *, _QWORD, struct _GUID *, unsigned int *))(*(_QWORD *)this + 40LL))(
          this,
          (unsigned int)v4,
          a3,
          a4);
  if ( v10 >= 0 )
    return (unsigned int)v10;
LABEL_17:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_54b82945556c3d10a6b677da0424b62c_Traceguids, v10);
  }
  AudDGTraceLoggingErrorHelper("CVirtualProtectedOutput::SetPolicySchemas", 0x14Du, v10);
  return (unsigned int)v10;
}
