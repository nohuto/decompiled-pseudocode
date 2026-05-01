/*
 * XREFs of ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180070694
 * Callers:
 *     HamRpcSrvServicingQueryActiveAppsInPackage @ 0x180073730 (HamRpcSrvServicingQueryActiveAppsInPackage.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180001BA8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800070B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800101F4 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180010270 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18003D7B4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800788BC (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800789A8 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180078BEC (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007B044 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x180083938 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 */

__int64 __fastcall HamSrvQueryActiveAppsInPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_CLIENT_PACKAGE_CONTEXT *a2,
        int a3,
        unsigned __int16 ***a4,
        unsigned int *a5)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v6; // r14
  PVOID *v8; // rdi
  __int64 v9; // r15
  int AumidFromKey; // esi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v11; // rax
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  bool v16; // r14
  int v17; // esi
  char *Heap; // rax
  char *v19; // r14
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v29; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v30; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_RC_TREE_NODE *v31; // [rsp+60h] [rbp-A0h]
  unsigned __int16 ***v32; // [rsp+68h] [rbp-98h]
  unsigned int *v33; // [rsp+70h] [rbp-90h]
  char v34[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+110h] [rbp+10h] BYREF
  char v36[272]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a2;
  v33 = a5;
  v32 = a4;
  v29 = a2;
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BE9CE,
      0LL,
      0LL,
      2u,
      &v35);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v34);
  v8 = 0LL;
  v28 = 0;
  v9 = 0LL;
  P = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v11 = HampClientPkgFindByPackageHandle(a1, (unsigned __int64)v6);
    v30 = v11;
    if ( v11 )
    {
      v31 = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)v11 + 7);
      for ( i = HamRcNodeGetFirst(v31, 1); ; i = HamRcNodeGetSuccessor(v31, v13) )
      {
        v13 = i;
        if ( !i )
          break;
        v14 = *((_QWORD *)i + 11);
        HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v14);
        v15 = *(_QWORD *)(v14 + 328);
        if ( v15 )
          v16 = *(_QWORD *)(v15 + 792) == (_QWORD)v13;
        else
          v16 = 0;
        HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v14);
        if ( !v16 )
        {
          if ( (a3 & 2) == 0
            || ((HampAppAcquireLockShared(v13), (*((_BYTE *)v13 + 620) & 0xE0) == 0)
             || (*((_DWORD *)v13 + 154) & 0xE000000) == 0
              ? (v17 = 1)
              : (v17 = 0),
                HampAppReleaseLockShared(v13),
                v17) )
          {
            if ( (a3 & 1) == 0 || HampAppGetHasStartedWindow(v13) )
            {
              v27 = 130;
              AumidFromKey = PsmGetAumidFromKey((char *)v13 + 96, &v27, v36);
              if ( AumidFromKey < 0 )
              {
                v19 = 0LL;
                goto LABEL_30;
              }
              Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v27);
              v19 = Heap;
              if ( !Heap )
              {
                v8 = (PVOID *)P;
                AumidFromKey = -1073741801;
                goto LABEL_30;
              }
              StringCchCopyW(Heap, v27, v36);
              v20 = RmpArrayGrow<unsigned short *>(&P, &v28, (unsigned int)(v9 + 1));
              v8 = (PVOID *)P;
              AumidFromKey = v20;
              if ( v20 < 0 )
                goto LABEL_30;
              *((_QWORD *)P + v9) = v19;
              v9 = (unsigned int)(v9 + 1);
            }
          }
        }
      }
      AumidFromKey = 0;
      v19 = 0LL;
      *v32 = (unsigned __int16 **)v8;
      v8 = 0LL;
      v13 = 0LL;
      P = 0LL;
      *v33 = v9;
LABEL_30:
      if ( v8 )
      {
        if ( (_DWORD)v9 )
        {
          v21 = (unsigned int)v9;
          do
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v8++);
            --v21;
          }
          while ( v21 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      }
      CemRcObjectDereference(v30);
      if ( v13 )
        CemRcObjectDereference(v13);
      if ( v19 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
      v6 = v29;
    }
    else
    {
      AumidFromKey = -1073741275;
    }
  }
  else
  {
    AumidFromKey = -1073741583;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v28 = v9;
    LODWORD(v29) = a3;
    v30 = v6;
    LODWORD(P) = AumidFromKey;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v22,
      byte_1800BFAB0,
      v23,
      v24,
      (__int64)&P,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28);
  }
  return (unsigned int)AumidFromKey;
}
