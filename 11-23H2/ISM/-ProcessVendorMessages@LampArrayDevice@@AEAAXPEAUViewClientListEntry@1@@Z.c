/*
 * XREFs of ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x1800EC6AC
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800EC8E8 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800F1E94 (-ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z.c)
 *     ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800F2540 (-SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z.c)
 */

void __fastcall LampArrayDevice::ProcessVendorMessages(
        HidLampArrayDevice **this,
        struct LampArrayDevice::ViewClientListEntry *a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // eax

  if ( a2 && *(_DWORD *)(*((_QWORD *)a2 + 4) + 4108LL) == 1 )
  {
    v4 = *((_QWORD *)a2 + 4);
    if ( *(_DWORD *)(v4 + 4104) == 1 )
    {
      v6 = HidLampArrayDevice::SendVendorReport(
             this[3],
             *(_BYTE *)(v4 + 4112),
             *(_BYTE *)(v4 + 4113),
             (const unsigned __int8 *)(v4 + 4114));
    }
    else
    {
      if ( *(_DWORD *)(v4 + 4104) != 2 )
      {
        v5 = -2147418113;
LABEL_9:
        *(_DWORD *)(*((_QWORD *)a2 + 4) + 4180LL) = v5;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4108LL), 2);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 56LL))(*((_QWORD *)a2 + 2));
        return;
      }
      v6 = HidLampArrayDevice::ReceiveVendorReport(
             this[3],
             *(_BYTE *)(v4 + 4112),
             (unsigned __int8 *)(v4 + 4113),
             (unsigned __int8 *)(v4 + 4114));
    }
    v5 = v6;
    goto LABEL_9;
  }
}
