/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C160
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004C684 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18001D058 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800638EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x180063A48 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 *     ?OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z @ 0x180063E10 (-OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800F7DDC (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800F804C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800F888C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1800F8968 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800F8A5C (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800F8B70 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800F8E40 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800F8ED8 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800F9940 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800F9BEC (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800F9D6C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800F9EF4 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(PnpDeviceWatcher *this, WCHAR *a2)
{
  HSTRING v2; // r15
  HSTRING *v3; // rdi
  char *v4; // r13
  char *v5; // rsi
  __int64 v6; // rax
  HSTRING *v7; // rbx
  HSTRING v8; // r14
  HSTRING v9; // rsi
  HSTRING v10; // rbx
  struct PnpDeviceWatcher::DeviceListEntry *v11; // rbx
  RefCountedObject *v12; // rcx
  RefCountedObject *v13; // rbx
  __int128 v14; // xmm0
  bool v15; // r12
  bool v16; // r15
  bool v17; // r14
  HSTRING *v18; // rax
  HSTRING *v19; // rdx
  HSTRING v20; // r14
  HSTRING v21; // rsi
  int started; // eax
  RefCountedObject *v23; // rcx
  RefCountedObject *v24; // r14
  __int128 v25; // xmm0
  bool v26; // r12
  bool v27; // r15
  bool v28; // bl
  struct PnpDeviceWatcher::DeviceListEntry *v29; // rax
  struct PnpDeviceWatcher::DeviceListEntry **v30; // rax
  __int64 v31; // r14
  HSTRING v32; // rbx
  unsigned int v33; // edx
  HSTRING v34; // rcx
  HSTRING *v35; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v36; // rbx
  WCHAR *v37; // r12
  PnpDeviceWatcher::RetryDeviceListEntry *v38; // rsi
  unsigned int CurrentMilliSecTime; // eax
  unsigned int v40; // ecx
  PnpDevice *v41; // rdi
  int InterfacePath; // eax
  unsigned int v43; // edi
  int v44; // eax
  unsigned int v45; // edx
  __int64 v46; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry *v47; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v48; // rax
  __int64 v49; // rcx
  __int16 v50; // ax
  unsigned int v51; // ecx
  PCWSTR *p_StringRawBuffer; // [rsp+20h] [rbp-89h]
  struct PnpDeviceWatcher::DeviceListEntry *v54; // [rsp+40h] [rbp-69h] BYREF
  HSTRING string; // [rsp+48h] [rbp-61h] BYREF
  RefCountedObject *v56; // [rsp+50h] [rbp-59h] BYREF
  RefCountedObject *v57; // [rsp+58h] [rbp-51h] BYREF
  __int16 v58; // [rsp+60h] [rbp-49h]
  PCWSTR v59; // [rsp+68h] [rbp-41h] BYREF
  PCWSTR StringRawBuffer; // [rsp+78h] [rbp-31h] BYREF
  __int128 v61; // [rsp+80h] [rbp-29h]
  __int128 v62; // [rsp+90h] [rbp-19h]
  __int128 v63; // [rsp+A0h] [rbp-9h]
  __int128 v64; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v59 = a2;
  v2 = (HSTRING)this;
  string = (HSTRING)this;
  *(_DWORD *)a2 = -1;
  v3 = 0LL;
  v4 = (char *)this + 32;
  v5 = (char *)*((_QWORD *)this + 4);
  v6 = *(_QWORD *)v5;
  if ( *((PnpDeviceWatcher **)v5 + 1) != (PnpDeviceWatcher *)((char *)this + 32) )
LABEL_98:
    __fastfail(3u);
  while ( 1 )
  {
    if ( *(char **)(v6 + 8) != v5 )
      goto LABEL_98;
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
    switch ( *((_DWORD *)v5 + 6) )
    {
      case 0:
        v8 = (HSTRING)*((_QWORD *)v5 + 4);
        v9 = v2 + 14;
        v10 = (HSTRING)*((_QWORD *)v2 + 7);
        while ( 2 )
        {
          if ( v10 == v9 )
          {
            v11 = 0LL;
            v54 = 0LL;
            v56 = 0LL;
            if ( (int)PnpDevice::MakeAndInitialize(v8, (struct PnpDeviceWatcher *)v2, &v56) < 0 )
            {
              v12 = v56;
              if ( v56 )
              {
                v56 = 0LL;
                RefCountedObject::Release(v12);
              }
              goto LABEL_94;
            }
            v13 = v56;
            v14 = *(_OWORD *)((char *)v56 + 56);
            v61 = v14;
            v15 = 1;
            if ( v14 != __PAIR128__(0xDA570FC9A000FEB6uLL, 0x11D074D3745A17A0LL) )
            {
              v62 = v14;
              if ( v14 != __PAIR128__(0x74F9F0433B268ABBLL, 0x4647CD8BE0CBF06CLL) )
                v15 = 0;
            }
            v16 = *((_WORD *)v56 + 60) == 89 && *((_WORD *)v56 + 61) == 1;
            v17 = 0;
            if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
              __fastfail(7u);
            if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 && *((_WORD *)v13 + 60) == 12 )
              v17 = *((_WORD *)v13 + 61) == 1;
            if ( !v15 || !v16 && !v17 )
            {
              v56 = 0LL;
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, 0xFFFFFFFF) == 1 )
              {
                *((_DWORD *)v13 + 2) = 1;
                (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v13 + 32LL))(v13);
                *((_DWORD *)v13 + 2) = 0;
                (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
              }
              goto LABEL_73;
            }
            v18 = (HSTRING *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
            if ( v18 )
            {
              *v18 = 0LL;
              v18[1] = 0LL;
              v18[3] = 0LL;
              v18[2] = (HSTRING)v13;
              v56 = 0LL;
              *((_BYTE *)v18 + 24) = 0;
              v19 = (HSTRING *)*((_QWORD *)v9 + 1);
              if ( *v19 != v9 )
                goto LABEL_98;
              *v18 = v9;
              v18[1] = (HSTRING)v19;
              *v19 = (HSTRING)v18;
              *((_QWORD *)v9 + 1) = v18;
              ++*((_QWORD *)v9 + 2);
              v54 = (struct PnpDeviceWatcher::DeviceListEntry *)v18;
              v2 = string;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x197,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
                (const char *)0x8007000ELL,
                (int)p_StringRawBuffer);
              v56 = 0LL;
              RefCountedObject::Release(v13);
              v2 = string;
            }
          }
          else
          {
            if ( !(unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                     *(_QWORD *)(*((_QWORD *)v10 + 2) + 24LL),
                                     v8) )
            {
              v10 = *(HSTRING *)v10;
              continue;
            }
            v54 = (struct PnpDeviceWatcher::DeviceListEntry *)v10;
          }
          goto LABEL_97;
        }
      case 1:
        v20 = (HSTRING)*((_QWORD *)v5 + 4);
        v21 = v2 + 14;
        v11 = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)v2 + 7);
        while ( 2 )
        {
          if ( v11 != (struct PnpDeviceWatcher::DeviceListEntry *)v21 )
          {
            if ( !(unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                     *(_QWORD *)(*((_QWORD *)v11 + 2) + 24LL),
                                     v20) )
            {
              v11 = *(struct PnpDeviceWatcher::DeviceListEntry **)v11;
              continue;
            }
            v54 = v11;
            if ( !v11 )
              goto LABEL_97;
            started = PnpDeviceWatcher::StartDeviceObject((PnpDeviceWatcher *)v2, v11);
            goto LABEL_87;
          }
          break;
        }
        v54 = 0LL;
        v57 = 0LL;
        if ( (int)PnpDevice::MakeAndInitialize(v20, (struct PnpDeviceWatcher *)v2, &v57) < 0 )
        {
          v23 = v57;
          if ( v57 )
          {
            v57 = 0LL;
            RefCountedObject::Release(v23);
          }
          goto LABEL_97;
        }
        v24 = v57;
        v25 = *(_OWORD *)((char *)v57 + 56);
        v63 = v25;
        v26 = 1;
        if ( v25 != __PAIR128__(0xDA570FC9A000FEB6uLL, 0x11D074D3745A17A0LL) )
        {
          v64 = v25;
          if ( v25 != __PAIR128__(0x74F9F0433B268ABBLL, 0x4647CD8BE0CBF06CLL) )
            v26 = 0;
        }
        v27 = *((_WORD *)v57 + 60) == 89 && *((_WORD *)v57 + 61) == 1;
        v28 = 0;
        if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
          __fastfail(7u);
        if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 && *((_WORD *)v24 + 60) == 12 )
          v28 = *((_WORD *)v24 + 61) == 1;
        if ( v26 && (v27 || v28) )
        {
          v29 = (struct PnpDeviceWatcher::DeviceListEntry *)operator new(
                                                              0x20uLL,
                                                              (const struct std::nothrow_t *)&std::nothrow);
          v11 = v29;
          if ( !v29 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x197,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
              (const char *)0x8007000ELL,
              (int)p_StringRawBuffer);
            v57 = 0LL;
            RefCountedObject::Release(v24);
            v2 = string;
            goto LABEL_97;
          }
          *(_QWORD *)v29 = 0LL;
          *((_QWORD *)v29 + 1) = 0LL;
          *((_QWORD *)v29 + 3) = 0LL;
          *((_QWORD *)v29 + 2) = v24;
          v57 = 0LL;
          *((_BYTE *)v29 + 24) = 0;
          v30 = (struct PnpDeviceWatcher::DeviceListEntry **)*((_QWORD *)v21 + 1);
          if ( *v30 != (struct PnpDeviceWatcher::DeviceListEntry *)v21 )
            goto LABEL_98;
          *(_QWORD *)v11 = v21;
          *((_QWORD *)v11 + 1) = v30;
          *v30 = v11;
          *((_QWORD *)v21 + 1) = v11;
          ++*((_QWORD *)v21 + 2);
          v54 = v11;
          v2 = string;
          started = PnpDeviceWatcher::StartDeviceObject((PnpDeviceWatcher *)string, v11);
LABEL_87:
          if ( started < 0 )
          {
LABEL_94:
            if ( v11 )
              PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)v2, v11);
          }
          goto LABEL_97;
        }
        v57 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24 + 2, 0xFFFFFFFF) == 1 )
        {
          *((_DWORD *)v24 + 2) = 1;
          (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v24 + 32LL))(v24);
          *((_DWORD *)v24 + 2) = 0;
          (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL);
        }
