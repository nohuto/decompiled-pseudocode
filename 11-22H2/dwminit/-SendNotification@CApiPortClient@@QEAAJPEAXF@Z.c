/*
 * XREFs of ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000994C
 * Callers:
 *     DwmpUpdateUserSettings @ 0x1800093A0 (DwmpUpdateUserSettings.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800091CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000983C (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180009C48 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180009F20 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180009F4C (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E320 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendNotification(CApiPortClient *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  CApiPortClient *v4; // rcx
  bool IsConnected; // al
  CApiPortClient *v6; // rcx
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rdi
  __int16 v11; // r9
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx

  v3 = -2144980991;
  EnterCriticalSection(&stru_180015B40);
  IsConnected = CApiPortClient::IsConnected(v4);
  if ( !byte_180015B68 )
  {
    v7 = IsConnected;
    do
    {
      v8 = CApiPortClient::EnsureConnected(v6);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v8, 0x6Du);
        goto LABEL_17;
      }
      v10 = (volatile signed __int32 *)*(&xmmword_180015B30 + 1);
      if ( *(&xmmword_180015B30 + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&xmmword_180015B30 + 1) + 14, 1u);
      LeaveCriticalSection(&stru_180015B40);
      v12 = CPortClient::SendComplexAsyncRequest((CPortClient *)v10, *a2, a2, v11);
      if ( v10 && _InterlockedExchangeAdd(v10 + 14, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v10)(v10, 1LL);
      EnterCriticalSection(&stru_180015B40);
      v6 = (CApiPortClient *)*(&xmmword_180015B30 + 1);
      if ( *(&xmmword_180015B30 + 1)
        && _InterlockedCompareExchange((volatile signed __int32 *)*(&xmmword_180015B30 + 1) + 14, 1, 1) == 1 )
      {
        CPortClient::DisconnectIfDeferred(v6);
      }
      if ( v12 != -805306313 )
        break;
      v13 = v7--;
    }
    while ( v13 > 0 );
    v14 = CApiPortClient::Translate(v12);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v14, 0x86u);
  }
LABEL_17:
  LeaveCriticalSection(&stru_180015B40);
  return v3;
}
