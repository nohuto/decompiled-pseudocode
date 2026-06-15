/*
 * XREFs of ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x1800437B8
 * Callers:
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180003FF0 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180005DD0 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x180007AF0 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x180026C44 (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18004371C (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComPtrBase<IPhoneTopology>::Release(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
