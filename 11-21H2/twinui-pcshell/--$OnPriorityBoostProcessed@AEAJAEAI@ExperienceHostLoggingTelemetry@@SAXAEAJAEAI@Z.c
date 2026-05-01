/*
 * XREFs of ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x18009DA80
 * Callers:
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x18009D9C0 (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z @ 0x18009DBB0 (-get@-$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall ExperienceHostLoggingTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(_DWORD *a1, int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  REGHANDLE v7; // rcx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-35h] BYREF
  __int64 v11; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  _DWORD *v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  int *v19; // [rsp+90h] [rbp+27h]
  __int64 v20; // [rsp+98h] [rbp+2Fh]
  __int64 *v21; // [rsp+A0h] [rbp+37h]
  __int64 v22; // [rsp+A8h] [rbp+3Fh]

  v4 = wil::details::static_lazy<ExperienceHostLogging>::get(
         a1,
         _lambda_85ce8dc69fb31a5df73cef2b402bbb84_::_lambda_invoker_cdecl_);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    v9 = *a2;
    v10[0] = *a1;
    v21 = &v11;
    v19 = &v9;
    v17 = v10;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v6 = *(unsigned __int16 **)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = (ULONGLONG)v6;
    v11 = 0x1000000LL;
    v22 = 8LL;
    v20 = 4LL;
    v18 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *v6;
    v14 = &unk_1806AC784;
    UserData.Reserved = 2;
    v15 = 74;
    v16 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v4;
}
