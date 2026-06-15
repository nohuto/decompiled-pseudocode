/*
 * XREFs of ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x18005AC68
 * Callers:
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18005AB54 (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x180026530 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x18005AD80 (--0EndpointCollection@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EndpointCollection::CreateInstance(struct IEndpointCollection **a1)
{
  unsigned int v2; // ebx
  EndpointCollection *v3; // rax
  EndpointCollection *v4; // rcx
  int v5; // eax
  EndpointCollection *v7; // [rsp+30h] [rbp+8h] BYREF
  EndpointCollection *v8; // [rsp+38h] [rbp+10h]

  v2 = 0;
  v7 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v3 = (EndpointCollection *)operator new(0x70uLL);
    v8 = v3;
    if ( v3 )
      v4 = EndpointCollection::EndpointCollection(v3);
    else
      v4 = 0LL;
    v7 = v4;
    if ( v4 )
    {
      v5 = (**(__int64 (__fastcall ***)(EndpointCollection *, GUID *, struct IEndpointCollection **))v4)(
             v4,
             &GUID_6f89337f_65d4_41b5_8fd9_83b0aa4f1a32,
             a1);
      if ( v5 < 0 )
        v2 = v5;
    }
    else
    {
      v2 = -2147024882;
    }
  }
  else
  {
    v2 = -2147467261;
  }
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>((__int64 *)&v7);
  return v2;
}
