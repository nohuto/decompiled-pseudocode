/*
 * XREFs of ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180040A80
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180040818 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180040D48 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@53@Z @ 0x18003CA08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U3@U1@@-$_tlgWrite.c)
 */

void __fastcall AtmosCheck::TraceResult(AtmosCheck *this, int a2, __int64 a3)
{
  const CHAR *v3; // r10
  const CHAR *v5; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  const CHAR *v8; // [rsp+50h] [rbp-20h] BYREF
  const CHAR *v9; // [rsp+58h] [rbp-18h] BYREF
  const CHAR *v10[2]; // [rsp+60h] [rbp-10h] BYREF
  int v11; // [rsp+80h] [rbp+10h] BYREF
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v3 = "None";
  v5 = "None";
  v6 = (unsigned int)(*((_DWORD *)this + 46) - 1);
  if ( *((_DWORD *)this + 46) == 1 )
  {
    v3 = "Initialization";
  }
  else
  {
    v6 = (unsigned int)(*((_DWORD *)this + 46) - 2);
    if ( *((_DWORD *)this + 46) == 2 )
    {
      v3 = "AppInstallation";
    }
    else
    {
      v6 = (unsigned int)(*((_DWORD *)this + 46) - 3);
      if ( *((_DWORD *)this + 46) == 3 )
      {
        v3 = "AppUninstallation";
      }
      else
      {
        v6 = (unsigned int)(*((_DWORD *)this + 46) - 4);
        if ( *((_DWORD *)this + 46) == 4 )
        {
          v3 = "AppUpdating";
        }
        else
        {
          v6 = (unsigned int)(*((_DWORD *)this + 46) - 5);
          if ( *((_DWORD *)this + 46) == 5 )
          {
            v3 = "TimerCallback";
          }
          else
          {
            v6 = (unsigned int)(*((_DWORD *)this + 46) - 6);
            if ( *((_DWORD *)this + 46) == 6 )
            {
              v3 = "LicenseRefreshTimerCallback";
            }
            else
            {
              v6 = (unsigned int)(*((_DWORD *)this + 46) - 7);
              if ( *((_DWORD *)this + 46) == 7 )
              {
                v3 = "ForceLicenseRefresh";
              }
              else if ( *((_DWORD *)this + 46) == 8 )
              {
                v3 = "ClientEventFired";
              }
            }
          }
        }
      }
    }
  }
  v7 = *((unsigned int *)this + 47);
  if ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
        v5 = "Skipped";
    }
    else
    {
      v5 = "Disabled";
    }
  }
  else
  {
    v5 = "Enabled";
  }
  if ( !*((_BYTE *)this + 98) || (_BYTE)a3 )
  {
    if ( (unsigned int)dword_1801C02B0 > 4
      && (qword_1801C02C0 & 0x400000000000LL) != 0
      && (qword_1801C02C8 & 0x400000000000LL) == qword_1801C02C8 )
    {
      v11 = a2;
      v8 = (char *)this + 168;
      v10[0] = v5;
      v9 = v3;
      v12 = 3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v7,
        (int)&unk_18018F534,
        0x400000000000LL,
        v6,
        (__int64)&v12,
        (__int64 *)&v8,
        &v9,
        v10,
        (__int64)&v11);
    }
    *((_BYTE *)this + 98) = 1;
  }
  else if ( (unsigned int)dword_1801C02B0 > 4 )
  {
    v11 = a2;
    v10[0] = (char *)this + 168;
    v8 = v5;
    v9 = v3;
    v12 = 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      v7,
      (int)&unk_18018F61B,
      a3,
      v6,
      (__int64)&v12,
      (__int64 *)v10,
      &v9,
      &v8,
      (__int64)&v11);
  }
}
