/*
 * XREFs of ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F0550
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800E3F9C (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     wil::details::lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___::_lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___ @ 0x1800F032C (wil--details--lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___--_lambda_call__lambda_4b6c.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F4250 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800F52B4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::OnDeviceAttach(
        GazeDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  _DWORD *v6; // rbx
  int Device; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct RIMDevice *v10; // rsi
  unsigned int v11; // edi
  struct GazeDeviceInfo *v13; // rcx
  void *Src; // [rsp+30h] [rbp-30h] BYREF
  struct RIMDevice *v15; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  char v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct GazeDeviceInfo *v19; // [rsp+98h] [rbp+38h] BYREF

  v15 = 0LL;
  v19 = 0LL;
  v6 = operator new(0x60CuLL);
  memset_0(v6, 0, 0x60CuLL);
  v6[2] = 1548;
  Src = v6;
  v16[0] = &Src;
  v16[1] = &v19;
  v17 = 1;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, (struct DeviceInfo **)&Src);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 135LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)(unsigned int)Device);
    wil::details::lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___::_lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___((__int64)v16);
    return v8;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v15, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 139LL;
    goto LABEL_7;
  }
  v10 = v15;
  v11 = *((_DWORD *)v15 + 14) + 1592;
  v19 = (struct GazeDeviceInfo *)operator new(v11);
  memset_0(v19, 0, v11);
  memcpy_0(v19, Src, 0x60CuLL);
  *((_DWORD *)v19 + 2) = v11;
  Device = GazeHidDevice::Initialize(v10, v19);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 156LL;
    goto LABEL_7;
  }
  *a3 = v19;
  v13 = 0LL;
  v19 = 0LL;
  if ( Src )
  {
    operator delete(Src);
    Src = 0LL;
    v13 = v19;
  }
  if ( v13 )
    operator delete(v13);
  return 0LL;
}
