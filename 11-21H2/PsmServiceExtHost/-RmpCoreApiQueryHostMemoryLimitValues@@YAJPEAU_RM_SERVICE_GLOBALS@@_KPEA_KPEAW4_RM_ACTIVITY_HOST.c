/*
 * XREFs of ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x180092064
 * Callers:
 *     RmCoreRpcSrvQueryHostMemoryLimitValues @ 0x180087D10 (RmCoreRpcSrvQueryHostMemoryLimitValues.c)
 * Callees:
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004650 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_H.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800449BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCoreApiQueryHostMemoryLimitValues(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        enum _RM_ACTIVITY_HOST_CALLBACK_TYPE *a4)
{
  int v4; // edi
  struct _RM_SERVICE_GLOBALS *v5; // r14
  unsigned __int64 v6; // rsi
  int v10; // eax
  char *v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 *v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+84h] [rbp+1Bh]

  P = 0LL;
  v4 = 6;
  v5 = RmSvcGlobals;
  v6 = 0LL;
  if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 3LL) )
  {
    v23 = 0;
    v21 = &v18;
    v18 = a2;
    v22 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C5D62,
      0LL,
      0LL,
      3u,
      &v20);
  }
  RmpAcquireGlobalLock();
  v10 = RmpActivityHostFindByHostId((__int64)v5, a2, 3, &P);
  v11 = (char *)P;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = *((_DWORD *)P + 348);
    v6 = *((_QWORD *)P + 173);
    switch ( v13 )
    {
      case 4:
        v4 = 5;
LABEL_13:
        *a3 = v6;
        v12 = 0;
        *(_DWORD *)a4 = v4;
        goto LABEL_15;
      case 3:
        v4 = 4;
        goto LABEL_13;
      case 2:
        v4 = 3;
        goto LABEL_13;
      case 1:
        v4 = 2;
        goto LABEL_13;
    }
    v12 = -1073741823;
  }
LABEL_15:
  if ( v11 )
    RmpObjectRelease(v11);
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 3LL) )
  {
    LODWORD(v18) = v4;
    v19 = v6;
    LODWORD(P) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DC1E0,
      byte_1800C5CFC,
      v14,
      v15,
      (__int64)&P,
      (__int64)&v19,
      (__int64)&v18);
  }
  return v12;
}
