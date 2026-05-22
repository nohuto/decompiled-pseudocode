/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18003D980
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18003D860 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18003D6C4 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18003DF70 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18003E3A0 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800CF7A4 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800CF984 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800CFEC4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1800CFFA0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800D0094 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800D019C (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800D0314 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800D05E0 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800D0678 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800D10D0 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800D1374 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800D148C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800D15E8 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(PnpDeviceWatcher *this, unsigned int *a2)
{
  HSTRING v2; // r13
  HSTRING *v3; // rdi
  char *v4; // r14
  char *v5; // rbx
  __int64 v6; // rax
  HSTRING *v7; // rsi
  int v8; // ecx
  HSTRING v9; // rbx
  HSTRING v10; // r13
  PnpDeviceWatcher::RetryDeviceListEntry *i; // rsi
  RefCountedObject *v12; // rbx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // si
  bool v17; // r15
  bool v18; // r12
  PnpDeviceWatcher::RetryDeviceListEntry *v19; // rbx
  unsigned int *v20; // r15
  HSTRING v22; // r15
  HSTRING v23; // r13
  PnpDeviceWatcher::RetryDeviceListEntry *j; // rbx
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // r15
  bool v29; // r12
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // r12
  int DeviceStringProperty; // eax
  HSTRING v34; // rdx
  int DeviceListEntryByInstanceId; // esi
  RefCountedObject *v36; // rcx
  int started; // eax
  PnpDeviceWatcher::RetryDeviceListEntry *v38; // rbx
  unsigned int v39; // edx
  PnpDeviceWatcher::RetryDeviceListEntry *v40; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v41; // rax
  RefCountedObject *v42; // rcx
  HSTRING *v43; // rax
  HSTRING *v44; // rdx
  PnpDeviceWatcher::RetryDeviceListEntry *v45; // rax
  PnpDeviceWatcher::RetryDeviceListEntry **v46; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v47; // r14
  unsigned int CurrentMilliSecTime; // eax
  unsigned int v49; // ecx
  PnpDevice *v50; // rdi
  int InterfacePath; // eax
  unsigned int v52; // edi
  int v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry *v56; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v57; // rax
  __int64 v58; // rcx
  __int16 v59; // ax
  unsigned int v60; // ecx
  unsigned __int8 *Data4; // [rsp+20h] [rbp-99h]
  HSTRING v62; // [rsp+40h] [rbp-79h] BYREF
  PnpDeviceWatcher::RetryDeviceListEntry *v63; // [rsp+48h] [rbp-71h] BYREF
  RefCountedObject *v64; // [rsp+50h] [rbp-69h] BYREF
  RefCountedObject *v65; // [rsp+58h] [rbp-61h] BYREF
  __int16 v66; // [rsp+60h] [rbp-59h]
  struct _DEVPROPKEY string; // [rsp+68h] [rbp-51h] BYREF
  PCWSTR StringRawBuffer; // [rsp+80h] [rbp-39h] BYREF
  __int64 v69; // [rsp+88h] [rbp-31h] BYREF
  __int128 v70; // [rsp+90h] [rbp-29h]
  __int128 v71; // [rsp+A0h] [rbp-19h]
  __int128 v72; // [rsp+B0h] [rbp-9h]
  __int128 v73; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *(_QWORD *)string.fmtid.Data4 = a2;
  v2 = (HSTRING)this;
  v62 = (HSTRING)this;
  *a2 = -1;
  v3 = 0LL;
  v4 = (char *)this + 32;
  while ( 1 )
  {
LABEL_2:
    v5 = *(char **)v4;
    v6 = **(_QWORD **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *(char **)(v6 + 8) != v5 )
      goto LABEL_137;
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v5 == v4 )
      v5 = 0LL;
    else
      --*((_QWORD *)v4 + 2);
    v7 = v3;
    v3 = (HSTRING *)v5;
    if ( v7 )
    {
      WindowsDeleteString(v7[4]);
      v7[4] = 0LL;
      operator delete(v7, 0x28uLL);
    }
    if ( !v5 )
      break;
    v8 = *((_DWORD *)v5 + 6);
    if ( v8 == 1 )
    {
      v9 = (HSTRING)*((_QWORD *)v5 + 4);
      v10 = v2 + 14;
      for ( i = *(PnpDeviceWatcher::RetryDeviceListEntry **)v10;
            i != (PnpDeviceWatcher::RetryDeviceListEntry *)v10;
            i = *(PnpDeviceWatcher::RetryDeviceListEntry **)i )
      {
        if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), v9) )
        {
          v63 = i;
          v2 = v62;
          if ( i )
          {
LABEL_117:
            v2 = v62;
            started = PnpDeviceWatcher::StartDeviceObject((PnpDeviceWatcher *)v62, i);
LABEL_66:
            if ( started < 0 )
            {
LABEL_80:
              if ( i )
                PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)v2, i);
            }
          }
          goto LABEL_2;
        }
      }
      v63 = 0LL;
      v65 = 0LL;
      if ( (int)PnpDevice::MakeAndInitialize(v9, &v65) >= 0 )
      {
        v12 = v65;
        v13 = *((_OWORD *)v65 + 3);
        v72 = v13;
        v14 = v13 - 0x11D074D3745A17A0LL;
        if ( (_QWORD)v13 == 0x11D074D3745A17A0LL )
          v14 = *((_QWORD *)&v72 + 1) + 0x25A8F0365FFF014ALL;
        if ( !v14 )
          goto LABEL_59;
        v73 = v13;
        v15 = v13 - 0x4647CD8BE0CBF06CLL;
        if ( (_QWORD)v13 == 0x4647CD8BE0CBF06CLL )
          v15 = *((_QWORD *)&v73 + 1) - 0x74F9F0433B268ABBLL;
        if ( v15 )
          v16 = 0;
        else
LABEL_59:
          v16 = 1;
        v17 = *((_WORD *)v65 + 56) == 89 && *((_WORD *)v65 + 57) == 1;
        v18 = 0;
        if ( !InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL) )
          __fastfail(7u);
        if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 && *((_WORD *)v12 + 56) == 12 )
          v18 = *((_WORD *)v12 + 57) == 1;
        if ( v16 && (v17 || v18) )
        {
          v45 = (PnpDeviceWatcher::RetryDeviceListEntry *)operator new(
                                                            0x20uLL,
                                                            (const struct std::nothrow_t *)&std::nothrow);
          i = v45;
          if ( !v45 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x182,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
              (const char *)0x8007000ELL,
              (int)Data4);
            v65 = 0LL;
            RefCountedObject::Release(v12);
            v2 = v62;
            continue;
          }
          *(_QWORD *)v45 = 0LL;
          *((_QWORD *)v45 + 1) = 0LL;
          *((_QWORD *)v45 + 3) = 0LL;
          *((_QWORD *)v45 + 2) = v12;
          v65 = 0LL;
          *((_BYTE *)v45 + 24) = 0;
          v46 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v10 + 1);
          if ( *v46 == (PnpDeviceWatcher::RetryDeviceListEntry *)v10 )
          {
            *(_QWORD *)i = v10;
            *((_QWORD *)i + 1) = v46;
            *v46 = i;
            *((_QWORD *)v10 + 1) = i;
            ++*((_QWORD *)v10 + 2);
            v63 = i;
            goto LABEL_117;
          }
          goto LABEL_137;
        }
        v65 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
          goto LABEL_26;
        goto LABEL_27;
      }
      v36 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        RefCountedObject::Release(v36);
      }
      v2 = v62;
    }
    else
    {
      if ( !v8 )
      {
        v22 = (HSTRING)*((_QWORD *)v5 + 4);
        v23 = v2 + 14;
        for ( j = *(PnpDeviceWatcher::RetryDeviceListEntry **)v23;
              j != (PnpDeviceWatcher::RetryDeviceListEntry *)v23;
              j = *(PnpDeviceWatcher::RetryDeviceListEntry **)j )
        {
          if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                  *(_QWORD *)(*((_QWORD *)j + 2) + 24LL),
                                  v22) )
          {
            v63 = j;
            v2 = v62;
            goto LABEL_2;
          }
        }
        i = 0LL;
        v63 = 0LL;
        v64 = 0LL;
        if ( (int)PnpDevice::MakeAndInitialize(v22, &v64) < 0 )
        {
          v42 = v64;
          if ( v64 )
          {
            v64 = 0LL;
            RefCountedObject::Release(v42);
          }
          v2 = v62;
          goto LABEL_80;
        }
        v12 = v64;
        v25 = *((_OWORD *)v64 + 3);
        v70 = v25;
        v26 = v25 - 0x11D074D3745A17A0LL;
        if ( (_QWORD)v25 == 0x11D074D3745A17A0LL )
          v26 = *((_QWORD *)&v70 + 1) + 0x25A8F0365FFF014ALL;
        if ( !v26 )
          goto LABEL_93;
        v71 = v25;
        v27 = v25 - 0x4647CD8BE0CBF06CLL;
        if ( (_QWORD)v25 == 0x4647CD8BE0CBF06CLL )
          v27 = *((_QWORD *)&v71 + 1) - 0x74F9F0433B268ABBLL;
        if ( !v27 )
