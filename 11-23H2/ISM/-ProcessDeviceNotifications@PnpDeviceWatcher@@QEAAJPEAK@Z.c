/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C910
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004BB44 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18001CEB0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180037D20 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800E8E5C (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E90CC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800E990C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1800E99E8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800E9ADC (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E9C54 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E9F24 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800E9FBC (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800EAA30 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800EACDC (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800EADF8 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800EAF54 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(PnpDeviceWatcher *this, WCHAR *a2)
{
  HSTRING v2; // r12
  HSTRING *v3; // rdi
  char *v4; // rsi
  char *v5; // rbx
  __int64 v6; // rax
  HSTRING *v7; // r14
  int v8; // ecx
  HSTRING v9; // rbx
  HSTRING v10; // r13
  struct PnpDeviceWatcher::DeviceListEntry *i; // r14
  RefCountedObject *v12; // rbx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // r14
  bool v17; // r15
  bool v18; // r12
  PnpDeviceWatcher::RetryDeviceListEntry *v19; // rbx
  WCHAR *v20; // r15
  HSTRING v22; // r15
  HSTRING v23; // r13
  HSTRING j; // rbx
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // r15
  bool v29; // r12
  int v30; // ecx
  int v31; // ecx
  RefCountedObject *v32; // rcx
  __int64 v33; // r15
  HSTRING k; // rbx
  int started; // eax
  unsigned int v36; // edx
  HSTRING v37; // rcx
  HSTRING *v38; // rax
  RefCountedObject *v39; // rcx
  HSTRING *v40; // rax
  HSTRING *v41; // rdx
  struct PnpDeviceWatcher::DeviceListEntry *v42; // rax
  struct PnpDeviceWatcher::DeviceListEntry **v43; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v44; // r14
  unsigned int CurrentMilliSecTime; // eax
  unsigned int v46; // ecx
  PnpDevice *v47; // rdi
  int InterfacePath; // eax
  unsigned int v49; // edi
  int v50; // eax
  unsigned int v51; // edx
  __int64 v52; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry *v53; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v54; // rax
  __int64 v55; // rcx
  __int16 v56; // ax
  unsigned int v57; // ecx
  PCWSTR *p_StringRawBuffer; // [rsp+20h] [rbp-89h]
  struct PnpDeviceWatcher::DeviceListEntry *v59; // [rsp+40h] [rbp-69h] BYREF
  HSTRING string; // [rsp+48h] [rbp-61h] BYREF
  RefCountedObject *v61; // [rsp+50h] [rbp-59h] BYREF
  RefCountedObject *v62; // [rsp+58h] [rbp-51h] BYREF
  __int16 v63; // [rsp+60h] [rbp-49h]
  PCWSTR v64; // [rsp+68h] [rbp-41h] BYREF
  PCWSTR StringRawBuffer; // [rsp+78h] [rbp-31h] BYREF
  __int128 v66; // [rsp+80h] [rbp-29h]
  __int128 v67; // [rsp+90h] [rbp-19h]
  __int128 v68; // [rsp+A0h] [rbp-9h]
  __int128 v69; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v64 = a2;
  v2 = (HSTRING)this;
  string = (HSTRING)this;
  *(_DWORD *)a2 = -1;
  v3 = 0LL;
  v4 = (char *)this + 32;
  while ( 1 )
  {
LABEL_2:
    v5 = *(char **)v4;
    v6 = **(_QWORD **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *(char **)(v6 + 8) != v5 )
      goto LABEL_128;
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
      for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)v2 + 7);
            i != (struct PnpDeviceWatcher::DeviceListEntry *)v10;
            i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
      {
        if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), v9) )
        {
          v59 = i;
          if ( i )
          {
LABEL_108:
            started = PnpDeviceWatcher::StartDeviceObject((PnpDeviceWatcher *)v2, i);
LABEL_64:
            if ( started < 0 )
            {
LABEL_71:
              if ( i )
                PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)v2, i);
            }
          }
          goto LABEL_2;
        }
      }
      v59 = 0LL;
      v62 = 0LL;
      if ( (int)PnpDevice::MakeAndInitialize(v9, &v62) >= 0 )
      {
        v12 = v62;
        v13 = *((_OWORD *)v62 + 3);
        v68 = v13;
        v14 = v13 - 0x11D074D3745A17A0LL;
        if ( (_QWORD)v13 == 0x11D074D3745A17A0LL )
          v14 = *((_QWORD *)&v68 + 1) + 0x25A8F0365FFF014ALL;
        if ( !v14 )
          goto LABEL_54;
        v69 = v13;
        v15 = v13 - 0x4647CD8BE0CBF06CLL;
        if ( (_QWORD)v13 == 0x4647CD8BE0CBF06CLL )
          v15 = *((_QWORD *)&v69 + 1) - 0x74F9F0433B268ABBLL;
        if ( v15 )
          v16 = 0;
        else
LABEL_54:
          v16 = 1;
        v17 = *((_WORD *)v62 + 56) == 89 && *((_WORD *)v62 + 57) == 1;
        v18 = 0;
        if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
          __fastfail(7u);
        if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 && *((_WORD *)v12 + 56) == 12 )
          v18 = *((_WORD *)v12 + 57) == 1;
        if ( v16 && (v17 || v18) )
        {
          v42 = (struct PnpDeviceWatcher::DeviceListEntry *)operator new(
                                                              0x20uLL,
                                                              (const struct std::nothrow_t *)&std::nothrow);
          i = v42;
          if ( !v42 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x182,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
              (const char *)0x8007000ELL,
              (int)p_StringRawBuffer);
            v62 = 0LL;
            RefCountedObject::Release(v12);
            v2 = string;
            continue;
          }
          *(_QWORD *)v42 = 0LL;
          *((_QWORD *)v42 + 1) = 0LL;
          *((_QWORD *)v42 + 3) = 0LL;
          *((_QWORD *)v42 + 2) = v12;
          v62 = 0LL;
          *((_BYTE *)v42 + 24) = 0;
          v43 = (struct PnpDeviceWatcher::DeviceListEntry **)*((_QWORD *)v10 + 1);
          if ( *v43 == (struct PnpDeviceWatcher::DeviceListEntry *)v10 )
          {
            *(_QWORD *)i = v10;
            *((_QWORD *)i + 1) = v43;
            *v43 = i;
            *((_QWORD *)v10 + 1) = i;
            ++*((_QWORD *)v10 + 2);
            v59 = i;
            v2 = string;
            goto LABEL_108;
          }
          goto LABEL_128;
        }
        v62 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
          goto LABEL_26;
        goto LABEL_27;
      }
      v32 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        RefCountedObject::Release(v32);
      }
    }
    else
    {
      if ( !v8 )
      {
        v22 = (HSTRING)*((_QWORD *)v5 + 4);
        v23 = v2 + 14;
        for ( j = (HSTRING)*((_QWORD *)v2 + 7); j != v23; j = *(HSTRING *)j )
        {
          if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                  *(_QWORD *)(*((_QWORD *)j + 2) + 24LL),
                                  v22) )
          {
            v59 = (struct PnpDeviceWatcher::DeviceListEntry *)j;
            goto LABEL_2;
          }
        }
        i = 0LL;
        v59 = 0LL;
        v61 = 0LL;
        if ( (int)PnpDevice::MakeAndInitialize(v22, &v61) < 0 )
        {
          v39 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            RefCountedObject::Release(v39);
          }
          goto LABEL_71;
        }
        v12 = v61;
        v25 = *((_OWORD *)v61 + 3);
        v66 = v25;
        v26 = v25 - 0x11D074D3745A17A0LL;
        if ( (_QWORD)v25 == 0x11D074D3745A17A0LL )
          v26 = *((_QWORD *)&v66 + 1) + 0x25A8F0365FFF014ALL;
        if ( !v26 )
          goto LABEL_84;
        v67 = v25;
        v27 = v25 - 0x4647CD8BE0CBF06CLL;
        if ( (_QWORD)v25 == 0x4647CD8BE0CBF06CLL )
          v27 = *((_QWORD *)&v67 + 1) - 0x74F9F0433B268ABBLL;
        if ( !v27 )
