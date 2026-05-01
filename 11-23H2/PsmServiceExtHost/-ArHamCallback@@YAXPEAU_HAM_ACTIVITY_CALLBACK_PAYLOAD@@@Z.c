/*
 * XREFs of ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800037C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180003154 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800031A4 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18000370C (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180003738 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@53@Z @ 0x180003974 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@U3@U1@@-$.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CB5C (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CC34 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 */

void __fastcall ArHamCallback(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1)
{
  int v2; // ecx
  volatile signed __int64 *v3; // rbx
  __int64 v4; // rsi
  int v5; // ecx
  char *v6; // r14
  char v7; // r12
  int v8; // edi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  char v17; // [rsp+58h] [rbp-B0h] BYREF
  char v18; // [rsp+59h] [rbp-AFh] BYREF
  int v19; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  char v23[144]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+108h] [rbp+0h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(v2, (int)&dword_1800BDEF2, 0, 0, 2u, &v24);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  v3 = (volatile signed __int64 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)v3 + 2);
  if ( _InterlockedIncrement64(v3) <= 1 )
    __fastfail(0xEu);
  v5 = *((_DWORD *)a1 + 4);
  v6 = (char *)(v3 + 4);
  v7 = *((_BYTE *)v3 + 32);
  if ( !v5 )
  {
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
    *v6 = 2;
    ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  v12 = v5 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
      v8 = ArActClose((struct _AR_ACTIVITY *)v3);
      ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
      goto LABEL_8;
    }
    if ( v13 != 1 )
    {
      v8 = -1073741811;
      goto LABEL_8;
    }
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
    ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
    ArActDereference(v3);
    goto LABEL_7;
  }
  ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
  v8 = HamStopActivity(
         *(_QWORD *)((*(_QWORD *)(*((_QWORD *)v3 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 80),
         *((_QWORD *)v3 + 1));
  if ( v8 >= 0 )
  {
    *v6 = 0;
    v8 = 0;
  }
  ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v4);
  if ( v8 >= 0 )
  {
    v8 = ArActCheckRestart((struct _AR_ACTIVITY *)v3);
    if ( (unsigned int)dword_1800DB218 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
      {
        v20 = *((_QWORD *)v3 + 1);
        v19 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v14,
          (unsigned int)&unk_1800BDE9E,
          v15,
          v16,
          (__int64)&v19,
          (__int64)&v20);
      }
    }
  }
LABEL_8:
  RtlWakeAddressAll(v3 + 4);
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
  {
    v19 = *((_DWORD *)a1 + 4);
    v18 = *v6;
    v21 = *(_QWORD *)(v4 + 584);
    v22 = *(_QWORD *)a1;
    v17 = v7;
    LODWORD(v20) = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_1800BDF10,
      v10,
      v11,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v19);
  }
  ArActDereference(v3);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
