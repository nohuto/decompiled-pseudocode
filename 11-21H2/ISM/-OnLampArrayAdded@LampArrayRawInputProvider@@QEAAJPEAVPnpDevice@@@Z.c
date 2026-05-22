/*
 * XREFs of ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800CF984
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18003D980 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800D0314 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800CF82C (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800CFDE4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800D0DF0 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800D1D1C (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800D1EA0 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::OnLampArrayAdded(LampArrayRawInputProvider *this, struct PnpDevice *a2)
{
  unsigned int v4; // ebp
  LampArrayDevice **v5; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v6; // rdi
  LampArrayDevice **v7; // r15
  LampArrayRawInputProvider **v8; // rcx
  __int64 *i; // rbx
  int active; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 1;
  if ( *((_DWORD *)a2 + 28) == 65625 )
  {
    v5 = (LampArrayDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v7 = v5 + 2;
      v5[1] = 0LL;
      v5[2] = 0LL;
      if ( LampArrayDevice::CreateAndInitialize(a2, v5 + 2) < 0 )
      {
LABEL_12:
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v6);
        return v4;
      }
      v8 = (LampArrayRawInputProvider **)*((_QWORD *)this + 7);
      if ( *v8 != (LampArrayRawInputProvider *)((char *)this + 48) )
        __fastfail(3u);
      *(_QWORD *)v6 = (char *)this + 48;
      *((_QWORD *)v6 + 1) = v8;
      *v8 = v6;
      ++*((_QWORD *)this + 8);
      *((_QWORD *)this + 7) = v6;
      for ( i = (__int64 *)*((_QWORD *)this + 9); i != (__int64 *)((char *)this + 72); i = (__int64 *)*i )
      {
        LampArrayDevice::AddViewClient(*v7, (struct LampArrayEndpoint *)(i + 2));
        if ( *((_DWORD *)i + 6) == *((_DWORD *)this + 10) )
        {
          active = LampArrayRawInputProvider::SetActiveViewClient(this, *v7, (struct LampArrayEndpoint *)(i + 2));
          v4 = active;
          if ( active < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x90,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
              (const char *)(unsigned int)active);
            goto LABEL_12;
          }
        }
      }
      return 0LL;
    }
    v12 = -2147024882;
    v13 = 130LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)v12);
    return v12;
  }
  if ( IsEdition(6176LL) )
  {
    v14 = ConsumerControlManager::QueueAddRemoveDevice(*((ConsumerControlManager **)this + 31), a2, 1);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v14);
      v13 = 161LL;
      goto LABEL_14;
    }
  }
  return 0LL;
}
