/*
 * XREFs of ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FD38
 * Callers:
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180026D70 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F86C (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x180041848 (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x180041874 (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@55@Z @ 0x18006EB04 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U3@@-$_tlgWriteTe.c)
 *     ?HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x18008E714 (-HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@@@Z @ 0x18008E7A8 (-HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@.c)
 *     ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x18008E824 (-HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z.c)
 *     ?HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18008E934 (-HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostShouldDplPolicyApply(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // r13d
  int IsManaged; // ebx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edi
  char v8; // r14
  char v9; // bl
  unsigned __int8 v10; // di
  int v11; // eax
  unsigned __int16 *v12; // rsi
  unsigned __int16 *i; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  wchar_t *v16; // r12
  __int64 v17; // rcx
  struct EDP_ENTERPRISE_CONTEXT *v19; // [rsp+50h] [rbp-20h] BYREF
  wchar_t *Context; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  const unsigned __int16 *v22; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int16 *v24; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int8 v25; // [rsp+C8h] [rbp+58h] BYREF

  v19 = 0LL;
  v2 = 0;
  v24 = 0LL;
  IsManaged = HampSystemCdplIsManaged();
  LOBYTE(v4) = HampSystemEdpIsManaged();
  v7 = v4;
  if ( IsManaged )
  {
    if ( (int)HampSystemDplIsAppAllowedToRun(a1, &v23) < 0 )
    {
      v8 = 1;
      v9 = 8;
      goto LABEL_34;
    }
    if ( !v23 )
    {
      v10 = 1;
      v9 = 8;
      v8 = 2;
      goto LABEL_35;
    }
    v8 = 3;
  }
  else
  {
    v8 = 0;
  }
  if ( !v7 )
  {
    v9 = 1;
LABEL_34:
    v10 = 0;
    goto LABEL_35;
  }
  if ( (int)HampSystemImpersonateUserForHost(a1) < 0 )
  {
    v9 = 0;
    goto LABEL_34;
  }
  v2 = 1;
  if ( (int)HampSystemEdpGetEnterpriseContext(a1, &v19) < 0 )
  {
    v9 = 2;
    goto LABEL_34;
  }
  if ( (int)EdpUtilIsAppEnlightened(v19, &v23) < 0 )
  {
    v9 = 3;
    goto LABEL_34;
  }
  if ( v23 )
  {
    v9 = 4;
    goto LABEL_34;
  }
  v11 = HampSystemEdpQueryDplEnforcedPolicyOwnerIds((char *)a1 + 488, &v24);
  v12 = v24;
  if ( v11 >= 0 )
  {
    if ( v24 && *v24 )
    {
      for ( i = v24; ; i = 0LL )
      {
        v16 = wcstok_s(i, L"|", &Context);
        if ( !v16 )
        {
          v9 = 8;
          goto LABEL_30;
        }
        v14 = 0;
        v15 = *(_QWORD *)v19;
        if ( *(_DWORD *)(*(_QWORD *)v19 + 4LL) )
          break;
LABEL_25:
        ;
      }
      while ( _wcsicmp(v16, *(const wchar_t **)(v15 + 16LL * v14 + 24)) )
      {
        ++v14;
        v15 = *(_QWORD *)v19;
        if ( v14 >= *(_DWORD *)(*(_QWORD *)v19 + 4LL) )
          goto LABEL_25;
      }
      v10 = 1;
      v9 = 7;
      goto LABEL_31;
    }
    v9 = 6;
  }
  else
  {
    v9 = 5;
  }
LABEL_30:
  v10 = 0;
LABEL_31:
  if ( v12 )
    EdpFree(v12);
LABEL_35:
  if ( v19 )
    EdpUtilFreeEnterpriseContext();
  if ( v2 )
    RevertToSelf();
  if ( (unsigned int)dword_1800DB218 > 5 )
  {
    LOBYTE(v23) = v8;
    LOBYTE(v24) = v9;
    v17 = 32LL;
    v25 = v10;
    if ( a1 )
      v17 = (__int64)a1 - 32;
    v21 = *(_QWORD *)v17;
    v22 = (const unsigned __int16 *)((char *)a1 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v17,
      byte_1800BF55C,
      v5,
      v6,
      &v22,
      (__int64)&v21,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
  }
  return v10;
}
