/*
 * XREFs of ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18002C698
 * Callers:
 *     HamRpcSrvUpdateActivityProperties @ 0x18002CA00 (HamRpcSrvUpdateActivityProperties.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180029FCC (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002C900 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18003D7B4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HamSrvUpdateActivityProperties(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a3,
        __int64 a4)
{
  DWORD v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  struct _HAM_ACTIVITY *v11; // rax
  struct _HAM_ACTIVITY *v12; // rdi
  int updated; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-104h] BYREF
  int v22; // [rsp+48h] [rbp-100h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+F0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, a3, a4) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF884,
      0LL,
      0LL,
      2u,
      &v25);
  memset_0(TlsValue, 0, 0x88uLL);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, TlsValue);
  }
  v8 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0xFFF0) != 0
    || (v9 = HIWORD(v8), HIWORD(v8) >= 8u)
    || (v8 & 0x10000) == 0 && (v8 & 1) != 0
    || (v8 & 0x20000) == 0 && (v8 & 6) != 0
    || (v8 & 0x40000) == 0 && (v8 & 8) != 0
    || (v8 & 6) >= 6
    || (v10 = *((_DWORD *)a3 + 1), (v10 & 1) == 0) && v10
    || (v10 & 0xF000) != 0
    || ((v10 & 0xE) == 0) != ((v10 & 0x30) == 0)
    || *((_BYTE *)a3 + 7)
    || (*((_BYTE *)a3 + 4) & 1) == 0 && !(_WORD)v9 )
  {
    updated = -1073741583;
  }
  else
  {
    v11 = HampActFindForClient(a1, a2);
    v12 = v11;
    if ( v11 )
    {
      updated = HampActUpdateProperties(v11, a3);
      if ( updated >= 0 )
        updated = 0;
      CemRcObjectDereference(v12);
    }
    else
    {
      updated = -1073741275;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v14, v15) )
  {
    v20 = *((_DWORD *)a3 + 1);
    v21 = *(_DWORD *)a3;
    v23 = a2;
    v22 = updated;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      (unsigned int)&unk_1800BF28E,
      v18,
      v19,
      (__int64)&v22,
      (__int64)&v23,
      (__int64)&v21,
      (__int64)&v20);
  }
  return (unsigned int)updated;
}
