/*
 * XREFs of ??$?4UIAudioProcessingObject@@@?$CComPtr@UIAudioProcessingObjectVBR@@@ATL@@QEAAPEAUIAudioProcessingObjectVBR@@AEBV?$CComPtr@UIAudioProcessingObject@@@1@@Z @ 0x140014AE4
 * Callers:
 *     ?SetConnectionFrameCount@CConnectionInstance@@QEAAJIPEAI@Z @ 0x1400116AC (-SetConnectionFrameCount@CConnectionInstance@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140014B4C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct IUnknown *__fastcall ATL::CComPtr<IAudioProcessingObjectVBR>::operator=<IAudioProcessingObject>(
        struct IUnknown **a1,
        struct IUnknown **a2)
{
  struct IUnknown *v4; // rdi
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  bool v6; // di
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  if ( v5 )
  {
    if ( !v4 )
      goto LABEL_3;
    v9 = 0LL;
    v8 = 0LL;
    (**v5)(v5, &GUID_00000000_0000_0000_c000_000000000046, &v9);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v4->lpVtbl->QueryInterface)(
      v4,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v8);
    v6 = v9 == v8;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v8);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
  }
  else
  {
    if ( v4 )
    {
LABEL_3:
      v6 = 0;
      goto LABEL_4;
    }
    v6 = 1;
  }
LABEL_4:
  if ( v6 )
    return *a1;
  else
    return ATL::AtlComQIPtrAssign(a1, *a2, &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81);
}
