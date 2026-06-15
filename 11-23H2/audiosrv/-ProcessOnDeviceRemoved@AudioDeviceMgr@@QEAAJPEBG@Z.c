/*
 * XREFs of ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x180007AF0
 * Callers:
 *     ?Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x180006560 (-Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 *     ?Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x180007A10 (-Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z @ 0x180026C00 (-CopyTo@-$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?Release@?$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ @ 0x1800437B8 (-Release@-$CComPtrBase@UIPhoneTopology@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceRemoved(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // r15d
  HANDLE OwningThread; // rbx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // eax
  ULONG_PTR SpinCount; // rcx
  ULONG_PTR v17; // rcx
  int v18; // eax
  HANDLE v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+28h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  char v24; // [rsp+50h] [rbp-10h]
  int v25; // [rsp+A0h] [rbp+40h]
  int v26; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0;
  v20 = 0LL;
  v5 = 0LL;
  v23[0] = 0LL;
  v26 = 0;
  v6 = this + 2;
  v23[1] = this + 2;
  EnterCriticalSection(this + 2);
  v24 = 1;
  v7 = 0;
  v22 = 0LL;
  OwningThread = 0LL;
  v19 = 0LL;
  if ( a2 )
  {
    v9 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, const unsigned __int16 *, __int64 *))(*(_QWORD *)this[1].DebugInfo + 40LL))(
           this[1].DebugInfo,
           a2,
           &v22);
    if ( v9 < 0 )
    {
      v7 = v9;
    }
    else
    {
      v25 = 0;
      v10 = 0LL;
      v21 = 0LL;
      if ( v22 )
      {
        v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
                v22,
                &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                &v21);
        v10 = v21;
        if ( v11 < 0 )
        {
          v25 = v11;
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v27);
          if ( v12 < 0 )
            v25 = v12;
          v10 = v21;
        }
      }
      else
      {
        v25 = -2147024809;
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v25 < 0 )
      {
        v7 = v25;
      }
      else if ( v27 > 1 )
      {
        v7 = -2147024809;
      }
      else
      {
        v19 = 0LL;
        if ( v27 )
        {
          ATL::CComPtrBase<IEndpointCollection>::CopyTo(&this[1].LockSemaphore, &v19);
          OwningThread = v19;
        }
        else
        {
          OwningThread = this[1].OwningThread;
          v19 = OwningThread;
          if ( OwningThread )
            (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 8LL))(OwningThread);
        }
        v13 = (*(__int64 (__fastcall **)(HANDLE, const unsigned __int16 *, __int64 *))(*(_QWORD *)OwningThread + 48LL))(
                OwningThread,
                a2,
                &v20);
        if ( v13 >= 0 )
        {
          ATL::CComPtrBase<IEndpointCollection>::CopyTo(&v19, v23);
          v5 = v23[0];
        }
        else
        {
          v7 = v13;
        }
      }
    }
  }
  else
  {
    v7 = -2147024809;
  }
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v7 < 0 )
  {
    v4 = v7;
    LeaveCriticalSection(v6);
    goto LABEL_23;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, v20);
  if ( v15 < 0 )
  {
    v4 = v15;
    LeaveCriticalSection(v6);
    goto LABEL_23;
  }
  LeaveCriticalSection(v6);
  SpinCount = this[1].SpinCount;
  if ( SpinCount )
  {
    v18 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(*(_QWORD *)SpinCount + 128LL))(SpinCount, v20, &v26);
    if ( v18 < 0 )
    {
      v4 = v18;
      goto LABEL_23;
    }
    if ( v26 )
      ATL::CComPtrBase<IPhoneTopology>::Release(&this[1].SpinCount);
  }
  v17 = this->SpinCount;
  if ( v17 )
    (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)v17 + 32LL))(v17, v20);
LABEL_23:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v4;
}
