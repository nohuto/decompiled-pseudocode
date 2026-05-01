/*
 * XREFs of ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800368C4
 * Callers:
 *     HamRpcSrvServicingQueryActiveAppsInPackage @ 0x1800371C0 (HamRpcSrvServicingQueryActiveAppsInPackage.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CemRcTableGetFirst @ 0x180016F78 (CemRcTableGetFirst.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C40 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180036230 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180036C28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180037670 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800376A8 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007EC0C (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007EE70 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007F258 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x180082178 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
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
  unsigned int v9; // r15d
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v10; // rax
  __int64 First; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rbx
  int AumidFromKey; // esi
  char *v14; // r14
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // rsi
  __int64 v20; // rax
  bool v21; // r14
  int v22; // esi
  char *Heap; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r12
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v30; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v31; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_RC_TREE_NODE *v32; // [rsp+60h] [rbp-A0h]
  unsigned __int16 ***v33; // [rsp+68h] [rbp-98h]
  unsigned int *v34; // [rsp+70h] [rbp-90h]
  char v35[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+110h] [rbp+10h] BYREF
  char v37[272]; // [rsp+130h] [rbp+30h] BYREF

  v33 = a4;
  v6 = a2;
  v30 = a2;
  v34 = a5;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C08B9,
      0LL,
      0LL,
      2u,
      &v36);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v35);
  P = 0LL;
  v29 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( (a3 & 3) == a3 )
  {
    v10 = HampClientPkgFindByPackageHandle(a1, (__int64)v6);
    v31 = v10;
    if ( v10 )
    {
      v32 = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)v10 + 7);
      First = CemRcTableGetFirst((__int64)v32 + 40);
      if ( First )
      {
        Successor = (struct _HAM_RC_TREE_NODE *)First;
        do
        {
          v19 = *((_QWORD *)Successor + 11);
          HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v19);
          v20 = *(_QWORD *)(v19 + 328);
          if ( v20 )
            v21 = *(_QWORD *)(v20 + 792) == (_QWORD)Successor;
          else
            v21 = 0;
          HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v19);
          if ( !v21 )
          {
            if ( (a3 & 2) == 0 )
              goto LABEL_46;
            HampAppAcquireLockShared(Successor);
            if ( (*((_BYTE *)Successor + 620) & 0xE0) == 0 || (v22 = 0, (*((_DWORD *)Successor + 154) & 0xE000000) == 0) )
              v22 = 1;
            HampAppReleaseLockShared(Successor);
            if ( v22 )
            {
LABEL_46:
              if ( (a3 & 1) == 0 || HampAppGetHasStartedWindow(Successor) )
              {
                v28 = 130;
                AumidFromKey = PsmGetAumidFromKey((char *)Successor + 96, &v28, v37);
                if ( AumidFromKey < 0 )
                  goto LABEL_8;
                Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v28);
                v14 = Heap;
                if ( !Heap )
                {
                  v8 = (PVOID *)P;
                  AumidFromKey = -1073741801;
                  goto LABEL_9;
                }
                StringCchCopyW(Heap, v28, v37);
                v24 = RmpArrayGrow<unsigned short *>(&P, &v29, v9 + 1);
                v8 = (PVOID *)P;
                AumidFromKey = v24;
                if ( v24 < 0 )
                  goto LABEL_9;
                v25 = v9++;
                *((_QWORD *)P + v25) = v14;
              }
            }
          }
          Successor = HamRcNodeGetSuccessor(v32, Successor);
        }
        while ( Successor );
      }
      Successor = 0LL;
      P = 0LL;
      AumidFromKey = 0;
      *v33 = (unsigned __int16 **)v8;
      v8 = 0LL;
      *v34 = v9;
LABEL_8:
      v14 = 0LL;
LABEL_9:
      if ( v8 )
      {
        if ( v9 )
        {
          v26 = v9;
          do
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v8++);
            --v26;
          }
          while ( v26 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      }
      CemRcObjectDereference(v31);
      if ( Successor )
        CemRcObjectDereference(Successor);
      if ( v14 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      v6 = v30;
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
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v29 = v9;
    LODWORD(v30) = a3;
    v31 = v6;
    LODWORD(P) = AumidFromKey;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_1800C1994,
      v16,
      v17,
      (__int64)&P,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29);
  }
  return (unsigned int)AumidFromKey;
}
