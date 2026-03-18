/*
 * XREFs of ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C001D810
 * Callers:
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C001C4BC (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqqDd @ 0x1C001E190 (WPP_IFR_SF_qqqDd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::_AdapterControl(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        void *MapRegisterBase,
        void *Context)
{
  _FX_DRIVER_GLOBALS *v4; // rsi
  unsigned int v7; // ebp
  const void *_a1; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  void (__fastcall *v10)(unsigned __int64, _QWORD); // r8
  int id; // edi
  const void *level; // rax
  unsigned int flags; // edx
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
  v7 = (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)Context + 136LL))(Context, Irp);
  if ( !*((_BYTE *)Context + 272) )
  {
    *((_QWORD *)Context + 33) = MapRegisterBase;
    *((_BYTE *)Context + 272) = 1;
  }
  if ( v4->FxVerifierOn && v4->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)Context);
    WPP_IFR_SF_qq(v4, 5u, 0xFu, 0x18u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1, MapRegisterBase);
  }
  if ( *((_DWORD *)Context + 30) == 2 )
  {
    *((_QWORD *)Context + 19) = 0LL;
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)Context);
    if ( v10 )
      v10(ObjectHandleUnchecked, *((_QWORD *)Context + 20));
  }
  else
  {
    id = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)Context + 80LL))(Context);
    if ( id < 0 )
    {
      if ( v4->FxVerifierOn && v4->FxVerboseOn )
      {
        level = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)Context);
        WPP_IFR_SF_qqqDd(
          v4,
          flags,
          v14,
          v15,
          traceGuid,
          *((const void **)Context + 41),
          *((const void **)Context + 42),
          level,
          flags,
          id);
      }
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Context + 168LL))(
        Context,
        3 - (unsigned int)(id != -1073741536));
    }
  }
  return v7;
}
