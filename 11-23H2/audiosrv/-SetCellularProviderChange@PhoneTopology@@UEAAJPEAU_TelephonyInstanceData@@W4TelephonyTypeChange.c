/*
 * XREFs of ?SetCellularProviderChange@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180165AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180163DA4 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology::SetCellularProviderChange(PhoneTopology *a1, _QWORD *a2, int a3)
{
  int v6; // ebx
  char *v7; // rax
  struct PhoneTopologyWorkItem *v8; // rbx
  int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PhoneTopology *, _QWORD *, int *))(*(_QWORD *)a1 + 96LL))(a1, a2, &v11);
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      v7 = (char *)operator new(0x438uLL);
      v8 = (struct PhoneTopologyWorkItem *)v7;
      if ( v7 )
      {
        *(_QWORD *)v7 = &PhoneTopologyWorkItem::`vftable';
        *((_QWORD *)v7 + 1) = *a2;
        *((_DWORD *)v7 + 4) = 1;
        *((_DWORD *)v7 + 5) = a3;
        *((_DWORD *)v7 + 268) = 1;
        memset_0(v7 + 24, 0, 0x418uLL);
        *(_QWORD *)v8 = &CallProviderChangeWorkItem::`vftable';
        v9 = PhoneTopology::AddWorkItemToQueue(a1, v8);
        v6 = 0;
        if ( v9 < 0 )
          v6 = v9;
      }
      else
      {
        v6 = -2147024882;
      }
    }
    else
    {
      v6 = -2147024809;
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
  return (unsigned int)v6;
}
