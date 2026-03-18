/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A10C
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209C14 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A04C (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(DxgMonitor::MonitorColorState *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // edi
  unsigned int v6; // edx
  int v7; // eax
  char v8; // cl
  bool v9; // cc
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+50h] [rbp-10h]

  v18 = 0;
  v2 = *(_QWORD *)this;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 24LL))(v3, &v15);
  if ( v4 >= 0 )
  {
    v6 = HIDWORD(v17);
    v7 = (HIDWORD(v17) >> 14) & 0x3F;
    *((_DWORD *)this + 20) = BYTE12(v17) >> 2;
    *((_DWORD *)this + 22) = v7;
    *((_DWORD *)this + 23) = (v6 >> 20) & 0x3F;
    LOBYTE(v7) = v18;
    *((_DWORD *)this + 21) = (v6 >> 8) & 0x3F;
    v8 = v18;
    *((_DWORD *)this + 24) = v6 >> 26;
    *((_DWORD *)this + 25) = 0;
    *((_BYTE *)this + 106) = v7 & 1;
    *((_BYTE *)this + 107) = (v8 & 2) != 0;
    *(_OWORD *)((char *)this + 108) = v15;
    *(_OWORD *)((char *)this + 124) = v16;
    v9 = *((_DWORD *)this + 68) <= 4u;
    *((_WORD *)this + 52) = 0;
    *((_BYTE *)this + 140) = (v8 & 4) != 0;
    if ( v9 )
    {
      v10 = *((_OWORD *)this + 5);
      *((_DWORD *)this + 68) = 4;
      v11 = *((_OWORD *)this + 6);
      *((_OWORD *)this + 13) = v10;
      v12 = *((_OWORD *)this + 7);
      *((_OWORD *)this + 14) = v11;
      v13 = *((_OWORD *)this + 8);
      *((_OWORD *)this + 15) = v12;
      *((_OWORD *)this + 16) = v13;
    }
    v9 = *((_DWORD *)this + 84) <= 5u;
    *(_QWORD *)((char *)this + 276) = v17;
    v14 = DWORD2(v17);
    *((_DWORD *)this + 71) = DWORD2(v17);
    if ( v9 )
    {
      *((_QWORD *)this + 39) = *(_QWORD *)((char *)this + 276);
      *((_DWORD *)this + 80) = v14;
      *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
      *((_DWORD *)this + 83) = v14;
      *((_DWORD *)this + 84) = 5;
      DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
    }
    DxgMonitor::MonitorColorState::_UpdateHDRParamsIfRequired(this);
  }
  return (unsigned int)v4;
}
