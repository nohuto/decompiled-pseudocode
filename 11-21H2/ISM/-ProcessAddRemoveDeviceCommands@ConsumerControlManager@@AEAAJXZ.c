/*
 * XREFs of ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800D0B80
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800D0F9C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800CF82C (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800D0848 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?ContainsDevice@ConsumerControlNexusDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800D372C (-ContainsDevice@ConsumerControlNexusDevice@@QEAA_NPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800D46A0 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ?ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800D48D0 (-ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800D498C (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall ConsumerControlManager::ProcessAddRemoveDeviceCommands(ConsumerControlManager *this)
{
  struct PnpDevice **v2; // rax
  struct PnpDevice **v3; // rdi
  struct PnpDevice *v4; // rcx
  int v5; // ecx
  __int64 *i; // rbx
  bool v7; // al
  __int64 *v8; // rcx
  __int64 **v9; // rax
  ConsumerControlNexusDevice *j; // rbx
  bool v11; // al
  ConsumerControlNexusDevice *v12; // rcx
  void **v13; // rax
  struct ConsumerControlNexusDevice **v14; // rax
  ConsumerControlManager **v15; // rcx
  struct ConsumerControlGenericDevice **v16; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v17; // r14
  ConsumerControlManager **v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  while ( *((_QWORD *)this + 10) )
  {
    v2 = (struct PnpDevice **)((char *)this + 64);
    v3 = (struct PnpDevice **)*((_QWORD *)this + 8);
    if ( v3[1] != (ConsumerControlManager *)((char *)this + 64) )
      goto LABEL_37;
    v4 = *v3;
    if ( *((struct PnpDevice ***)*v3 + 1) != v3 )
      goto LABEL_37;
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
        goto LABEL_33;
      for ( i = (__int64 *)*((_QWORD *)this + 2); ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)((char *)this + 16) )
          goto LABEL_16;
        v7 = ConsumerControlGenericDevice::ContainsDevice((ConsumerControlGenericDevice *)i[2], v3[4]);
        v8 = (__int64 *)*i;
        if ( v7 )
          break;
      }
      if ( (__int64 *)v8[1] != i )
        goto LABEL_37;
      v9 = (__int64 **)i[1];
      if ( *v9 != i )
        goto LABEL_37;
      *v9 = v8;
      v8[1] = (__int64)v9;
      --*((_QWORD *)this + 4);
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)i);
LABEL_16:
      for ( j = (ConsumerControlNexusDevice *)*((_QWORD *)this + 5); ; j = *(ConsumerControlNexusDevice **)j )
      {
        if ( j == (ConsumerControlManager *)((char *)this + 40) )
          goto LABEL_33;
        v11 = ConsumerControlNexusDevice::ContainsDevice(*((ConsumerControlNexusDevice **)j + 2), v3[4]);
        v12 = *(ConsumerControlNexusDevice **)j;
        if ( v11 )
          break;
      }
      if ( *((ConsumerControlNexusDevice **)v12 + 1) != j || (v13 = (void **)*((_QWORD *)j + 1), *v13 != j) )
LABEL_37:
        __fastfail(3u);
      *v13 = v12;
      *((_QWORD *)v12 + 1) = v13;
      --*((_QWORD *)this + 7);
      goto LABEL_32;
    }
    v14 = (struct ConsumerControlNexusDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    j = (ConsumerControlNexusDevice *)v14;
    if ( !v14 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_36;
    }
    *v14 = 0LL;
    v14[1] = 0LL;
    v14[2] = 0LL;
    if ( (int)ConsumerControlNexusDevice::TryCreateAndInitialize(
                v3[4],
                *((struct IRawInputClient **)this + 14),
                *((struct IMessageSession **)this + 15),
                *((struct IRawInputProvider **)this + 16),
                v14 + 2) < 0 )
    {
      v16 = (struct ConsumerControlGenericDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v16;
      if ( !v16 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
          (const char *)0x8007000ELL);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(j);
LABEL_36:
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v3);
        return 2147942414LL;
      }
      *v16 = 0LL;
      v16[1] = 0LL;
      v16[2] = 0LL;
      if ( ConsumerControlGenericDevice::CreateAndInitialize(v3[4], v16 + 2) < 0 )
      {
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v17);
      }
      else
      {
        v18 = (ConsumerControlManager **)*((_QWORD *)this + 3);
        if ( *v18 != (ConsumerControlManager *)((char *)this + 16) )
          goto LABEL_37;
        *(_QWORD *)v17 = (char *)this + 16;
        *((_QWORD *)v17 + 1) = v18;
        *v18 = v17;
        ++*((_QWORD *)this + 4);
        *((_QWORD *)this + 3) = v17;
      }
LABEL_32:
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(j);
      goto LABEL_33;
    }
    v15 = (ConsumerControlManager **)*((_QWORD *)this + 6);
    if ( *v15 != (ConsumerControlManager *)((char *)this + 40) )
      goto LABEL_37;
    *(_QWORD *)j = (char *)this + 40;
    *((_QWORD *)j + 1) = v15;
    *v15 = j;
    ++*((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = j;
LABEL_33:
    ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v3);
  }
  return 0LL;
}