LABEL_93:
          LOBYTE(i) = 1;
        v28 = *((_WORD *)v64 + 56) == 89 && *((_WORD *)v64 + 57) == 1;
        v29 = 0;
        if ( !InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL) )
          __fastfail(7u);
        if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 && *((_WORD *)v12 + 56) == 12 )
          v29 = *((_WORD *)v12 + 57) == 1;
        if ( (_BYTE)i && (v28 || v29) )
        {
          v43 = (HSTRING *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( !v43 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x182,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
              (const char *)0x8007000ELL,
              (int)Data4);
            v64 = 0LL;
            RefCountedObject::Release(v12);
            v2 = v62;
            continue;
          }
          *v43 = 0LL;
          v43[1] = 0LL;
          v43[3] = 0LL;
          v43[2] = (HSTRING)v12;
          v64 = 0LL;
          *((_BYTE *)v43 + 24) = 0;
          v44 = (HSTRING *)*((_QWORD *)v23 + 1);
          if ( *v44 == v23 )
          {
            *v43 = v23;
            v43[1] = (HSTRING)v44;
            *v44 = (HSTRING)v43;
            *((_QWORD *)v23 + 1) = v43;
            ++*((_QWORD *)v23 + 2);
            v63 = (PnpDeviceWatcher::RetryDeviceListEntry *)v43;
            v2 = v62;
            continue;
          }
          goto LABEL_137;
        }
        v64 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
        {
LABEL_26:
          *((_DWORD *)v12 + 2) = 1;
          (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v12 + 32LL))(v12);
          *((_DWORD *)v12 + 2) = 0;
          (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
        }
