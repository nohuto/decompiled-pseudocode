/*
 * XREFs of ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x18004CA5C
 * Callers:
 *     HamRpcSrvDebugQueryPackageState @ 0x18004D630 (HamRpcSrvDebugQueryPackageState.c)
 *     HamRpcSrvServicingQueryPackageStateEx @ 0x18004D650 (HamRpcSrvServicingQueryPackageStateEx.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180010F30 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x1800110C0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180027D5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036260 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180036C58 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18004BEA8 (-HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 *     ?HampPkgGetStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x18004D8E4 (-HampPkgGetStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18007F078 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

__int64 __fastcall HamSrvQueryPackageState(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        union _HAM_EXTERNAL_STATE_SUMMARY *a3,
        struct _HAM_HOST_STATE_SUMMARY **a4,
        unsigned int *a5)
{
  int StateSummary; // ebx
  struct _HAM_HOST_STATE_SUMMARY *v6; // rsi
  unsigned int v7; // ebp
  __int64 v9; // r14
  unsigned int v11; // edi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v12; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v13; // r15
  struct _HAM_RC_TREE_NODE *v14; // r12
  unsigned int v15; // edi
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rax
  unsigned int *v17; // rax
  struct _HAM_HOST_STATE_SUMMARY *Heap; // rax
  struct _RM_HAM_ACTIVITY_HOST *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // [rsp+40h] [rbp-108h] BYREF
  union _HAM_EXTERNAL_STATE_SUMMARY *v25; // [rsp+48h] [rbp-100h] BYREF
  unsigned int *v26; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-F0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-E8h] BYREF

  StateSummary = 0;
  v6 = 0LL;
  v25 = a3;
  v7 = 0;
  v24 = a2;
  v9 = a2;
  v26 = a5;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)&dword_1800DB218,
      (int)&unk_1800C0B7D);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  if ( (a5 == 0LL) == (a4 == 0LL) )
  {
    v12 = HampClientPkgFindByPackageHandle(a1, v9);
    v13 = v12;
    if ( v12 )
    {
      v14 = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)v12 + 7);
      StateSummary = HampPkgGetStateSummary(v14);
      if ( a4 )
      {
        while ( 1 )
        {
          if ( v7 )
          {
            v15 = v7;
          }
          else
          {
            v15 = 0;
            NextHost = HampHostEnumerateHostsInNode(v14, 3, 0LL);
            if ( !NextHost )
              goto LABEL_14;
            do
            {
              ++v15;
              NextHost = HampPkgGetNextHost(NextHost);
            }
            while ( NextHost );
            if ( !v15 )
            {
LABEL_14:
              v6 = 0LL;
LABEL_15:
              v17 = v26;
              *a4 = v6;
              v6 = 0LL;
              *v17 = v7;
              goto LABEL_9;
            }
          }
          if ( !is_mul_ok(v15, 0x238uLL) )
            break;
          if ( v6 )
            HampFreeHeap(v6);
          Heap = (struct _HAM_HOST_STATE_SUMMARY *)HampAllocateHeap(568LL * v15);
          v6 = Heap;
          if ( !Heap )
          {
            v11 = -1073741801;
            goto LABEL_29;
          }
          v7 = 0;
          memset_0(Heap, 0, 568LL * v15);
          v19 = HampHostEnumerateHostsInNode(v14, 3, 0LL);
          if ( v19 )
          {
            do
            {
              if ( v7 < v15 )
                HampHostGetStateSummary(v19, (struct _HAM_HOST_STATE_SUMMARY *)((char *)v6 + 568 * v7));
              ++v7;
              v19 = HampPkgGetNextHost(v19);
            }
            while ( v19 );
            if ( v7 > v15 )
              continue;
          }
          goto LABEL_15;
        }
        v11 = -1073741675;
      }
      else
      {
LABEL_9:
        v11 = 0;
        *(_DWORD *)v25 = StateSummary;
      }
LABEL_29:
      CemRcObjectDereference(v13);
      if ( v6 )
        HampFreeHeap(v6);
      v9 = v24;
    }
    else
    {
      v11 = -1073741275;
    }
  }
  else
  {
    v11 = -1073741776;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    LODWORD(v26) = v7;
    LODWORD(v24) = StateSummary;
    v27 = v9;
    LODWORD(v25) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      byte_1800C04CD,
      v21,
      v22,
      (__int64)&v25,
      (__int64)&v27,
      (__int64)&v24,
      (__int64)&v26);
  }
  return v11;
}
