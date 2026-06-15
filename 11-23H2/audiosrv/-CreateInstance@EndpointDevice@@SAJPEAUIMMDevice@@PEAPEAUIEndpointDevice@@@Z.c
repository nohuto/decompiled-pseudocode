/*
 * XREFs of ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180026654
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180026AD0 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x180026530 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x180026E08 (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EndpointDevice::CreateInstance(struct IMMDevice *a1, struct IEndpointDevice **a2)
{
  HANDLE ProcessHeap; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IEndpointDevice **); // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, struct IEndpointDevice **); // rbx
  int v7; // edi
  int v8; // eax
  LPVOID v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      ProcessHeap = GetProcessHeap();
      v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IEndpointDevice **))HeapAlloc(ProcessHeap, 0, 0xB8uLL);
      v6 = v5;
      v10 = v5;
      if ( v5 )
      {
        *((_DWORD *)v5 + 4) = 1;
        *v5 = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))&EndpointDevice::`vftable'{for `IEndpointDevice'};
        v5[1] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))&EndpointDevice::`vftable'{for `CUnknown'};
        v5[3] = 0LL;
        v5[4] = 0LL;
        v5[6] = 0LL;
        v5[7] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))7;
        *((_WORD *)v5 + 16) = 0;
        v5[8] = 0LL;
        v5[10] = 0LL;
        v5[11] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))7;
        *((_WORD *)v5 + 32) = 0;
        *((_DWORD *)v5 + 28) = 0;
        v5[15] = 0LL;
        v5[17] = 0LL;
        v5[18] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))7;
        *((_WORD *)v5 + 60) = 0;
        v5[19] = 0LL;
        v5[21] = 0LL;
        v5[22] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IEndpointDevice **))7;
        *((_WORD *)v5 + 76) = 0;
        v10 = v5;
        v7 = EndpointDevice::Initialize((EndpointDevice *)v5, a1);
        if ( v7 >= 0 )
        {
          v8 = (**v6)(v6, &GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61, a2);
          v7 = 0;
          if ( v8 < 0 )
            v7 = v8;
        }
      }
      else
      {
        v10 = 0LL;
        v7 = -2147024882;
      }
    }
    else
    {
      v7 = -2147467261;
    }
  }
  else
  {
    v7 = -2147024809;
  }
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>((__int64 *)&v10);
  return (unsigned int)v7;
}
