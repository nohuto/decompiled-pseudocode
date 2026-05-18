/*
 * XREFs of ??$AddMeasurement@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800C2E24
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?GetMeasurementTraceValue@PerformanceLogger@Utils@Spectre@@CAPEBDAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180020334 (-GetMeasurementTraceValue@PerformanceLogger@Utils@Spectre@@CAPEBDAEBV-$basic_string@DU-$char_tra.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Utils::PerformanceLogger::AddMeasurement<std::string>(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *MeasurementTraceValue; // rbx
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64, __int64, _QWORD, _QWORD *, const char *, const char *, int); // rdi
  _QWORD *v11; // rax
  _BYTE v12[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-40h]

  v13 = a6;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1) )
  {
    MeasurementTraceValue = Spectre::Utils::PerformanceLogger::GetMeasurementTraceValue(a6);
    v9 = *a1;
    v10 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, const char *, const char *, int))(*(_QWORD *)*a1 + 40LL);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)a1[2] + 8LL))(a1[2], v12);
    v10(
      v9,
      a5,
      *v11,
      MeasurementTraceValue,
      "InitializeRenderer",
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\rendererd3d11.cpp",
      a3);
  }
  std::string::_Tidy_deallocate((__int64)a6);
}