LABEL_73:
        v2 = string;
LABEL_97:
        v5 = *(char **)v4;
        v6 = **(_QWORD **)v4;
        if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
          goto LABEL_98;
        break;
      case 2:
        v31 = *((_QWORD *)v5 + 4);
        v32 = (HSTRING)*((_QWORD *)v2 + 7);
        while ( 2 )
        {
          if ( v32 == v2 + 14 )
          {
LABEL_96:
            v54 = 0LL;
          }
          else
          {
            if ( !(unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                     *(_QWORD *)(*((_QWORD *)v32 + 2) + 24LL),
                                     v31) )
            {
              v32 = *(HSTRING *)v32;
              continue;
            }
            v54 = (struct PnpDeviceWatcher::DeviceListEntry *)v32;
            PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)v2, (struct PnpDeviceWatcher::DeviceListEntry *)v32);
            v34 = *(HSTRING *)v32;
            v35 = (HSTRING *)*((_QWORD *)v32 + 1);
            if ( *(HSTRING *)(*(_QWORD *)v32 + 8LL) != v32 || *v35 != v32 )
              goto LABEL_98;
            *v35 = v34;
            *((_QWORD *)v34 + 1) = v35;
            --*((_QWORD *)v2 + 9);
            PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(
              (PnpDeviceWatcher::RetryDeviceListEntry *)v32,
              v33);
          }
          goto LABEL_97;
        }
      case 3:
        if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                    (PnpDeviceWatcher *)v2,
                    *((HSTRING *)v5 + 4),
                    1,
                    &v54) < 0 )
          goto LABEL_93;
        v11 = v54;
        if ( !v54 )
          goto LABEL_97;
        started = PnpDevice::AddInterface(*((PnpDevice **)v54 + 2), *((HSTRING *)v5 + 4));
        goto LABEL_87;
      case 4:
        if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                    (PnpDeviceWatcher *)v2,
                    *((HSTRING *)v5 + 4),
                    0,
                    &v54) < 0 )
          goto LABEL_93;
        v11 = v54;
        if ( !v54 )
          goto LABEL_97;
        started = PnpDevice::RemoveInterface(*((PnpDevice **)v54 + 2), *((HSTRING *)v5 + 4));
        goto LABEL_87;
      case 5:
      case 6:
      case 7:
      case 8:
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
          goto LABEL_96;
        if ( (int)PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                    (PnpDeviceWatcher *)v2,
                    *((HSTRING *)v5 + 4),
                    0,
                    &v54) < 0 )
        {
LABEL_93:
          v11 = v54;
          goto LABEL_94;
        }
        if ( v54 )
          PnpDevice::OnPnpNotification(*((_QWORD *)v54 + 2), *((unsigned int *)v5 + 6));
        goto LABEL_97;
      default:
        goto LABEL_96;
    }
  }
  v36 = (PnpDeviceWatcher::RetryDeviceListEntry *)*((_QWORD *)v2 + 10);
  v37 = (WCHAR *)v59;
  while ( v36 != (PnpDeviceWatcher::RetryDeviceListEntry *)(v2 + 20) )
  {
    v38 = v36;
    v36 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v36;
    CurrentMilliSecTime = QpcTimeConverter::GetCurrentMilliSecTime((QpcTimeConverter *)(v2 + 26));
    v40 = *((_DWORD *)v38 + 6);
    if ( CurrentMilliSecTime < v40 )
    {
      v51 = v40 - CurrentMilliSecTime;
      if ( *(_DWORD *)v37 > v51 )
        *(_DWORD *)v37 = v51;
    }
    else
    {
      *((_DWORD *)v38 + 6) = CurrentMilliSecTime + 100;
      v41 = (PnpDevice *)*((_QWORD *)v38 + 2);
      WindowsDeleteString(0LL);
      string = 0LL;
      InterfacePath = PnpDevice::GetInterfacePath(v41, &string);
      v43 = InterfacePath;
      if ( InterfacePath < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEC,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)(unsigned int)InterfacePath,
          (int)p_StringRawBuffer);
        WindowsDeleteString(string);
        return v43;
      }
      v44 = PnpDevice::OpenInterface(*((PnpDevice **)v38 + 2));
      if ( v44 < 0 )
      {
        if ( v44 == -2147024864 )
        {
          if ( (unsigned int)dword_180275498 > 5 )
          {
            v58 = *((_WORD *)v38 + 14);
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v59 = (PCWSTR)"Failed to exclusively open LampArray";
            p_StringRawBuffer = &v59;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
              v49,
              &unk_180232F70);
          }
          v50 = *((_WORD *)v38 + 14);
          if ( v50 > 0 )
          {
            *((_WORD *)v38 + 14) = v50 - 1;
            if ( *(_DWORD *)v37 > 0x64u )
              *(_DWORD *)v37 = 100;
            goto LABEL_115;
          }
        }
      }
      else
      {
        LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)v2, *((struct PnpDevice **)v38 + 2));
        if ( (unsigned int)dword_180275498 > 5 )
        {
          v59 = WindowsGetStringRawBuffer(string, 0LL);
          StringRawBuffer = (PCWSTR)"Successfully exclusively opened LampArray";
          p_StringRawBuffer = &StringRawBuffer;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
            v46,
            &unk_180232FD5);
        }
      }
      v47 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v38;
      v48 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v38 + 1);
      if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v38 + 8LL) != v38 || *v48 != v38 )
        goto LABEL_98;
      *v48 = v47;
      *((_QWORD *)v47 + 1) = v48;
      --*((_QWORD *)v2 + 12);
      PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v38, v45);
LABEL_115:
      WindowsDeleteString(string);
    }
  }
  return 0LL;
}
