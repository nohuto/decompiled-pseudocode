/*
 * XREFs of ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E9C54
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C910 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E90CC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800E990C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800E9ADC (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E9F24 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800EA14C (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800EACDC (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800EADF8 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDeviceWatcher::StartDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  char *v4; // r14
  char *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // eax
  const char *v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  PnpDevice *v17; // rbx
  int InterfacePath; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rax
  RefCountedObject *v27; // rcx
  PnpDeviceWatcher **v28; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+70h] [rbp+18h] BYREF
  const char *v32; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 116LL) == 2 )
    return 0LL;
  if ( !*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
  {
    v4 = (char *)this + 56;
    for ( i = (char *)*((_QWORD *)this + 7); i != v4; i = *(char **)i )
    {
      if ( i != (char *)a2 )
      {
        v6 = *((_QWORD *)a2 + 2);
        v7 = *((_QWORD *)i + 2);
        if ( *(_DWORD *)(v6 + 116) != 1 )
        {
          v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp";
          v11 = 852LL;
          goto LABEL_15;
        }
        if ( *(_DWORD *)(v7 + 104) == *(_DWORD *)(v6 + 104) )
        {
          v8 = *(_QWORD *)(v6 + 16);
          if ( v8 )
            v9 = *(_DWORD *)(v8 + 100);
          else
            v9 = *(_DWORD *)(v6 + 100);
          if ( *(_DWORD *)(v7 + 100) < v9 )
            Microsoft::WRL::ComPtr<PnpDevice>::operator=(v6 + 16);
        }
      }
    }
  }
  v14 = *((_QWORD *)a2 + 2);
  v15 = *(_DWORD *)(v14 + 116);
  if ( !v15 )
    goto LABEL_21;
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
LABEL_21:
      v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
      v11 = 457LL;
LABEL_15:
      v12 = -2147418113;
      goto LABEL_16;
    }
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(v14 + 116), 2);
  }
  if ( *((_BYTE *)a2 + 24) || !*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) )
    return 0LL;
  *((_BYTE *)a2 + 24) = 1;
  if ( (!IsEdition(6176LL) || *(_DWORD *)(*((_QWORD *)a2 + 2) + 112LL) != 65548)
    && PnpDevice::OpenInterface(*((PnpDevice **)a2 + 2)) == -2147024864 )
  {
    v17 = (PnpDevice *)*((_QWORD *)a2 + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v17, &string);
    v12 = InterfacePath;
    if ( InterfacePath >= 0 )
    {
      if ( (unsigned int)dword_180266498 > 5 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v32 = "Failed to exclusively open LampArray device, adding to retry list";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v21,
          byte_180224374,
          v22,
          v23,
          (const unsigned __int16 **)&v32,
          &StringRawBuffer);
      }
      v24 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v25 = v24;
      if ( v24 )
      {
        *v24 = 0LL;
        v24[1] = 0LL;
        v24[3] = 0LL;
        v24[2] = 0LL;
        v26 = *((_QWORD *)a2 + 2);
        if ( v25[2] != v26 )
        {
          if ( v26 )
            _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
          v27 = (RefCountedObject *)v25[2];
          v25[2] = v26;
          if ( v27 )
            RefCountedObject::Release(v27);
        }
        *((_WORD *)v25 + 14) = 3000;
        *((_DWORD *)v25 + 6) = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 104)) + 100;
        v28 = (PnpDeviceWatcher **)*((_QWORD *)this + 11);
        if ( *v28 != (PnpDeviceWatcher *)((char *)this + 80) )
          __fastfail(3u);
        *v25 = (char *)this + 80;
        v25[1] = v28;
        *v28 = (PnpDeviceWatcher *)v25;
        *((_QWORD *)this + 11) = v25;
        ++*((_QWORD *)this + 12);
        v12 = 0;
        goto LABEL_43;
      }
      v12 = -2147024882;
      v19 = 2147942414LL;
      v20 = 478LL;
    }
    else
    {
      v19 = (unsigned int)InterfacePath;
      v20 = 473LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
      (const char *)v19);
LABEL_43:
    WindowsDeleteString(string);
    return v12;
  }
  v12 = LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)this, *((struct PnpDevice **)a2 + 2));
  if ( (v12 & 0x80000000) != 0 )
  {
    v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
    v11 = 492LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v11, (__int64)v10, (const char *)v12);
    return v12;
  }
  if ( v12 != 1 )
    return 0LL;
  PnpDeviceWatcher::StopDeviceObject(this, a2);
  return 1LL;
}
