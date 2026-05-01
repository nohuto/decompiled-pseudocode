/*
 * XREFs of ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180004C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@53@Z @ 0x1800013DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@U3@U1@@-$.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800018B0 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180004E98 (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005200 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005250 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180005DA8 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006D6C0 (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 */

void __fastcall ArHamCallback(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  struct _AR_ACTIVITY *v6; // rbx
  __int64 v7; // rsi
  int v8; // ecx
  char *v9; // r14
  char v10; // r12
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  char v24; // [rsp+58h] [rbp-B0h] BYREF
  char v25; // [rsp+59h] [rbp-AFh] BYREF
  int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  char v30[144]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+108h] [rbp+0h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, a3, a4) )
    tlgWriteTransfer_EventWriteTransfer(v5, (int)&dword_1800BD06A, 0, 0, 2u, &v31);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  v6 = (struct _AR_ACTIVITY *)*((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)v6 + 2);
  if ( _InterlockedIncrement64((volatile signed __int64 *)v6) <= 1 )
    __fastfail(0xEu);
  v8 = *((_DWORD *)a1 + 4);
  v9 = (char *)v6 + 32;
  v10 = *((_BYTE *)v6 + 32);
  if ( !v8 )
  {
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v7);
    *v9 = 2;
    ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v7);
LABEL_7:
    v11 = 0;
    goto LABEL_8;
  }
  v17 = v8 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
      ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v7);
      v11 = ArActClose(v6);
      ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v7);
      goto LABEL_8;
    }
    if ( v18 != 1 )
    {
      v11 = -1073741811;
      goto LABEL_8;
    }
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v7);
    ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v7);
    ArActDereference(v6);
    goto LABEL_7;
  }
  ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v7);
  v11 = HamStopActivity(
          *(_QWORD *)((*(_QWORD *)(*((_QWORD *)v6 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 72),
          *((_QWORD *)v6 + 1));
  if ( v11 >= 0 )
  {
    *v9 = 0;
    v11 = 0;
  }
  ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v7);
  if ( v11 >= 0 )
  {
    v11 = ArActCheckRestart(v6);
    if ( (unsigned int)dword_1800DC218 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, v19, v20) )
      {
        v27 = *((_QWORD *)v6 + 1);
        v26 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v21,
          (unsigned int)&unk_1800BD016,
          v22,
          v23,
          (__int64)&v26,
          (__int64)&v27);
      }
    }
  }
LABEL_8:
  RtlWakeAddressAll((char *)v6 + 32);
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v12, v13) )
  {
    v26 = *((_DWORD *)a1 + 4);
    v25 = *v9;
    v28 = *(_QWORD *)(v7 + 584);
    v29 = *(_QWORD *)a1;
    v24 = v10;
    LODWORD(v27) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v14,
      (int)&unk_1800BD088,
      v15,
      v16,
      (__int64)&v27,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v26);
  }
  ArActDereference(v6);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
