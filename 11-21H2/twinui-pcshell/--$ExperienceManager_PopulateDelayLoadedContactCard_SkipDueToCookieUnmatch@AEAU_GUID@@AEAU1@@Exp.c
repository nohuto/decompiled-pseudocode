/*
 * XREFs of ??$ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch@AEAU_GUID@@AEAU1@@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@0@Z @ 0x1803754A4
 * Callers:
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1803791C0 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x18037B9D4 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch<_GUID &,_GUID &>(
        __int64 a1,
        __int128 *a2,
        __int128 *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // r8
  __int128 v11; // xmm1
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  __int128 v14; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-58h] BYREF
  __int128 *v16; // [rsp+70h] [rbp-38h]
  int v17; // [rsp+78h] [rbp-30h]
  int v18; // [rsp+7Ch] [rbp-2Ch]
  __int128 *v19; // [rsp+80h] [rbp-28h]
  int v20; // [rsp+88h] [rbp-20h]
  int v21; // [rsp+8Ch] [rbp-1Ch]

  v6 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
         a1,
         _lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v6 + 8);
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v9 = *a3;
      v10 = *(_QWORD *)(a1 + 48);
      v11 = *a2;
      v21 = 0;
      v18 = 0;
      v19 = &v13;
      v20 = 16;
      v16 = &v14;
      v17 = 16;
      v13 = v9;
      v14 = v11;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(
                     v8,
                     (unsigned __int8 *)dword_1806A78EC,
                     (const GUID *)(v10 + 8),
                     0LL,
                     4u,
                     &v15);
    }
  }
  return v6;
}
