/*
 * XREFs of ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000ABB0
 * Callers:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000AA20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x14005D7D4 (-RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140007828 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CConnectionInstance::RemoveRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h]

  v13 = 0LL;
  v12 = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 40);
    if ( v7 == 2 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
      v13 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(
        a2,
        a3,
        v8,
        *((_QWORD *)this + 1));
      if ( v8 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    else if ( ((v7 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v6 + 32))(
             **(_QWORD **)(v6 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v12) < 0 )
        goto LABEL_13;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a3, v12);
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v12);
    }
  }
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 40);
    if ( v10 == 2 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
      v13 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(
        a2,
        a3,
        v11,
        *((_QWORD *)this + 1));
      if ( v11 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    else if ( ((v10 - 1) & 0xFFFFFFFD) == 0
           && (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v9 + 32))(
                **(_QWORD **)(v9 + 32),
                &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                &v12) >= 0 )
    {
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 120LL))(a2, a3, v12);
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v12);
    }
  }
LABEL_13:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
}
