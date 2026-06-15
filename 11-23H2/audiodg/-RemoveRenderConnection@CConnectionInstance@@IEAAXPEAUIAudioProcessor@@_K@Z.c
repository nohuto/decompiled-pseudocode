/*
 * XREFs of ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000D710
 * Callers:
 *     ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000D3F0 (-RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14000D878 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140015AC4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CConnectionInstance::RemoveRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // r8d
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 40);
    if ( v7 == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(*(_QWORD *)(v6 + 32) + 40LL, &v12) < 0 )
        goto LABEL_9;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(
        a2,
        a3,
        v12,
        *((_QWORD *)this + 1));
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v12);
    }
    else if ( ((v7 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v6 + 32))(
             **(_QWORD **)(v6 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v11) < 0 )
        goto LABEL_9;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a3, v11);
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v11);
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 40);
    if ( v9 == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo(*(_QWORD *)(v8 + 32) + 40LL, &v12) >= 0 )
      {
        (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(
          a2,
          a3,
          v12,
          *((_QWORD *)this + 1));
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v12);
      }
    }
    else if ( v9 <= 6 )
    {
      v10 = 74;
      if ( _bittest(&v10, v9) )
      {
        if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v8 + 32))(
               **(_QWORD **)(v8 + 32),
               &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
               &v11) >= 0 )
        {
          (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a3, v11);
          ATL::CComPtrBase<IAudioProcessingObject>::Release(&v11);
        }
      }
    }
  }
LABEL_9:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
}
