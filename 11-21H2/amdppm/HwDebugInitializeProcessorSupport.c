/*
 * XREFs of HwDebugInitializeProcessorSupport @ 0x1C0037968
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x1C000A000 (HwDebugDiagnosticRegistryHandler.c)
 *     InitCommonPerfStateContext @ 0x1C0030140 (InitCommonPerfStateContext.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     HwDebugCreateRegisterGroup @ 0x1C0037568 (HwDebugCreateRegisterGroup.c)
 */

__int64 __fastcall HwDebugInitializeProcessorSupport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __m128i v13; // [rsp+50h] [rbp-28h]

  v3 = (int)a3;
  v12 = 0LL;
  v13 = 0LL;
  if ( qword_1C0011718 && !(_DWORD)a3 )
  {
    v6 = qword_1C0011718(&v12);
    if ( v6 >= 0 )
    {
      *(_OWORD *)(a1 + 1232) = v12;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v6;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
        v9);
    }
  }
  v13 = xmmword_1C0011D18[v3];
  result = (unsigned __int8)_mm_cvtsi128_si32(v13);
  if ( (unsigned __int8)result + (unsigned __int8)v12 )
  {
    v8 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= 2 )
      {
        *(_OWORD *)(a2 + 16 * v3 + 8) = v11;
        return result;
      }
      result = HwDebugCreateRegisterGroup(a1, v8, a3, (unsigned __int8 *)&v12, (_QWORD *)&v11 + v8, v3);
      if ( (int)result < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = result;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               3u,
               0x21u,
               (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
               v10);
    }
  }
  return result;
}
