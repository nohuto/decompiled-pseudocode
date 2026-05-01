/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180090310
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18008F060 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180090D90 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x18012AF8C (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  const WCHAR *v6; // rdx
  const wchar_t *v7; // r8
  const WCHAR *v8; // r9
  const wchar_t *v9; // rbx
  const wchar_t *v10; // rsi
  const WCHAR *v11; // r12
  const wchar_t *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r11d
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // edx
  const wchar_t *v28; // rdx
  int v29; // ecx
  __int64 v30; // rdx
  _QWORD *p_Context; // rax
  char v32; // si
  RTL_SRWLOCK *v33; // rbx
  _DWORD *v34; // rcx
  int v35; // eax
  __int64 v37; // rdx
  void (*v38)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r9
  LPVOID Context; // [rsp+B0h] [rbp-80h] BYREF
  WINBOOL fPending; // [rsp+B8h] [rbp-78h] BYREF
  int v44; // [rsp+BCh] [rbp-74h] BYREF
  int v45; // [rsp+C0h] [rbp-70h] BYREF
  int v46; // [rsp+C4h] [rbp-6Ch] BYREF
  int v47; // [rsp+C8h] [rbp-68h] BYREF
  int v48; // [rsp+CCh] [rbp-64h] BYREF
  int v49; // [rsp+D0h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+D4h] [rbp-5Ch] BYREF
  __int64 v51; // [rsp+D8h] [rbp-58h] BYREF
  LPCGUID ActivityId; // [rsp+E0h] [rbp-50h] BYREF
  PSRWLOCK SRWLock; // [rsp+E8h] [rbp-48h] BYREF
  int v54; // [rsp+F0h] [rbp-40h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F8h] [rbp-38h] BYREF
  const WCHAR *v56; // [rsp+108h] [rbp-28h] BYREF
  const wchar_t *v57; // [rsp+110h] [rbp-20h] BYREF
  const wchar_t *v58; // [rsp+118h] [rbp-18h] BYREF
  const WCHAR *v59; // [rsp+120h] [rbp-10h] BYREF
  const wchar_t *v60; // [rsp+128h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+0h] BYREF
  void *v62; // [rsp+140h] [rbp+10h]
  int v63; // [rsp+148h] [rbp+18h]
  int v64; // [rsp+14Ch] [rbp+1Ch]
  __int64 *v65; // [rsp+150h] [rbp+20h]
  __int64 v66; // [rsp+158h] [rbp+28h]
  int *v67; // [rsp+160h] [rbp+30h]
  __int64 v68; // [rsp+168h] [rbp+38h]
  const wchar_t *v69; // [rsp+170h] [rbp+40h]
  int v70; // [rsp+178h] [rbp+48h]
  int v71; // [rsp+17Ch] [rbp+4Ch]
  int *v72; // [rsp+180h] [rbp+50h]
  __int64 v73; // [rsp+188h] [rbp+58h]
  const wchar_t *v74; // [rsp+190h] [rbp+60h]
  int v75; // [rsp+198h] [rbp+68h]
  int v76; // [rsp+19Ch] [rbp+6Ch]
  int *v77; // [rsp+1A0h] [rbp+70h]
  __int64 v78; // [rsp+1A8h] [rbp+78h]
  const WCHAR *v79; // [rsp+1B0h] [rbp+80h]
  int v80; // [rsp+1B8h] [rbp+88h]
  int v81; // [rsp+1BCh] [rbp+8Ch]
  int *v82; // [rsp+1C0h] [rbp+90h]
  __int64 v83; // [rsp+1C8h] [rbp+98h]
  const wchar_t *v84; // [rsp+1D0h] [rbp+A0h]
  int v85; // [rsp+1D8h] [rbp+A8h]
  int v86; // [rsp+1DCh] [rbp+ACh]
  int *v87; // [rsp+1E0h] [rbp+B0h]
  __int64 v88; // [rsp+1E8h] [rbp+B8h]
  const wchar_t *v89; // [rsp+1F0h] [rbp+C0h]
  int v90; // [rsp+1F8h] [rbp+C8h]
  int v91; // [rsp+1FCh] [rbp+CCh]
  const WCHAR *v92; // [rsp+200h] [rbp+D0h]
  int v93; // [rsp+208h] [rbp+D8h]
  int v94; // [rsp+20Ch] [rbp+DCh]
  int *v95; // [rsp+210h] [rbp+E0h]
  __int64 v96; // [rsp+218h] [rbp+E8h]
  const wchar_t *v97; // [rsp+220h] [rbp+F0h]
  int v98; // [rsp+228h] [rbp+F8h]
  int v99; // [rsp+22Ch] [rbp+FCh]
  const WCHAR *v100; // [rsp+230h] [rbp+100h]
  int v101; // [rsp+238h] [rbp+108h]
  int v102; // [rsp+23Ch] [rbp+10Ch]

  v50 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
  {
    v39 = *(_DWORD **)(wil::details::static_lazy<CortanaProactiveLogging>::get(
                         v4,
                         _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v39 > 2u && (unsigned __int8)tlgKeywordOn(v39, 0x400000000000LL) )
    {
      ActivityId = (LPCGUID)*((_QWORD *)a2 + 6);
      v49 = a2[17];
      v48 = a2[4];
      v51 = *((_QWORD *)a2 + 15);
      Context = (LPVOID)*((_QWORD *)a2 + 14);
      v47 = a2[26];
      v56 = (const WCHAR *)*((_QWORD *)a2 + 12);
      v57 = (const wchar_t *)*((_QWORD *)a2 + 11);
      v46 = a2[20];
      v58 = (const wchar_t *)*((_QWORD *)a2 + 9);
      v45 = a2[8];
      v59 = (const WCHAR *)*((_QWORD *)a2 + 3);
      v44 = *a2;
      v60 = (const wchar_t *)*((_QWORD *)a2 + 16);
      fPending = a2[16];
      *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a2 + 7);
      v50 = a2[2];
      SRWLock = (PSRWLOCK)0x1000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v40,
        (unsigned __int8 *)dword_18069EF80,
        (const GUID *)(a1[6] + 8LL),
        v41,
        (__int64)&SRWLock,
        (__int64)&v50,
        (const wchar_t **)&EventDescriptor,
        (__int64)&fPending,
        &v60,
        (__int64)&v44,
        &v59,
        (__int64)&v45,
        &v58,
        (__int64)&v46,
        &v57,
        &v56,
        (__int64)&v47,
        (const wchar_t **)&Context,
        (const WCHAR **)&v51,
        (__int64)&v48,
        (__int64)&v49,
        (const wchar_t **)&ActivityId);
    }
  }
  else
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      SRWLock = (PSRWLOCK)&`CortanaProactiveLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B4040;
      qword_1807B4040 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B4058 = (__int64)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      v54 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&SRWLock, v37, v38);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 2u
      && (*(_QWORD *)(v5 + 16) & 0x600000000000LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x600000000000LL) == *(_QWORD *)(v5 + 24) )
    {
      v6 = (const WCHAR *)*((_QWORD *)a2 + 15);
      v7 = (const wchar_t *)*((_QWORD *)a2 + 14);
      v44 = a2[26];
      v8 = (const WCHAR *)*((_QWORD *)a2 + 12);
      v9 = (const wchar_t *)*((_QWORD *)a2 + 11);
      v45 = a2[20];
      v10 = (const wchar_t *)*((_QWORD *)a2 + 9);
      v46 = a2[8];
      v11 = (const WCHAR *)*((_QWORD *)a2 + 3);
      v47 = *a2;
      v12 = (const wchar_t *)*((_QWORD *)a2 + 16);
      v48 = a2[16];
      v49 = a2[2];
      v51 = 0x1000000LL;
      ActivityId = (LPCGUID)(a1[6] + 8LL);
      v13 = -1LL;
      if ( v6 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( v6[v14] );
        v15 = 2 * v14 + 2;
      }
      else
      {
        v6 = &LocaleName;
        v15 = 2;
      }
      v100 = v6;
      v101 = v15;
      v102 = 0;
      if ( v7 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( *((_BYTE *)v7 + v16) );
        v17 = v16 + 1;
      }
      else
      {
        v7 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        v17 = 1;
      }
      v97 = v7;
      v98 = v17;
      v99 = 0;
      v95 = &v44;
      v96 = 4LL;
      if ( v8 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( v8[v18] );
        v19 = 2 * v18 + 2;
      }
      else
      {
        v8 = &LocaleName;
        v19 = 2;
      }
      v92 = v8;
      v93 = v19;
      v94 = 0;
      if ( v9 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( *((_BYTE *)v9 + v20) );
        v21 = v20 + 1;
      }
      else
      {
        v9 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        v21 = 1;
      }
      v89 = v9;
      v90 = v21;
      v91 = 0;
      v87 = &v45;
      v88 = 4LL;
      if ( v10 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( *((_BYTE *)v10 + v22) );
        v23 = v22 + 1;
      }
      else
      {
        v10 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        v23 = 1;
      }
      v84 = v10;
      v85 = v23;
      v86 = 0;
      v82 = &v46;
      v83 = 4LL;
      if ( v11 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( v11[v24] );
        v25 = 2 * v24 + 2;
      }
      else
      {
        v11 = &LocaleName;
        v25 = 2;
      }
      v79 = v11;
      v80 = v25;
      v81 = 0;
      v77 = &v47;
      v78 = 4LL;
      if ( v12 )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v12 + v26) );
        v27 = v26 + 1;
      }
      else
      {
        v12 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        v27 = 1;
      }
      v74 = v12;
      v75 = v27;
      v76 = 0;
      v72 = &v48;
      v73 = 4LL;
      v28 = (const wchar_t *)*((_QWORD *)a2 + 7);
      if ( v28 )
      {
        do
          ++v13;
        while ( *((_BYTE *)v28 + v13) );
        v29 = v13 + 1;
      }
      else
      {
        v28 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        v29 = 1;
      }
      v69 = v28;
      v70 = v29;
      v71 = 0;
      v67 = &v49;
      v68 = 4LL;
      v65 = &v51;
      v66 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 2;
      EventDescriptor.Keyword = 0x600000000000LL;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v62 = &unk_18069EE76;
      v63 = 265;
      v64 = 1;
      v50 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, ActivityId, 0LL, 0x11u, &UserData);
    }
  }
  v30 = a1[39];
  if ( v30 )
  {
    wil::AcquireSRWLockExclusive(&Context, v30 + 256);
    p_Context = &Context;
    v32 = 1;
    v33 = (RTL_SRWLOCK *)Context;
  }
  else
  {
    p_Context = &SRWLock;
    v32 = 2;
    v33 = 0LL;
  }
  *p_Context = 0LL;
  if ( (v32 & 2) != 0 )
  {
    v32 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v32 & 1) != 0 )
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&Context);
  v34 = (_DWORD *)a1[6];
  v35 = a2[2];
  if ( v35 != v34[22] && (v35 != v34[19] || (int)v34[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v34 + 20), (const struct wil::FailureInfo *)a2);
  if ( v33 )
    ReleaseSRWLockExclusive(v33);
  return 1;
}
