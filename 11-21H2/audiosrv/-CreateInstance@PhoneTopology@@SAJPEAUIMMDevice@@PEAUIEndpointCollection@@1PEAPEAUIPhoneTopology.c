/*
 * XREFs of ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x18004C380
 * Callers:
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x18004C160 (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x18004C2F0 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     ??0PhoneTopology@@IEAA@XZ @ 0x18004C51C (--0PhoneTopology@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::CreateInstance(
        struct IMMDevice *a1,
        struct IEndpointCollection *a2,
        struct IEndpointCollection *a3,
        struct IPhoneTopology **a4)
{
  unsigned int v6; // ebx
  PhoneTopology *v7; // rax
  struct IPhoneTopology *v8; // rdi
  int v9; // eax
  struct IPhoneTopology *v11; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v11 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v7 = (PhoneTopology *)operator new(0x518uLL);
    if ( v7 )
      v8 = PhoneTopology::PhoneTopology(v7);
    else
      v8 = 0LL;
    v11 = v8;
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IPhoneTopology *, struct IMMDevice *))(*(_QWORD *)v8 + 160LL))(v8, a1);
      if ( v9 >= 0 )
      {
        v11 = 0LL;
        *a4 = v8;
      }
      else
      {
        v6 = v9;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>((__int64 *)&v11);
  return v6;
}
