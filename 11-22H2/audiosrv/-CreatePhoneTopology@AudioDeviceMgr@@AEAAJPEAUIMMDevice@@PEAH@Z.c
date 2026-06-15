/*
 * XREFs of ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x180026C44
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180026AD0 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x180026560 (-CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x1800437B8 (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::CreatePhoneTopology(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        struct IEndpointCollection *a3)
{
  unsigned int v5; // edi
  BOOL v6; // esi
  struct IUnknown *v7; // rbx
  struct IUnknown *v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v9 = 0LL;
  v6 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      PhoneTopology::CreateInstance(a2, (struct IEndpointCollection *)a2, a3, (struct IPhoneTopology **)&v9);
      v7 = v9;
      if ( v9 )
      {
        v6 = *((_QWORD *)this + 9) == 0LL;
        ATL::CComPtrBase<IPhoneTopology>::Release((char *)this + 72);
        if ( *((struct IUnknown **)this + 9) != v7 )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 9, v7);
      }
      *(_DWORD *)a3 = v6;
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return v5;
}
