/*
 * XREFs of ?_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUIDCompositionInteractionConfigurationPartner@@W4Enum@InteractionProperty@@@Z @ 0x180024118
 * Callers:
 *     ?RemoveSupportedInteraction@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18008D340 (-RemoveSupportedInteraction@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteracti.c)
 *     ?AddSupportedInteraction@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18008D360 (-AddSupportedInteraction@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionC.c)
 *     ?ProhibitDescendantConfiguration@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18008D8E0 (-ProhibitDescendantConfiguration@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInte.c)
 *     ?AllowDescendantConfiguration@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z @ 0x18008D900 (-AllowDescendantConfiguration@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInterac.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?AllocateConfigurationChange@CInteractionConfiguration@DirectComposition@@SAJAEBUInteractionConfigurationInternal@@PEAPEAXPEA_K@Z @ 0x18002405C (-AllocateConfigurationChange@CInteractionConfiguration@DirectComposition@@SAJAEBUInteractionConf.c)
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ @ 0x1800356CC (-CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z @ 0x1800F1CD8 (-FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z.c)
 *     McTemplateU0qqxq_EventWriteTransfer @ 0x1800F9070 (McTemplateU0qqxq_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CInteractionProxy::_ProcessSupportedInteractionConfigurationChange(
        unsigned __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  int v5; // esi
  struct DirectComposition::CProxyTable *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rdx
  void *v15; // rcx
  bool v16; // zf
  HANDLE ProcessHeap; // rax
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  struct DirectComposition::CDevice *v22; // [rsp+38h] [rbp-18h] BYREF
  __int128 v23; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+40h] BYREF
  LPVOID lpMem; // [rsp+98h] [rbp+48h] BYREF

  v21 = 0LL;
  v5 = (**a2)(a2, &GUID_2960abbb_1aca_4216_90f1_9065cbe982ef, &v21);
  v23 = 0LL;
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 24LL))(v21, &v23);
  if ( a3 == 1 && (_DWORD)v23 == 4 && DWORD1(v23) )
    SetProcessMousewheelRoutingMode(2LL);
  lpMem = 0LL;
  v24 = 0LL;
  if ( v5 >= 0 )
  {
    v5 = DirectComposition::CInteractionConfiguration::AllocateConfigurationChange(
           (const struct InteractionConfigurationInternal *)&v23,
           &lpMem,
           &v24);
    if ( v5 >= 0 )
    {
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
      {
        v20 = (a1 + 8) & ((unsigned __int128)-(__int128)a1 >> 64);
        DirectComposition::CDevice::GetDeviceAndHandleWorker((v20 - 8) & -(__int64)(v20 != 0), &v22, &v25);
        if ( v22 )
        {
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
            McTemplateU0qqxq_EventWriteTransfer(v25, (_DWORD)v22, *((_DWORD *)v22 + 40), v25, v25, a3);
        }
      }
      v6 = DirectComposition::CProxyTable::FromProxy((void *)(a1 & -(__int64)(a1 != -8LL)));
      if ( v6 )
      {
        v8 = *(_QWORD *)v6;
        v9 = *(_DWORD *)(v7 + 12);
      }
      else
      {
        v8 = 0LL;
        v9 = 0;
      }
      v10 = (_QWORD *)(v8 + 96);
      v11 = *(_QWORD *)(v8 + 96);
      if ( v11 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) )
          *(_BYTE *)(v8 + 148) = 1;
        ++*(_DWORD *)(v8 + 144);
      }
      else
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 104));
      }
      DirectComposition::CDevice::ResourceSetBufferProperty((DirectComposition::CDevice *)v8, v9, a3, lpMem, v24);
      if ( *v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 24LL))(*v10);
      v12 = *(_QWORD *)(v8 + 160);
      v13 = *(_DWORD *)(v8 + 176);
      LODWORD(v24) = 0;
      v14 = (unsigned int)(v13 - *(_DWORD *)(v8 + 180));
      LOBYTE(v25) = 0;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, unsigned int *))(*(_QWORD *)v12 + 16LL))(
             v12,
             v14,
             &v24,
             &v25);
      if ( (_DWORD)v24 != *(_DWORD *)(v8 + 184) )
      {
        DirectComposition::CDevice::FailFastForKernelBatchFailure((DirectComposition::CDevice *)v8, v24);
        __debugbreak();
      }
      v15 = *(void **)(v8 + 192);
      if ( v15 )
      {
        operator delete(v15);
        *(_QWORD *)(v8 + 192) = 0LL;
      }
      *(_DWORD *)(v8 + 184) = 0;
      v16 = (_BYTE)v25 == 0;
      *(_DWORD *)(v8 + 180) = *(_DWORD *)(v8 + 176);
      if ( !v16 )
        DirectComposition::CDevice::CheckForDelayedDestructionObjects((DirectComposition::CDevice *)v8);
      DirectComposition::CDeviceLock::Leave((DirectComposition::CDeviceLock *)(v8 + 96));
    }
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v5;
}