LABEL_27:
        v2 = v62;
        continue;
      }
      v30 = v8 - 2;
      if ( !v30 )
      {
        if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                    (PnpDeviceWatcher *)v2,
                    *((HSTRING *)v5 + 4),
                    0,
                    &v63) < 0 )
        {
LABEL_68:
          i = v63;
          goto LABEL_80;
        }
        v38 = v63;
        if ( !v63 )
          continue;
        PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)v2, v63);
        v40 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v38;
        v41 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v38 + 1);
        if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v38 + 8LL) == v38 && *v41 == v38 )
        {
          *v41 = v40;
          *((_QWORD *)v40 + 1) = v41;
          --*((_QWORD *)v2 + 9);
          PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v38, v39);
          continue;
        }
LABEL_137:
        __fastfail(3u);
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 != 1 )
        {
          v63 = 0LL;
          continue;
        }
        if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                    (PnpDeviceWatcher *)v2,
                    *((HSTRING *)v5 + 4),
                    0,
                    &v63) < 0 )
          goto LABEL_68;
        i = v63;
        if ( v63 )
        {
          started = PnpDevice::RemoveInterface(*((PnpDevice **)v63 + 2), *((HSTRING *)v5 + 4));
          goto LABEL_66;
        }
      }
      else
      {
        v32 = *((_QWORD *)v5 + 4);
        for ( i = (PnpDeviceWatcher::RetryDeviceListEntry *)*((_QWORD *)v2 + 7);
              i != (PnpDeviceWatcher::RetryDeviceListEntry *)(v2 + 14);
              i = *(PnpDeviceWatcher::RetryDeviceListEntry **)i )
        {
          if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                  *(_QWORD *)(*((_QWORD *)i + 2) + 32LL),
                                  v32) )
          {
            v63 = i;
            goto LABEL_57;
          }
        }
        i = 0LL;
        v63 = 0LL;
        WindowsDeleteString(0LL);
        *(_QWORD *)&string.fmtid.Data1 = 0LL;
        v69 = v32;
        DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                                 (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
                                 (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v69,
                                 (void *)&DEVPKEY_Device_InstanceId,
                                 &string,
                                 (HSTRING *)Data4);
        v34 = *(HSTRING *)&string.fmtid.Data1;
        if ( !*(_QWORD *)&string.fmtid.Data1 )
        {
          if ( DeviceStringProperty >= 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2EB,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
              (const char *)0x80004005LL,
              (int)Data4);
            v34 = *(HSTRING *)&string.fmtid.Data1;
          }
LABEL_79:
          WindowsDeleteString(v34);
          *(_QWORD *)&string.fmtid.Data1 = 0LL;
          goto LABEL_80;
        }
        if ( DeviceStringProperty < 0 )
          goto LABEL_79;
        DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                        (PnpDeviceWatcher *)v2,
                                        *(HSTRING *)&string.fmtid.Data1,
                                        1,
                                        &v63);
        WindowsDeleteString(*(HSTRING *)&string.fmtid.Data1);
        *(_QWORD *)&string.fmtid.Data1 = 0LL;
        if ( DeviceListEntryByInstanceId < 0 )
          goto LABEL_68;
        i = v63;
