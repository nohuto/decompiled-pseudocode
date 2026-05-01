/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18008FC40
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800730FC (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180090D90 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  __int64 v4; // r12
  __int64 v5; // rcx
  const wchar_t *v6; // rdx
  const WCHAR *v7; // r8
  const wchar_t *v8; // r9
  const WCHAR *v9; // r10
  const wchar_t *v10; // r11
  const wchar_t *v11; // rdi
  const WCHAR *v12; // rsi
  const wchar_t *v13; // r14
  const wchar_t *v14; // r15
  const GUID *v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  int v32; // ecx
  REGHANDLE v33; // rcx
  _DWORD *v34; // rcx
  int v35; // r8d
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+3Ch] [rbp-C4h] BYREF
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+4Ch] [rbp-B4h] BYREF
  LPCGUID ActivityId; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v50; // [rsp+90h] [rbp-70h]
  int v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  __int64 *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  int *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  const wchar_t *v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+CCh] [rbp-34h]
  int *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  const wchar_t *v62; // [rsp+E0h] [rbp-20h]
  int v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+ECh] [rbp-14h]
  int *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  const WCHAR *v67; // [rsp+100h] [rbp+0h]
  int v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+10Ch] [rbp+Ch]
  int *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  const wchar_t *v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+128h] [rbp+28h]
  int v74; // [rsp+12Ch] [rbp+2Ch]
  int *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  const wchar_t *v77; // [rsp+140h] [rbp+40h]
  int v78; // [rsp+148h] [rbp+48h]
  int v79; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v80; // [rsp+150h] [rbp+50h]
  int v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+15Ch] [rbp+5Ch]
  int *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  const wchar_t *v85; // [rsp+170h] [rbp+70h]
  int v86; // [rsp+178h] [rbp+78h]
  int v87; // [rsp+17Ch] [rbp+7Ch]
  const WCHAR *v88; // [rsp+180h] [rbp+80h]
  int v89; // [rsp+188h] [rbp+88h]
  int v90; // [rsp+18Ch] [rbp+8Ch]
  int *v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+198h] [rbp+98h]
  int *v93; // [rsp+1A0h] [rbp+A0h]
  __int64 v94; // [rsp+1A8h] [rbp+A8h]
  const wchar_t *v95; // [rsp+1B0h] [rbp+B0h]
  int v96; // [rsp+1B8h] [rbp+B8h]
  int v97; // [rsp+1BCh] [rbp+BCh]

  v4 = *(_QWORD *)(wil::details::static_lazy<WindowManagementLogging>::get(
                     a1,
                     _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v4 > 2u )
  {
    v5 = -1LL;
    v6 = (const wchar_t *)*((_QWORD *)a2 + 6);
    v7 = (const WCHAR *)*((_QWORD *)a2 + 15);
    v8 = (const wchar_t *)*((_QWORD *)a2 + 14);
    v9 = (const WCHAR *)*((_QWORD *)a2 + 12);
    v10 = (const wchar_t *)*((_QWORD *)a2 + 11);
    v11 = (const wchar_t *)*((_QWORD *)a2 + 9);
    v12 = (const WCHAR *)*((_QWORD *)a2 + 3);
    v13 = (const wchar_t *)*((_QWORD *)a2 + 16);
    v14 = (const wchar_t *)*((_QWORD *)a2 + 7);
    v37 = a2[17];
    v38 = a2[4];
    v39 = a2[26];
    v40 = a2[20];
    v41 = a2[8];
    v42 = *a2;
    v43 = a2[16];
    v44 = a2[2];
    v15 = (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL);
    v47 = 0x1000000LL;
    ActivityId = v15;
    if ( v6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *((_BYTE *)v6 + v16) );
      v17 = v16 + 1;
    }
    else
    {
      v6 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v17 = 1;
    }
    v96 = v17;
    v95 = v6;
    v93 = &v37;
    v91 = &v38;
    v97 = 0;
    v94 = 4LL;
    v92 = 4LL;
    if ( v7 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v7[v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v7 = &LocaleName;
      v19 = 2;
    }
    v88 = v7;
    v89 = v19;
    v90 = 0;
    if ( v8 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *((_BYTE *)v8 + v20) );
      v21 = v20 + 1;
    }
    else
    {
      v8 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v21 = 1;
    }
    v86 = v21;
    v83 = &v39;
    v85 = v8;
    v87 = 0;
    v84 = 4LL;
    if ( v9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( v9[v22] );
      v23 = 2 * v22 + 2;
    }
    else
    {
      v9 = &LocaleName;
      v23 = 2;
    }
    v80 = v9;
    v81 = v23;
    v82 = 0;
    if ( v10 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *((_BYTE *)v10 + v24) );
      v25 = v24 + 1;
    }
    else
    {
      v10 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v25 = 1;
    }
    v78 = v25;
    v75 = &v40;
    v77 = v10;
    v79 = 0;
    v76 = 4LL;
    if ( v11 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( *((_BYTE *)v11 + v26) );
      v27 = v26 + 1;
    }
    else
    {
      v11 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v27 = 1;
    }
    v73 = v27;
    v70 = &v41;
    v72 = v11;
    v74 = 0;
    v71 = 4LL;
    if ( v12 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( v12[v28] );
      v29 = 2 * v28 + 2;
    }
    else
    {
      v12 = &LocaleName;
      v29 = 2;
    }
    v67 = v12;
    v65 = &v42;
    v68 = v29;
    v69 = 0;
    v66 = 4LL;
    if ( v13 )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( *((_BYTE *)v13 + v30) );
      v31 = v30 + 1;
    }
    else
    {
      v13 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v31 = 1;
    }
    v63 = v31;
    v60 = &v43;
    v62 = v13;
    v64 = 0;
    v61 = 4LL;
    if ( v14 )
    {
      do
        ++v5;
      while ( *((_BYTE *)v14 + v5) );
      v32 = v5 + 1;
    }
    else
    {
      v14 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v32 = 1;
    }
    v58 = v32;
    v55 = &v44;
    v59 = 0;
    v53 = &v47;
    *(_DWORD *)&EventDescriptor.Level = 2;
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    EventDescriptor.Keyword = 0LL;
    v57 = v14;
    v56 = 4LL;
    v54 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v50 = &unk_18069D592;
    v52 = 1;
    v33 = *(_QWORD *)(v4 + 32);
    UserData.Reserved = 2;
    v51 = 300;
    v46 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v33, &EventDescriptor, ActivityId, 0LL, 0x14u, &UserData);
  }
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &ActivityId);
  v34 = *(_DWORD **)(a1 + 48);
  v35 = a2[2];
  if ( v35 != v34[22] && (v35 != v34[19] || (int)v34[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v34 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&ActivityId);
  return 1;
}
