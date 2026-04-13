/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18005A790
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180001618 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x1800018D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1800018D0.c)
 *     _tlgKeywordOn @ 0x180001D28 (_tlgKeywordOn.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C230 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800401FC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18005A674 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18005C1DC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  const struct _tlgProvider_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // rcx
  int v12; // eax
  int v14; // [rsp+B0h] [rbp-80h] BYREF
  int v15; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v25; // [rsp+100h] [rbp-30h] BYREF
  __int64 v26; // [rsp+108h] [rbp-28h] BYREF
  __int64 v27[4]; // [rsp+110h] [rbp-20h] BYREF
  __int64 v28; // [rsp+140h] [rbp+10h] BYREF
  __int64 v29; // [rsp+148h] [rbp+18h] BYREF
  __int64 v30; // [rsp+150h] [rbp+20h] BYREF
  __int64 v31; // [rsp+158h] [rbp+28h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v8 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
      if ( *(_DWORD *)v8 > 2u )
      {
        v9 = *((_QWORD *)a2 + 6);
        v10 = a1[6];
        LODWORD(v30) = a2[26];
        v21 = *((_QWORD *)a2 + 12);
        v20 = *((_QWORD *)a2 + 11);
        LODWORD(v31) = a2[20];
        v19 = *((_QWORD *)a2 + 9);
        v15 = a2[8];
        v18 = *((_QWORD *)a2 + 3);
        v14 = *a2;
        v25 = *((_QWORD *)a2 + 16);
        LODWORD(v16) = a2[16];
        v26 = *((_QWORD *)a2 + 7);
        LODWORD(v17) = a2[2];
        v24 = v9;
        LODWORD(v28) = a2[17];
        LODWORD(v29) = a2[4];
        v23 = *((_QWORD *)a2 + 15);
        v22 = *((_QWORD *)a2 + 14);
        v27[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (int)v8,
          (int)&dword_18017B2C2,
          v10 + 8,
          (__int64)v8,
          (__int64)v27,
          (__int64)&v17,
          (const wchar_t **)&v26,
          (__int64)&v16,
          (const wchar_t **)&v25,
          (__int64)&v14,
          (const wchar_t **)&v18,
          (__int64)&v15,
          (const wchar_t **)&v19,
          (__int64)&v31,
          (const wchar_t **)&v20,
          (const wchar_t **)&v21,
          (__int64)&v30,
          (const wchar_t **)&v22,
          (const wchar_t **)&v23,
          (__int64)&v29,
          (__int64)&v28,
          (const wchar_t **)&v24);
      }
    }
    else
    {
      v4 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
      if ( *(_DWORD *)v4 > 2u && tlgKeywordOn((__int64)v4, 0x200000000000LL) )
      {
        v6 = *((_QWORD *)a2 + 15);
        v7 = a1[6];
        LODWORD(v28) = a2[26];
        v18 = *((_QWORD *)a2 + 12);
        v19 = *((_QWORD *)a2 + 11);
        LODWORD(v29) = a2[20];
        v20 = *((_QWORD *)a2 + 9);
        LODWORD(v30) = a2[8];
        v21 = *((_QWORD *)a2 + 3);
        LODWORD(v31) = *a2;
        v22 = *((_QWORD *)a2 + 16);
        v14 = a2[16];
        v23 = *((_QWORD *)a2 + 7);
        v15 = a2[2];
        v17 = v6;
        v16 = *((_QWORD *)a2 + 14);
        v24 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v5,
          (int)&dword_18017B031,
          v7 + 8,
          v5,
          (__int64)&v24,
          (__int64)&v15,
          (const wchar_t **)&v23,
          (__int64)&v14,
          (const wchar_t **)&v22,
          (__int64)&v31,
          (const wchar_t **)&v21,
          (__int64)&v30,
          (const wchar_t **)&v20,
          (__int64)&v29,
          (const wchar_t **)&v19,
          (const wchar_t **)&v18,
          (__int64)&v28,
          (const wchar_t **)&v16,
          (const wchar_t **)&v17);
      }
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    (RTL_SRWLOCK **)&v28);
  v11 = (_DWORD *)a1[6];
  v12 = a2[2];
  if ( v12 != v11[22] && (v12 != v11[19] || (int)v11[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v11 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v28);
  return 1;
}
