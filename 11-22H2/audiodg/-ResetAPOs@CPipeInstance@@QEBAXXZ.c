/*
 * XREFs of ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140012494
 * Callers:
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x140009B50 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140060370 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::ResetAPOs(CPipeInstance *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 3);
  while ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_DWORD *)(v2 + 40) == 2 )
    {
      v4 = 0LL;
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(*(_QWORD *)(v2 + 32) + 40LL, &v4) >= 0 )
      {
        v3 = 0LL;
        if ( (**v4)(v4, &GUID_0ef25615_b134_4fba_80e3_e3ea2f74206e, &v3) >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v3);
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v4);
    }
  }
}