LABEL_84:
          LOBYTE(i) = 1;
        v28 = *((_WORD *)v61 + 56) == 89 && *((_WORD *)v61 + 57) == 1;
        v29 = 0;
        if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
          __fastfail(7u);
        if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 && *((_WORD *)v12 + 56) == 12 )
          v29 = *((_WORD *)v12 + 57) == 1;
        if ( (_BYTE)i && (v28 || v29) )
        {
          v40 = (HSTRING *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( !v40 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x182,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
              (const char *)0x8007000ELL,
              (int)p_StringRawBuffer);
            v61 = 0LL;
            RefCountedObject::Release(v12);
            v2 = string;
            continue;
          }
          *v40 = 0LL;
          v40[1] = 0LL;
          v40[3] = 0LL;
          v40[2] = (HSTRING)v12;
          v61 = 0LL;
          *((_BYTE *)v40 + 24) = 0;
          v41 = (HSTRING *)*((_QWORD *)v23 + 1);
          if ( *v41 == v23 )
          {
            *v40 = v23;
            v40[1] = (HSTRING)v41;
            *v41 = (HSTRING)v40;
            *((_QWORD *)v23 + 1) = v40;
            ++*((_QWORD *)v23 + 2);
            v59 = (struct PnpDeviceWatcher::DeviceListEntry *)v40;
            v2 = string;
            continue;
          }
          goto LABEL_128;
        }
        v61 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
        {
LABEL_26:
          *((_DWORD *)v12 + 2) = 1;
          (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v12 + 32LL))(v12);
          *((_DWORD *)v12 + 2) = 0;
          (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
        }
