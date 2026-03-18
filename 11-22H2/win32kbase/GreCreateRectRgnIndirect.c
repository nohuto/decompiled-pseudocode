/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C003F2F0
 * Callers:
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C003EDB0 (SetOrCreateRectRgnIndirectPublic.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C004D400 (NtUserGetDC.c)
 *     CreateMonitorRegionForDpi @ 0x1C0059CD0 (CreateMonitorRegionForDpi.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     UserValidateCopyRgn @ 0x1C005C980 (UserValidateCopyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C005CAC0 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C005CB10 (CreateEmptyRgn.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0002D18 (-Allocate@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C000B8B0 (-Create@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003F180 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgDecProcessHandleCount @ 0x1C003F938 (HmgDecProcessHandleCount.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C003FBE0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C0040000 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0041730 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0045AA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C007C3E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008F2C4 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0091344 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFACC (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A68 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BC08 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  struct _RECTL *v1; // r14
  struct HOBJ__ *v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *v7; // r13
  __int64 *v8; // rsi
  __int64 v9; // rdi
  ULONG v10; // r8d
  ULONG ClearBits; // eax
  ULONG v12; // r12d
  ULONG v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rsi
  char *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // rax
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  struct HOBJ__ *v25; // rsi
  unsigned __int64 v26; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r15
  struct _ERESOURCE *v34; // r14
  __int64 v35; // r14
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r12d
  __int64 v39; // r15
  struct _W32PROCESS *W32ProcessFromId; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // r8
  _DWORD *v45; // rcx
  GdiHandleManager *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rbp
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // r8d
  struct _ERESOURCE *v55; // rcx
  __int64 v56; // rcx
  void *v57; // r8
  void *v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rbx
  _QWORD *v61; // rcx
  int v62; // eax
  unsigned int *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r9
  char EtwGdiHandleType; // al
  int v68; // ecx
  int v69; // r8d
  int v70; // r8d
  int v71; // r9d
  PVOID Object; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v73; // [rsp+48h] [rbp-80h] BYREF
  __int64 v74; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v75; // [rsp+58h] [rbp-70h] BYREF
  __int64 v76; // [rsp+60h] [rbp-68h] BYREF
  __int64 v77; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v78[32]; // [rsp+70h] [rbp-58h] BYREF
  char *v79; // [rsp+90h] [rbp-38h]

  v1 = a1;
  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (LOBYTE(a1) = (a1->top & 0xF8000000) != 0, ((unsigned __int8)a1 & ((v1->top & 0xF8000000) != -134217728)) != 0) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL) + 56LL);
  if ( !v4 )
  {
LABEL_65:
    EngSetLastError(8u);
    return v3;
  }
  if ( *(_BYTE *)(v4 + 36) )
  {
    v17 = (char *)ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(v4 + 24));
    goto LABEL_18;
  }
  v5 = *(_QWORD *)(v4 + 16);
  v6 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  v7 = *(_QWORD **)v4;
  if ( *(_QWORD *)v4 == v4 )
    goto LABEL_56;
  do
  {
    v8 = (__int64 *)v7[4];
    v9 = *v8;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    v10 = 0;
    if ( *((_DWORD *)v8 + 8) < 0x100u )
      v10 = *((_DWORD *)v8 + 8);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(v8[3] ^ v8[2]), 1u, v10);
    v12 = ClearBits;
    if ( ClearBits == -1 )
    {
LABEL_50:
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_51;
    }
    v13 = ClearBits;
    v14 = *((_DWORD *)v8 + 9);
    v15 = v13 >> 5;
    if ( v14 >= 8 || v15 < v14 )
    {
      v75 = v8 + 1;
      LODWORD(v74) = v15 << 12;
    }
    else
    {
      v56 = v15 << 12;
      v57 = (void *)(v56 + (v8[1] ^ v8[2]));
      v74 = v56;
      v75 = v8 + 1;
      Object = v57;
      if ( (int)MmCommitSessionMappedView(v57, 4096LL) < 0 )
        goto LABEL_50;
      memset(Object, 0, 0x1000uLL);
      ++*((_DWORD *)v8 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(v8[2] ^ v8[3]), v12);
    RtlSetBit((PRTL_BITMAP)(v8[2] ^ v8[3]), v12);
    if ( ++*((_DWORD *)v8 + 8) >= 0x100u )
      *((_DWORD *)v8 + 8) = 0;
    v16 = (unsigned int)v74 + (*v75 ^ v8[2]);
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    v17 = (char *)(v16 + ((unsigned __int8)(v12 & 0x1F) << 7));
    if ( v17 )
    {
      ExReleasePushLockSharedEx(v5, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_18;
    }
LABEL_51:
    v7 = (_QWORD *)*v7;
  }
  while ( v7 != (_QWORD *)v4 );
  v6 = 0LL;
LABEL_56:
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v58 = NSInstrumentation::CSectionEntry<32768,128>::Create();
  v59 = v58;
  if ( v58 )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(*((__int64 **)v58 + 4));
    if ( v6 )
    {
      v60 = *(_QWORD *)(v4 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v60, 0LL);
      v61 = *(_QWORD **)(v4 + 8);
      if ( *v61 != v4 )
        __fastfail(3u);
      v59[1] = v61;
      *v59 = v4;
      *v61 = v59;
      *(_DWORD *)(v4 + 32) += 256;
      *(_QWORD *)(v4 + 8) = v59;
      ExReleasePushLockExclusiveEx(v60, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v59);
      ExFreePoolWithTag(v59, 0);
    }
  }
  v17 = (char *)v6;
LABEL_18:
  if ( !v17 )
    goto LABEL_65;
  v19 = SGDGetSessionState(v18);
  v20 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
          *(NSInstrumentation::CLeakTrackingAllocator **)(v19 + 24),
          *(void **)(*(_QWORD *)(v19 + 24) + 6376LL));
  *((_QWORD *)v17 + 4) = v20;
  if ( !v20 )
  {
    REGION::vDeleteREGION(v17);
    goto LABEL_65;
  }
  *((_DWORD *)v17 + 12) = 16;
  *((_DWORD *)v17 + 13) = 1;
  *(_OWORD *)(v17 + 56) = 0LL;
  *v20 = 0;
  v20[1] = 0x80000000;
  *((_QWORD *)v20 + 1) = 0x7FFFFFFFLL;
  *((_QWORD *)v17 + 5) = v20 + 4;
  *((_DWORD *)v17 + 6) = 112;
  *((_QWORD *)v17 + 12) = v17 + 88;
  *((_QWORD *)v17 + 11) = v17 + 88;
  *((_QWORD *)v17 + 9) = 0LL;
  *((_DWORD *)v17 + 20) = 0;
  left = v1->left;
  right = v1->right;
  if ( v1->left > right )
  {
    v1->left = right;
    v1->right = left;
  }
  top = v1->top;
  bottom = v1->bottom;
  if ( top > bottom )
  {
    v1->top = bottom;
    v1->bottom = top;
  }
  Object = v17 + 24;
  RGNCOREOBJ::vSet((struct _RECTL **)&Object, v1);
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v78);
  if ( v79 )
    goto LABEL_79;
  v25 = 0LL;
  v26 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v29 = *ThreadWin32Thread;
    if ( v29 )
    {
      v28 = *(_QWORD *)(v29 + 72);
      if ( v28 )
        LODWORD(v26) = *(_DWORD *)(v28 + 8);
    }
  }
  v30 = *(_QWORD *)(SGDGetSessionState(v28) + 24);
  v33 = *(_QWORD *)(SGDGetSessionState(v31) + 24);
  v34 = *(struct _ERESOURCE **)(v33 + 1912);
  if ( v34 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v34);
  }
  v35 = *(_QWORD *)(v33 + 1912);
  v36 = *(_QWORD *)(SGDGetSessionState(v32) + 24);
  if ( *(_DWORD *)(v36 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v36,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v37,
      v35,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  v38 = 1;
  v39 = *(_QWORD *)(SGDGetSessionState(v36) + 24);
  if ( !(_DWORD)v26 || (_DWORD)v26 == -2147483630 )
    goto LABEL_41;
  Object = 0LL;
  W32ProcessFromId = GetW32ProcessFromId(v26, (struct _EPROCESS **)&Object);
  if ( W32ProcessFromId )
  {
    GreAcquireHmgrSemaphore();
    v44 = *((unsigned int *)W32ProcessFromId + 15);
    if ( (int)v44 >= *(_DWORD *)(v39 + 2376) )
    {
      v62 = *((_DWORD *)W32ProcessFromId + 72);
      v38 = 0;
      if ( (v62 & 0x20) == 0 )
      {
        *((_DWORD *)W32ProcessFromId + 72) = v62 | 0x20;
        if ( (unsigned int)dword_1C02883D8 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C02883D8, 0x400000000000LL) )
          {
            v76 = 0x1000000LL;
            LODWORD(v74) = v44;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1C02883D8,
              (unsigned int)&unk_1C0256EF2,
              v44,
              v43,
              (__int64)&v74,
              (__int64)&v76);
          }
        }
      }
    }
    else
    {
      HmgpIncProcessHandleCountEx(W32ProcessFromId);
    }
    GreReleaseHmgrSemaphore(v42, v41, v44, v43);
  }
  v45 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v38 )
  {
LABEL_41:
    v46 = *(GdiHandleManager **)(v30 + 8008);
    v73 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v46, &v73) )
    {
      v25 = ENTRYOBJ::hSetup((struct OBJECT *)v17, 4u, 1u, v73);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
      {
        v63 = (unsigned int *)SGDGetUserSessionState(v45, v47, v48, v49);
        LOBYTE(v64) = 4;
        EtwGdiHandleType = GetEtwGdiHandleType(v64, v65, *v63, v66);
        McTemplateK0pqqq_EtwWriteTransfer(
          v68,
          (unsigned int)&GdiCreateHandle,
          v69,
          (_DWORD)v25,
          EtwGdiHandleType,
          v69,
          v26);
      }
    }
    else
    {
      HmgDecProcessHandleCount((unsigned int)v26);
      if ( !*(_BYTE *)(v30 + 8096) )
      {
        v45 = *(_DWORD **)(v30 + 8008);
        if ( v45[1] >= v45[2] )
        {
          *(_BYTE *)(v30 + 8096) = 1;
          if ( (unsigned int)dword_1C02883D8 > 5 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C02883D8, 0x400000000000LL) )
            {
              LODWORD(v75) = *(_DWORD *)(v30 + 1904);
              v77 = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                (unsigned int)&dword_1C02883D8,
                (unsigned int)&unk_1C0256EA3,
                v70,
                v71,
                (__int64)&v75,
                (__int64)&v77);
            }
          }
        }
      }
    }
  }
  v50 = *(_QWORD *)(SGDGetSessionState(v45) + 24);
  v51 = *(_QWORD *)(v50 + 1912);
  v53 = *(_QWORD *)(SGDGetSessionState(v52) + 24);
  if ( *(_DWORD *)(v53 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v53, (unsigned int)&LockRelease, v54, v51, (__int64)L"GreBaseGlobals.hsemHmgr");
  v55 = *(struct _ERESOURCE **)(v50 + 1912);
  if ( v55 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v55);
    PsLeavePriorityRegion();
  }
  v3 = v25;
  if ( !v25 )
  {
LABEL_79:
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v78);
    REGION::vDeleteREGION(v17);
  }
  else
  {
    v79 = v17;
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v78);
  }
  return v3;
}
