/*
 * XREFs of ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x1800424E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180006418 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003C1EC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x1800425E8 (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmRegisterResource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v5; // rsi
  int v8; // ebx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h]
  _BYTE v21[144]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a3;
  RmpUtilCheckStartLockTracking(&v16, (struct _CEM_LOCK_TRACKER *)v21);
  if ( (_DWORD)v5 || a4 )
  {
    if ( a2 > 0x31 )
    {
      v8 = -805306129;
    }
    else
    {
      LODWORD(v17) = a2;
      *((_QWORD *)&v17 + 1) = v5;
      WORD2(v18) = a4 ^ 1;
      LODWORD(v18) = 101;
      v19 = v17;
      v20 = v18;
      RmpAcquireGlobalLock();
      v8 = ExecutionModel::BaseResourceSet::InitializeResource(
             *(ExecutionModel::BaseResourceSet **)(a1 + 24),
             (const struct ExecutionModel::_ResourceInfo *)&v19);
      if ( v8 >= 0 )
        v8 = 0;
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    v8 = -805306128;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v13 = v5;
    v14 = a2;
    v15 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (int)&unk_1800C2448,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
  if ( v16 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v8;
}