LABEL_27:
        v2 = string;
        continue;
      }
      v30 = v8 - 2;
      if ( !v30 )
      {
        v33 = *((_QWORD *)v5 + 4);
        for ( k = (HSTRING)*((_QWORD *)v2 + 7); ; k = *(HSTRING *)k )
        {
          if ( k == v2 + 14 )
            goto LABEL_63;
          if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                  *(_QWORD *)(*((_QWORD *)k + 2) + 24LL),
                                  v33) )
            break;
        }
        v59 = (struct PnpDeviceWatcher::DeviceListEntry *)k;
        PnpDeviceWatcher::StopDeviceObject((PnpDeviceWatcher *)v2, (struct PnpDeviceWatcher::DeviceListEntry *)k);
        v37 = *(HSTRING *)k;
        v38 = (HSTRING *)*((_QWORD *)k + 1);
        if ( *(HSTRING *)(*(_QWORD *)k + 8LL) == k && *v38 == k )
        {
          *v38 = v37;
          *((_QWORD *)v37 + 1) = v38;
          --*((_QWORD *)v2 + 9);
          PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(
            (PnpDeviceWatcher::RetryDeviceListEntry *)k,
            v36);
          continue;
        }
LABEL_128:
        __fastfail(3u);
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 != 1 )
        {
LABEL_63:
          v59 = 0LL;
          continue;
        }
        if ( PnpDeviceWatcher::FindDeviceListEntryByInterfacePath((PnpDeviceWatcher *)v2, *((HSTRING *)v5 + 4), 0, &v59) < 0 )
        {
LABEL_70:
          i = v59;
          goto LABEL_71;
        }
        i = v59;
        if ( v59 )
        {
          started = PnpDevice::RemoveInterface(*((PnpDevice **)v59 + 2), *((HSTRING *)v5 + 4));
          goto LABEL_64;
        }
      }
      else
      {
        if ( PnpDeviceWatcher::FindDeviceListEntryByInterfacePath((PnpDeviceWatcher *)v2, *((HSTRING *)v5 + 4), 1, &v59) < 0 )
          goto LABEL_70;
        i = v59;
        if ( v59 )
        {
          started = PnpDevice::AddInterface(*((PnpDevice **)v59 + 2), *((HSTRING *)v5 + 4));
          goto LABEL_64;
        }
      }
    }
  }
  v19 = (PnpDeviceWatcher::RetryDeviceListEntry *)*((_QWORD *)v2 + 10);
  v20 = (WCHAR *)v64;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v19 == (PnpDeviceWatcher::RetryDeviceListEntry *)(v2 + 20) )
        return 0LL;
      v44 = v19;
      v19 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v19;
      CurrentMilliSecTime = QpcTimeConverter::GetCurrentMilliSecTime((QpcTimeConverter *)(v2 + 26));
      v46 = *((_DWORD *)v44 + 6);
      if ( CurrentMilliSecTime >= v46 )
        break;
      v57 = v46 - CurrentMilliSecTime;
      if ( *(_DWORD *)v20 > v57 )
        *(_DWORD *)v20 = v57;
    }
    *((_DWORD *)v44 + 6) = CurrentMilliSecTime + 100;
    v47 = (PnpDevice *)*((_QWORD *)v44 + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v47, &string);
    v49 = InterfacePath;
    if ( InterfacePath < 0 )
      break;
    v50 = PnpDevice::OpenInterface(*((PnpDevice **)v44 + 2));
    if ( v50 < 0 )
    {
      if ( v50 == -2147024864 )
      {
        if ( (unsigned int)dword_180266498 > 5 )
        {
          v63 = *((_WORD *)v44 + 14);
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          v64 = (PCWSTR)"Failed to exclusively open LampArray";
          p_StringRawBuffer = &v64;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
            v55,
            &unk_1802243BE);
        }
        v56 = *((_WORD *)v44 + 14);
        if ( v56 > 0 )
        {
          *((_WORD *)v44 + 14) = v56 - 1;
          if ( *(_DWORD *)v20 > 0x64u )
            *(_DWORD *)v20 = 100;
          goto LABEL_118;
        }
      }
    }
    else
    {
      LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)v2, *((struct PnpDevice **)v44 + 2));
      if ( (unsigned int)dword_180266498 > 5 )
      {
        v64 = WindowsGetStringRawBuffer(string, 0LL);
        StringRawBuffer = (PCWSTR)"Successfully exclusively opened LampArray";
        p_StringRawBuffer = &StringRawBuffer;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v52,
          &unk_180224423);
      }
    }
    v53 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v44;
    v54 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v44 + 1);
    if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v44 + 8LL) != v44 || *v54 != v44 )
      goto LABEL_128;
    *v54 = v53;
    *((_QWORD *)v53 + 1) = v54;
    --*((_QWORD *)v2 + 12);
    PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v44, v51);
LABEL_118:
    WindowsDeleteString(string);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD7,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
    (const char *)(unsigned int)InterfacePath,
    (int)p_StringRawBuffer);
  WindowsDeleteString(string);
  return v49;
}
