/*
 * XREFs of ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800F93D4
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800F980C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800F7E64 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800F90A0 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?ContainsDevice@ConsumerControlNexusDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800FC45C (-ContainsDevice@ConsumerControlNexusDevice@@QEAA_NPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800FD3D0 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ?ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800FD600 (-ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800FD6BC (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall ConsumerControlManager::ProcessAddRemoveDeviceCommands(ConsumerControlManager *this)
{
  struct PnpDevice **v2; // rax
  struct PnpDevice **v3; // rdi
  struct PnpDevice *v4; // rcx
  int v5; // ecx
  __int64 *v6; // rbx
  struct PnpDevice **v7; // rsi
  bool v8; // al
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 *v11; // rbx
  bool v12; // al
  __int64 *v13; // rcx
  __int64 **v14; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v15; // rcx
  struct ConsumerControlNexusDevice **v16; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v17; // rsi
  ConsumerControlManager **v18; // rcx
  struct ConsumerControlGenericDevice **v19; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v20; // rbx
  ConsumerControlManager **v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  while ( *((_QWORD *)this + 10) )
  {
    v2 = (struct PnpDevice **)((char *)this + 64);
    v3 = (struct PnpDevice **)*((_QWORD *)this + 8);
    if ( v3[1] != (ConsumerControlManager *)((char *)this + 64) )
      goto LABEL_38;
    v4 = *v3;
    if ( *((struct PnpDevice ***)*v3 + 1) != v3 )
      goto LABEL_38;
    *v2 = v4;
    *((_QWORD *)v4 + 1) = v2;
    if ( v3 == v2 )
      v3 = 0LL;
    else
      --*((_QWORD *)this + 10);
    v5 = *((_DWORD *)v3 + 4);
    if ( v5 )
    {
      if ( v5 != 1 )
        goto LABEL_34;
      v6 = (__int64 *)*((_QWORD *)this + 2);
      v7 = v3 + 4;
      while ( 1 )
      {
        if ( v6 == (__int64 *)((char *)this + 16) )
          goto LABEL_16;
        v7 = v3 + 4;
        v8 = ConsumerControlGenericDevice::ContainsDevice((ConsumerControlGenericDevice *)v6[2], v3[4]);
        v9 = (__int64 *)*v6;
        if ( v8 )
          break;
        v6 = (__int64 *)*v6;
      }
      if ( (__int64 *)v9[1] != v6 )
        goto LABEL_38;
      v10 = (__int64 **)v6[1];
      if ( *v10 != v6 )
        goto LABEL_38;
      *v10 = v9;
      v9[1] = (__int64)v10;
      --*((_QWORD *)this + 4);
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v6);
LABEL_16:
      v11 = (__int64 *)*((_QWORD *)this + 5);
      while ( 1 )
      {
        if ( v11 == (__int64 *)((char *)this + 40) )
          goto LABEL_34;
        v12 = ConsumerControlNexusDevice::ContainsDevice((ConsumerControlNexusDevice *)v11[2], *v7);
        v13 = (__int64 *)*v11;
        if ( v12 )
          break;
        v11 = (__int64 *)*v11;
        v7 = v3 + 4;
      }
      if ( (__int64 *)v13[1] != v11 || (v14 = (__int64 **)v11[1], *v14 != v11) )
LABEL_38:
        __fastfail(3u);
      *v14 = v13;
      v13[1] = (__int64)v14;
      v15 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v11;
      --*((_QWORD *)this + 7);
      goto LABEL_33;
    }
    v16 = (struct ConsumerControlNexusDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v16;
    if ( !v16 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_37;
    }
    *v16 = 0LL;
    v16[1] = 0LL;
    v16[2] = 0LL;
    if ( (int)ConsumerControlNexusDevice::TryCreateAndInitialize(
                v3[4],
                *((struct IRawInputClient **)this + 14),
                *((struct IMessageSession **)this + 15),
                *((struct IRawInputProvider **)this + 16),
                v16 + 2) < 0 )
    {
      v19 = (struct ConsumerControlGenericDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v19;
      if ( !v19 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
          (const char *)0x8007000ELL);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v17);
LABEL_37:
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v3);
        return 2147942414LL;
      }
      *v19 = 0LL;
      v19[1] = 0LL;
      v19[2] = 0LL;
      if ( ConsumerControlGenericDevice::CreateAndInitialize(v3[4], v19 + 2) < 0 )
      {
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v20);
      }
      else
      {
        v21 = (ConsumerControlManager **)*((_QWORD *)this + 3);
        if ( *v21 != (ConsumerControlManager *)((char *)this + 16) )
          goto LABEL_38;
        *(_QWORD *)v20 = (char *)this + 16;
        *((_QWORD *)v20 + 1) = v21;
        *v21 = v20;
        ++*((_QWORD *)this + 4);
        *((_QWORD *)this + 3) = v20;
      }
      v15 = v17;
LABEL_33:
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v15);
      goto LABEL_34;
    }
    v18 = (ConsumerControlManager **)*((_QWORD *)this + 6);
    if ( *v18 != (ConsumerControlManager *)((char *)this + 40) )
      goto LABEL_38;
    *(_QWORD *)v17 = (char *)this + 40;
    *((_QWORD *)v17 + 1) = v18;
    *v18 = v17;
    ++*((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = v17;
LABEL_34:
    ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v3);
  }
  return 0LL;
}
