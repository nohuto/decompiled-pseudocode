/*
 * XREFs of HwDebugInitializeProcessorSupport @ 0x1C0029358
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x1C0002A80 (HwDebugDiagnosticRegistryHandler.c)
 *     InitCommonPerfStateContext @ 0x1C0029290 (InitCommonPerfStateContext.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     HwDebugCreateRegisterGroup @ 0x1C002945C (HwDebugCreateRegisterGroup.c)
 */

__int64 __fastcall HwDebugInitializeProcessorSupport(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-50h]
  int v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __m128i v13; // [rsp+50h] [rbp-28h]

  v3 = a3;
  v12 = 0LL;
  v13 = 0LL;
  if ( qword_1C001DFB8 && !a3 )
  {
    v6 = qword_1C001DFB8(&v12);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = v6;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x20u,
          (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
          v10);
      }
    }
    else
    {
      *(_OWORD *)(a1 + 1232) = v12;
    }
  }
  v13 = xmmword_1C001E5B8[v3];
  result = (unsigned __int8)_mm_cvtsi128_si32(v13);
  if ( (unsigned __int8)result + (unsigned __int8)v12 )
  {
    v8 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      result = HwDebugCreateRegisterGroup(a1, v8, a3, (unsigned int)&v12, (__int64)&v11 + 8 * v8, v3);
      if ( (int)result < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= 2 )
      {
        *(_OWORD *)(a2 + 16 * v3 + 8) = v11;
        return result;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = result;
      return WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               3u,
               0x21u,
               (__int64)&WPP_a6b7e2b9a5cc39617834d09aac9dba9c_Traceguids,
               v9);
    }
  }
  return result;
}