LABEL_57:
        if ( i )
        {
          started = PnpDevice::AddInterface(*((PnpDevice **)i + 2), *((HSTRING *)v5 + 4));
          goto LABEL_66;
        }
      }
    }
  }
  v19 = (PnpDeviceWatcher::RetryDeviceListEntry *)*((_QWORD *)v2 + 10);
  v20 = *(unsigned int **)string.fmtid.Data4;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v19 == (PnpDeviceWatcher::RetryDeviceListEntry *)(v2 + 20) )
        return 0LL;
      v47 = v19;
      v19 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v19;
      CurrentMilliSecTime = QpcTimeConverter::GetCurrentMilliSecTime((QpcTimeConverter *)(v2 + 26));
      v49 = *((_DWORD *)v47 + 6);
      if ( CurrentMilliSecTime >= v49 )
        break;
      v60 = v49 - CurrentMilliSecTime;
      if ( *v20 > v60 )
        *v20 = v60;
    }
    *((_DWORD *)v47 + 6) = CurrentMilliSecTime + 100;
    v50 = (PnpDevice *)*((_QWORD *)v47 + 2);
    WindowsDeleteString(0LL);
    v62 = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v50, &v62);
    v52 = InterfacePath;
    if ( InterfacePath < 0 )
      break;
    v53 = PnpDevice::OpenInterface(*((PnpDevice **)v47 + 2));
    if ( v53 < 0 )
    {
      if ( v53 == -2147024864 )
      {
        if ( (unsigned int)dword_180240410 > 5 )
        {
          v66 = *((_WORD *)v47 + 14);
          StringRawBuffer = WindowsGetStringRawBuffer(v62, 0LL);
          *(_QWORD *)string.fmtid.Data4 = "Failed to exclusively open LampArray";
          Data4 = string.fmtid.Data4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
            v58,
            &unk_180202A2E);
        }
        v59 = *((_WORD *)v47 + 14);
        if ( v59 > 0 )
        {
          *((_WORD *)v47 + 14) = v59 - 1;
          if ( *v20 > 0x64 )
            *v20 = 100;
          goto LABEL_127;
        }
      }
    }
    else
    {
      LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)v2, *((struct PnpDevice **)v47 + 2));
      if ( (unsigned int)dword_180240410 > 5 )
      {
        *(_QWORD *)string.fmtid.Data4 = WindowsGetStringRawBuffer(v62, 0LL);
        StringRawBuffer = (PCWSTR)"Successfully exclusively opened LampArray";
        Data4 = (unsigned __int8 *)&StringRawBuffer;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v55,
          &unk_1802029DB);
      }
    }
    v56 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v47;
    v57 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v47 + 1);
    if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v47 + 8LL) != v47 || *v57 != v47 )
      goto LABEL_137;
    *v57 = v56;
    *((_QWORD *)v56 + 1) = v57;
    --*((_QWORD *)v2 + 12);
    PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v47, v54);
LABEL_127:
    WindowsDeleteString(v62);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD7,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
    (const char *)(unsigned int)InterfacePath,
    (int)Data4);
  WindowsDeleteString(v62);
  return v52;
}
