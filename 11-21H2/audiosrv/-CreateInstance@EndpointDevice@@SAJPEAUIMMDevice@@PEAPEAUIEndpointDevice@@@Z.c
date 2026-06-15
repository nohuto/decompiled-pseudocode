/*
 * XREFs of ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18004BE68
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18004BD8C (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x18004C2F0 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x18004C87C (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EndpointDevice::CreateInstance(struct IMMDevice *a1, struct IEndpointDevice **a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, struct IEndpointDevice **); // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IEndpointDevice **); // rbx
  int v6; // edi
  int v7; // eax
  LPVOID v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IEndpointDevice **))operator new(0xB8uLL);
      v5 = v4;
      v9 = v4;
      if ( v4 )
      {
        *((_DWORD *)v4 + 4) = 1;
        *v4 = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))&EndpointDevice::`vftable'{for `IEndpointDevice'};
        v4[1] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))&EndpointDevice::`vftable'{for `CUnknown'};
        v4[3] = 0LL;
        v4[6] = 0LL;
        v4[7] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))7;
        *((_WORD *)v4 + 16) = 0;
        v4[10] = 0LL;
        v4[11] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))7;
        *((_WORD *)v4 + 32) = 0;
        *((_DWORD *)v4 + 28) = 0;
        v4[17] = 0LL;
        v4[18] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))7;
        *((_WORD *)v4 + 60) = 0;
        v4[21] = 0LL;
        v4[22] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))7;
        *((_WORD *)v4 + 76) = 0;
        v9 = v4;
        v6 = EndpointDevice::Initialize((EndpointDevice *)v4, a1);
        if ( v6 >= 0 )
        {
          v7 = (**v5)(v5, &GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61, a2);
          v6 = 0;
          if ( v7 < 0 )
            v6 = v7;
        }
      }
      else
      {
        v9 = 0LL;
        v6 = -2147024882;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>(&v9);
  return (unsigned int)v6;
}
