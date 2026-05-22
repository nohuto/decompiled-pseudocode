/*
 * XREFs of ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800D0314
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18003D980 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800CF984 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800CFEC4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800D019C (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800D05E0 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800D080C (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800D1374 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800D148C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDeviceWatcher::StartDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  __int64 v4; // rdx
  char *v5; // r15
  char *i; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // eax
  const char *v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ebx
  PnpDevice *v15; // rbx
  int InterfacePath; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  RefCountedObject *v24; // rcx
  volatile signed __int32 *v25; // rax
  PnpDeviceWatcher **v26; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int16 *StringRawBuffer; // [rsp+70h] [rbp+18h] BYREF
  const char *v30; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 116LL) == 2 )
    return 0LL;
  v4 = *((_QWORD *)a2 + 2);
  if ( !*(_QWORD *)(v4 + 16) )
  {
    v5 = (char *)this + 56;
    for ( i = (char *)*((_QWORD *)this + 7); i != v5; i = *(char **)i )
    {
      if ( i != (char *)a2 )
      {
        v7 = *((_QWORD *)a2 + 2);
        v8 = *((_QWORD *)i + 2);
        if ( *(_DWORD *)(v7 + 116) != 1 )
        {
          v11 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp";
          v12 = 852LL;
          goto LABEL_15;
        }
        if ( *(_DWORD *)(v8 + 104) == *(_DWORD *)(v7 + 104) )
        {
          v9 = *(_QWORD *)(v7 + 16);
          if ( v9 )
            v10 = *(_DWORD *)(v9 + 100);
          else
            v10 = *(_DWORD *)(v7 + 100);
          if ( *(_DWORD *)(v8 + 100) < v10 )
            Microsoft::WRL::ComPtr<PnpDevice>::operator=(v7 + 16);
        }
      }
    }
    v4 = *((_QWORD *)a2 + 2);
  }
  if ( *(_DWORD *)(v4 + 116) == 1 )
  {
    _InterlockedExchange((volatile __int32 *)(v4 + 116), 2);
  }
  else if ( *(_DWORD *)(v4 + 116) != 2 )
  {
    v11 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
    v12 = 457LL;
LABEL_15:
    v13 = -2147418113;
    goto LABEL_16;
  }
  if ( *((_BYTE *)a2 + 24) || !*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) )
    return 0LL;
  *((_BYTE *)a2 + 24) = 1;
  if ( (!IsEdition(6176LL) || *(_DWORD *)(*((_QWORD *)a2 + 2) + 112LL) != 65548)
    && PnpDevice::OpenInterface(*((PnpDevice **)a2 + 2)) == -2147024864 )
  {
    v15 = (PnpDevice *)*((_QWORD *)a2 + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v15, &string);
    v13 = InterfacePath;
    if ( InterfacePath >= 0 )
    {
      if ( (unsigned int)dword_180240410 > 5 )
      {
        StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, 0LL);
        v30 = "Failed to exclusively open LampArray device, adding to retry list";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v19,
          byte_180202991,
          v20,
          v21,
          (const unsigned __int16 **)&v30,
          &StringRawBuffer);
      }
      v22 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v23 = v22;
      if ( v22 )
      {
        *v22 = 0LL;
        v22[1] = 0LL;
        v22[3] = 0LL;
        v22[2] = 0LL;
        v24 = (RefCountedObject *)v22[2];
        v25 = (volatile signed __int32 *)*((_QWORD *)a2 + 2);
        if ( v24 != (RefCountedObject *)v25 )
        {
          if ( v25 )
          {
            _InterlockedAdd(v25 + 2, 1u);
            v24 = (RefCountedObject *)v23[2];
          }
          v23[2] = v25;
          if ( v24 )
            RefCountedObject::Release(v24);
        }
        *((_WORD *)v23 + 14) = 3000;
        *((_DWORD *)v23 + 6) = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 104)) + 100;
        v26 = (PnpDeviceWatcher **)*((_QWORD *)this + 11);
        if ( *v26 != (PnpDeviceWatcher *)((char *)this + 80) )
          __fastfail(3u);
        *v23 = (char *)this + 80;
        v23[1] = v26;
        *v26 = (PnpDeviceWatcher *)v23;
        *((_QWORD *)this + 11) = v23;
        ++*((_QWORD *)this + 12);
        v13 = 0;
        goto LABEL_43;
      }
      v13 = -2147024882;
      v17 = 2147942414LL;
      v18 = 478LL;
    }
    else
    {
      v17 = (unsigned int)InterfacePath;
      v18 = 473LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
      (const char *)v17);
LABEL_43:
    WindowsDeleteString(string);
    return v13;
  }
  v13 = LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)this, *((struct PnpDevice **)a2 + 2));
  if ( (v13 & 0x80000000) != 0 )
  {
    v11 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
    v12 = 492LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v12, (int)v11, (const char *)v13);
    return v13;
  }
  if ( v13 != 1 )
    return 0LL;
  PnpDeviceWatcher::StopDeviceObject(this, a2);
  return 1LL;
}
