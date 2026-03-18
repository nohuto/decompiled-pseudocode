/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001CE0 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ @ 0x1C0001E9C (-AllocatePresentToHwQueueParams@DXGGLOBAL@@QEAAPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00145E8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0045804 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01588F8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C015A564 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C015A7CC (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A878 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01A52B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01B631C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C02DE428 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C030E37C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1C03BDC58 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1)
{
  char v2; // r12
  int PairingAdapters; // eax
  __int64 v4; // rdi
  DXGADAPTER *v5; // rbx
  DXGSESSIONMGR *v6; // rsi
  unsigned int v7; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  int v9; // eax
  ADAPTER_DISPLAY *v10; // r14
  struct SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v12; // r9
  SESSION_VIEW *v13; // rsi
  __int64 v14; // rax
  struct DISPLAY_SOURCE *v15; // rbx
  ADAPTER_DISPLAY *v16; // rax
  DXGDEVICE *v17; // rsi
  __int64 v18; // rbx
  DXGGLOBAL *Global; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  struct DXGDEVICE *v21; // r14
  __int64 v22; // r9
  __int64 v23; // r9
  int v24; // eax
  D3DKMT_HANDLE v25; // ecx
  DXGDEVICE *v26; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // esi
  unsigned int v31; // r14d
  ADAPTER_DISPLAY *v32; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v33; // r12d
  __int64 v34; // rdi
  struct tagRECT *v35; // rbx
  int v36; // eax
  struct tagRECT *v37; // r8
  char v38; // r14
  PSLIST_ENTRY v39; // r14
  int v40; // ecx
  int v41; // eax
  int Next; // eax
  int v43; // ecx
  unsigned int v44; // eax
  struct tagRECT v45; // xmm1
  int v46; // eax
  unsigned int v47; // ebx
  int v48; // eax
  struct DXGCONTEXT *v49; // rsi
  struct DXGDEVICE *v50; // rcx
  struct DXGGLOBAL *v51; // rax
  union _SLIST_HEADER *v52; // rbx
  unsigned int v53; // ebx
  int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned __int64 v58; // rax
  const wchar_t *v59; // r9
  __int64 v60; // r9
  LONG right; // ecx
  unsigned int v62; // edx
  __int64 v63; // rcx
  int v64; // eax
  unsigned int v65; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v66; // r8d
  int CddShadowPitch; // eax
  __int64 v68; // rdx
  ADAPTER_DISPLAY *v69; // rbx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  int v73; // eax
  const wchar_t *v74; // r9
  LONG v75; // eax
  unsigned int v76; // r13d
  unsigned int v77; // r12d
  ADAPTER_DISPLAY *v78; // r14
  int v79; // edi
  unsigned __int8 *v80; // rsi
  int v81; // ebx
  int v82; // eax
  __int64 v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rsi
  struct DXGDEVICE *v87; // rbx
  __int64 v88; // rax
  __int64 v89; // r9
  char *v90; // rdx
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // r9
  char *v94; // rdx
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // r9
  char *v98; // rdx
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v101; // eax
  __int64 v102; // [rsp+30h] [rbp-D8h]
  __int64 v103; // [rsp+30h] [rbp-D8h]
  __int64 v104; // [rsp+38h] [rbp-D0h]
  __int64 hAllocation; // [rsp+38h] [rbp-D0h]
  struct tagRECT *v106; // [rsp+40h] [rbp-C8h]
  struct tagRECT *v107; // [rsp+40h] [rbp-C8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v108[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v109; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v110; // [rsp+68h] [rbp-A0h]
  unsigned int v111; // [rsp+6Ch] [rbp-9Ch]
  __int64 v112; // [rsp+70h] [rbp-98h]
  struct tagRECT *v113; // [rsp+78h] [rbp-90h]
  DXGDEVICE *v114; // [rsp+80h] [rbp-88h]
  unsigned int v115; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v116; // [rsp+8Ch] [rbp-7Ch] BYREF
  ADAPTER_DISPLAY *v117; // [rsp+90h] [rbp-78h]
  struct DXGDEVICE *v118; // [rsp+98h] [rbp-70h]
  unsigned int v119; // [rsp+A0h] [rbp-68h]
  PVOID v120; // [rsp+A8h] [rbp-60h]
  PSLIST_ENTRY ListEntry; // [rsp+B0h] [rbp-58h]
  int v122; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v123; // [rsp+C0h] [rbp-48h]
  PVOID P; // [rsp+C8h] [rbp-40h]
  DXGADAPTER *v125; // [rsp+D0h] [rbp-38h] BYREF
  DXGDEVICE *v126; // [rsp+D8h] [rbp-30h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E0h] [rbp-28h]
  _D3DKMT_UNLOCK v128; // [rsp+E8h] [rbp-20h] BYREF
  _D3DKMT_LOCK v129; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v130[8]; // [rsp+128h] [rbp+20h] BYREF
  ADAPTER_RENDER **v131; // [rsp+168h] [rbp+60h]
  SESSION_VIEW *v132; // [rsp+170h] [rbp+68h]
  struct _LUID v133; // [rsp+178h] [rbp+70h] BYREF
  char v134[8]; // [rsp+180h] [rbp+78h] BYREF
  __int64 v135; // [rsp+188h] [rbp+80h]
  char v136; // [rsp+190h] [rbp+88h]
  char v137[8]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v138; // [rsp+1A0h] [rbp+98h]
  char v139; // [rsp+1A8h] [rbp+A0h]
  char v140[8]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v141; // [rsp+1B8h] [rbp+B0h]
  char v142; // [rsp+1C0h] [rbp+B8h]
  char v143[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v144; // [rsp+1D0h] [rbp+C8h]
  char v145; // [rsp+1D8h] [rbp+D0h]
  _QWORD v146[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  _QWORD v147[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  _QWORD v148[2]; // [rsp+200h] [rbp+F8h] BYREF
  unsigned __int64 v149; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v150[16]; // [rsp+218h] [rbp+110h] BYREF
  _QWORD v151[7]; // [rsp+228h] [rbp+120h] BYREF
  struct tagRECT v152; // [rsp+260h] [rbp+158h] BYREF
  struct tagRECT v153; // [rsp+270h] [rbp+168h] BYREF
  char v154[8]; // [rsp+288h] [rbp+180h] BYREF
  char v155[64]; // [rsp+290h] [rbp+188h] BYREF
  char v156[88]; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v157[8]; // [rsp+328h] [rbp+220h] BYREF
  char v158[64]; // [rsp+330h] [rbp+228h] BYREF
  char v159[88]; // [rsp+370h] [rbp+268h] BYREF
  char v160[8]; // [rsp+3C8h] [rbp+2C0h] BYREF
  char v161[64]; // [rsp+3D0h] [rbp+2C8h] BYREF
  char v162[88]; // [rsp+410h] [rbp+308h] BYREF
  char v163[8]; // [rsp+468h] [rbp+360h] BYREF
  char v164[64]; // [rsp+470h] [rbp+368h] BYREF
  char v165[88]; // [rsp+4B0h] [rbp+3A8h] BYREF
  _BYTE v166[64]; // [rsp+508h] [rbp+400h] BYREF

  v125 = 0LL;
  v2 = 0;
  BYTE1(v108[0]) = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCddPresentOnScreen receives NULL pPresentOnScreen, returning 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 > 3u )
  {
    WdLogSingleEntry2(4LL, *(int *)a1, -1073741811LL);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *((struct DXGADAPTER **)a1 + 1),
                      *((_DWORD *)a1 + 4),
                      0LL,
                      0LL,
                      &v125,
                      &v149,
                      0);
  v4 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, *((_QWORD *)a1 + 1), *((unsigned int *)a1 + 4), PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound display adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddPresentOnScree"
                "n (ntStatus = 0x%I64x).",
      *((_QWORD *)a1 + 1),
      *((unsigned int *)a1 + 4),
      v4,
      0LL,
      0LL);
    return (unsigned int)v4;
  }
  v5 = v125;
  if ( !v125 )
  {
    WdLogSingleEntry1(1LL, 1006LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1006LL, 0LL, 0LL, 0LL, 0LL);
  }
  v133 = *(struct _LUID *)((char *)v5 + 404);
  DXGADAPTER::ReleaseReference(v5);
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v6
    || (v7 = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, v7)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v101 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v101,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  BYTE2(v108[0]) = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)((char *)v108 + 2), 0);
  v10 = (ADAPTER_DISPLAY *)v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      (__int64)v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              &v133,
                              *((_DWORD *)a1 + 4));
    v132 = SessionViewFromSource;
    v13 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      if ( *((_DWORD *)a1 + 8) == *((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6)
        && *((_DWORD *)a1 + 9) == *((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7) )
      {
        v14 = *((unsigned int *)a1 + 19);
        if ( (unsigned int)v14 > 4 )
        {
          v58 = 16 * v14;
          if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
            v58 = -1LL;
          v113 = (struct tagRECT *)operator new[](v58, 0x4B677844u, 256LL, v12);
          if ( !v113 )
          {
            v53 = -1073741801;
            WdLogSingleEntry2(6LL, *((unsigned int *)a1 + 19), -1073741801LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate buffer for destination rectangle list for 0x%I64x RECTs, returning 0x%I64x.",
              *((unsigned int *)a1 + 19),
              -1073741801LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_70;
          }
        }
        else
        {
          v113 = (struct tagRECT *)v166;
        }
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v13);
        v15 = PrimaryDisplaySource;
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v16 = (ADAPTER_DISPLAY *)*((_QWORD *)v15 + 1);
            v109 = 0LL;
            v118 = 0LL;
            v152 = 0LL;
            P = 0LL;
            memset(&v129, 0, sizeof(v129));
            v115 = 0;
            v116 = 0;
            v17 = (DXGDEVICE *)*((_QWORD *)v16 + 2);
            LOBYTE(v108[0]) = 0;
            v117 = v16;
            v126 = v17;
            v125 = v17;
            v128 = 0LL;
            if ( !v17 )
            {
              WdLogSingleEntry1(1LL, 1104LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter != NULL",
                1104LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( !*((_QWORD *)v17 + 349) )
            {
              WdLogSingleEntry1(1LL, 1105LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
                1105LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v18 = *((unsigned int *)v15 + 4);
            v111 = v18;
            Global = DXGGLOBAL_GetGlobal();
            ListEntry = (PSLIST_ENTRY)DXGGLOBAL::AllocatePresentToHwQueueParams(Global);
            if ( !ListEntry )
            {
              v53 = -1073741801;
              goto LABEL_70;
            }
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                     (struct _LUID *)((char *)v17 + 404),
                                                     0);
            v10 = (ADAPTER_DISPLAY *)CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession >= 0 )
              break;
            WdLogSingleEntry2(2LL, v17, CddDeviceAndContextForCurrentSession);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
              (__int64)v17,
              (__int64)v10,
              0LL,
              0LL,
              0LL);
LABEL_62:
            v51 = DXGGLOBAL_GetGlobal();
            v52 = (union _SLIST_HEADER *)((char *)v51 + 1264);
            ++*((_DWORD *)v51 + 323);
            if ( ExQueryDepthSList((PSLIST_HEADER)v51 + 79) >= *((_WORD *)v51 + 640) )
            {
              Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v52[3].Region;
              ++LODWORD(v52[2].Alignment);
              Region(ListEntry, v52);
            }
            else
            {
              ExpInterlockedPushEntrySList(v52, ListEntry);
            }
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v132, PrimaryDisplaySource);
            v15 = PrimaryDisplaySource;
            if ( !PrimaryDisplaySource )
            {
              v2 = BYTE1(v108[0]);
              goto LABEL_66;
            }
          }
          v21 = v118;
          v114 = v118;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
            (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v150,
            v118);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v151,
            &v109,
            1u,
            v22,
            1);
          v131 = (ADAPTER_RENDER **)((char *)v21 + 16);
          v135 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL);
          v136 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v134);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v154, (__int64)v21, 1, v23, 0);
          v120 = P;
          if ( !v151[0] )
          {
            LODWORD(v10) = -1073741801;
            WdLogSingleEntry1(6LL, -1073741801LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Out of memory - could not initialize context array lock exclusive, returning 0x%I64x.",
              -1073741801LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_54;
          }
          v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v154, 0LL);
          v10 = (ADAPTER_DISPLAY *)v24;
          if ( v24 < 0 )
          {
            v17 = v114;
            WdLogSingleEntry2(2LL, v114, v24);
            v59 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
            v106 = 0LL;
            v104 = 0LL;
            v102 = (__int64)v10;
            goto LABEL_90;
          }
          v10 = v117;
          ADAPTER_DISPLAY::GetCddAllocationHandles(v117, v18, &v115, &v116);
          v110 = v115;
          if ( v115 )
          {
            v25 = v116;
            LODWORD(v112) = v116;
            if ( v116 )
            {
LABEL_25:
              v26 = v114;
              v128.NumAllocations = 1;
              v129.hDevice = *((_DWORD *)v114 + 109);
              v129.hAllocation = v25;
              v128.hDevice = *((_DWORD *)v114 + 109);
              v128.phAllocations = &v129.hAllocation;
              ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v117, v18);
              v123 = v18;
              v152 = *(struct tagRECT *)(4000 * v18 + *((_QWORD *)v117 + 16) + 688);
              if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v117, (unsigned int)v18, 1LL) - 2) & 0xFFFFFFFD) == 0 )
              {
                right = v152.right;
                v152.right = v152.bottom;
                v152.bottom = right;
              }
              CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v117, (unsigned int)v18, 0LL);
              v28 = *(int *)a1;
              v108[1] = CurrentOrientation;
              if ( (_DWORD)v28 == 1 )
              {
                if ( !*((_QWORD *)v17 + 350) && ADAPTER_DISPLAY::IsIdenticalMode(v117, (unsigned int)v18) )
                {
                  v37 = v113;
                  v62 = 0;
                  if ( !*((_DWORD *)a1 + 19) )
                  {
                    v38 = 0;
LABEL_36:
                    if ( !*((_QWORD *)v17 + 350) )
                    {
                      memset(v130, 0, sizeof(v130));
                      LODWORD(v130[0]) = v18;
                      LODWORD(v130[2]) = 4;
                      if ( v38 )
                      {
                        v130[1] = v129.pData;
                        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v117, v18);
                      }
                      else
                      {
                        v130[1] = *((_QWORD *)a1 + 3);
                        CddShadowPitch = *((_DWORD *)a1 + 10);
                      }
                      HIDWORD(v130[2]) = CddShadowPitch;
                      v68 = (unsigned int)v18;
                      LODWORD(v130[3]) = 0;
                      v69 = v117;
                      v70 = ADAPTER_DISPLAY::GetCurrentOrientation(v117, v68, 1LL);
                      v130[4] = 0LL;
                      v130[3] = (v70 != 1) | (unsigned __int64)(v130[3] & 0xFFFFFFFE);
                      LODWORD(v130[5]) = *((_DWORD *)a1 + 19);
                      v130[6] = v113;
                      v71 = *((_QWORD *)v69 + 56);
                      if ( v71 )
                      {
                        if ( LODWORD(v130[0]) < *(_DWORD *)v71 && (v72 = *(_QWORD *)(v71 + 8)) != 0 )
                          LODWORD(v10) = BLTQUEUE::PresentDisplayOnly(v72 + 2920LL * LODWORD(v130[0]), v130, 0LL, 1LL);
                        else
                          LODWORD(v10) = -1073741811;
                        if ( (int)v10 >= 0 )
                        {
LABEL_45:
                          if ( *(_DWORD *)a1 != 2 )
                          {
LABEL_46:
                            if ( DXGADAPTER::UsingSetTimingsFromVidPn(v17) )
                            {
                              v47 = v111;
                              if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                                    *((ADAPTER_DISPLAY **)v17 + 349),
                                                    v111) )
                              {
                                if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v17 + 349), v47) )
                                {
                                  if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v17 + 349), v47) )
                                  {
                                    v48 = ADAPTER_DISPLAY::PresentCddPrimary(
                                            *((ADAPTER_DISPLAY **)v17 + 349),
                                            v109,
                                            v47,
                                            (struct COREDEVICEACCESS *)v154);
                                    if ( v48 < 0 )
                                    {
                                      v83 = v48;
                                      WdLogSingleEntry3(2LL, v109, v48, 1587LL);
                                      DxgkLogInternalTriageEvent(
                                        0LL,
                                        0x40000,
                                        -1,
                                        (__int64)L"PresentFromCdd failed to present the newly created Cdd Primary (Status = 0x%I64x).",
                                        (__int64)v109,
                                        v83,
                                        1587LL,
                                        0LL,
                                        0LL);
                                    }
                                  }
                                }
                              }
                            }
                            BYTE1(v108[0]) = 1;
                            goto LABEL_53;
                          }
                          v73 = DXGDEVICE::Lock(v114, &v129, (struct COREDEVICEACCESS *)v154);
                          v10 = (ADAPTER_DISPLAY *)v73;
                          LODWORD(v112) = v73;
                          if ( v73 >= 0 )
                          {
                            v75 = *((_DWORD *)a1 + 8);
                            v153.left = 0;
                            v153.top = 0;
                            v153.right = v75;
                            v153.bottom = *((_DWORD *)a1 + 9);
                            LOBYTE(v108[0]) = 1;
                            if ( v108[1] != D3DKMDT_VPPR_IDENTITY )
                            {
                              if ( v108[1] == D3DKMDT_VPPR_ROTATE90 )
                              {
                                v108[1] = D3DKMDT_VPPR_ROTATE270;
                              }
                              else if ( v108[1] == D3DKMDT_VPPR_ROTATE270 )
                              {
                                v108[1] = D3DKMDT_VPPR_ROTATE90;
                              }
                            }
                            v119 = 0;
                            if ( *((_DWORD *)a1 + 19) )
                            {
                              v76 = v111;
                              v77 = v119;
                              v78 = v117;
                              do
                              {
                                v79 = *((_DWORD *)a1 + 10);
                                v80 = (unsigned __int8 *)*((_QWORD *)a1 + 3);
                                v81 = ADAPTER_DISPLAY::GetCddShadowPitch(v78, v76);
                                v82 = ADAPTER_DISPLAY::GetCddShadowPitch(v78, v76);
                                DxgkpBlitA8R8R8G8(
                                  (unsigned __int8 *)v129.pData + 4 * v152.left + (unsigned int)(v152.top * v82),
                                  v152.right - v152.left,
                                  v152.bottom - v152.top,
                                  v81,
                                  v108[1],
                                  v80,
                                  v79,
                                  &v153,
                                  &v113[v77],
                                  &v113[v77]);
                                ++v77;
                              }
                              while ( v77 < *((_DWORD *)a1 + 19) );
                              LODWORD(v10) = v112;
                              v17 = v126;
                            }
                            goto LABEL_46;
                          }
                          WdLogSingleEntry4(2LL, v17, v123, v129.hAllocation, v73);
                          v74 = L"Failed to lock CDD shadow allocation on Adapter 0x%I64x VidPn source 0x%I64x (hShadow = "
                                 "0x%I64x) (Status = 0x%I64x).";
                          v107 = (struct tagRECT *)v10;
                          hAllocation = v129.hAllocation;
                          v103 = v123;
LABEL_134:
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)v74,
                            (__int64)v17,
                            v103,
                            hAllocation,
                            (__int64)v107,
                            0LL);
LABEL_53:
                          if ( !LOBYTE(v108[0]) )
                            goto LABEL_54;
                          DXGDEVICE::Unlock(v114, &v128, 0);
                          if ( (int)v10 >= 0 )
                            goto LABEL_54;
                          v84 = v123;
                          WdLogSingleEntry3(2LL, v17, v123, (int)v10);
                          v59 = L"Failed to unlock the CDD shadow allocation on Adapter 0x%I64x VidPnSource 0x%I64x (Status = 0x%I64x).";
                          v106 = 0LL;
                          v104 = (int)v10;
                          v102 = v84;
                          goto LABEL_90;
                        }
                      }
                      else
                      {
                        LODWORD(v10) = -1073741811;
                      }
                      WdLogSingleEntry3(2LL, v17, (int)v10, 1395LL);
                      v74 = L"PresentDisplayOnlyCdd on Adapter 0x%I64x failed (Status = 0x%I64x).";
                      v107 = 0LL;
                      hAllocation = 1395LL;
                      v103 = (int)v10;
                      goto LABEL_134;
                    }
                    v122 = 0;
                    v39 = ListEntry;
                    if ( v120 )
                    {
                      v122 = *((_DWORD *)v120 + 6);
                      ListEntry->Next = (struct _SLIST_ENTRY *)&v122;
                    }
                    v40 = *((_DWORD *)v109 + 6);
                    v39[1].Next = 0LL;
                    *((_DWORD *)&v39->Next + 2) = v40;
                    v41 = *((_DWORD *)a1 + 19);
                    HIDWORD(v39[6].Next) = 0;
                    *((_DWORD *)&v39[4].Next + 2) = v41;
                    Next = (int)v39[6].Next;
                    v39[5].Next = (struct _SLIST_ENTRY *)v37;
                    v43 = *(_DWORD *)a1;
                    if ( !*(_DWORD *)a1 )
                    {
                      LODWORD(v39[6].Next) = Next | 2;
                      v64 = *((_DWORD *)a1 + 5);
                      *((_DWORD *)&v39[1].Next + 3) = 0;
                      HIDWORD(v39[2].Next) = v64;
                      LODWORD(v39[2].Next) = v110;
                      *(struct tagRECT *)((char *)&v39[2] + 8) = v152;
LABEL_44:
                      v46 = DXGCONTEXT::PresentFromCdd(
                              v109,
                              (struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *)v39,
                              v18,
                              (struct COREDEVICEACCESS *)v154,
                              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v134,
                              &v109);
                      v10 = (ADAPTER_DISPLAY *)v46;
                      if ( v46 < 0 )
                      {
                        if ( v46 == -1071775482 )
                        {
                          WdLogSingleEntry3(4LL, v109, -1071775482LL, 1488LL);
                        }
                        else if ( v46 != -1071774910 )
                        {
                          WdLogSingleEntry3(2LL, v109, v46, 1495LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"PresentFromCdd on DxgContext 0x%I64x failed (Status = 0x%I64x).",
                            (__int64)v109,
                            (__int64)v10,
                            1495LL,
                            0LL,
                            0LL);
                        }
                        goto LABEL_53;
                      }
                      goto LABEL_45;
                    }
                    LODWORD(v39[6].Next) = Next | 1;
                    if ( v43 == 1 )
                    {
                      *((_DWORD *)&v39[1].Next + 3) = v112;
                      v44 = v110;
                    }
                    else
                    {
                      v65 = v110;
                      *((_DWORD *)&v39[1].Next + 3) = v110;
                      if ( v43 != 2 )
                      {
                        v66 = v108[1];
                        LODWORD(v39[2].Next) = v65;
                        DxgkpConvertRects(
                          *((_DWORD *)a1 + 8),
                          *((_DWORD *)a1 + 9),
                          v66,
                          &v152,
                          2u,
                          (struct tagRECT *)((char *)a1 + 44),
                          (struct tagRECT *)((char *)a1 + 44));
                        LODWORD(v18) = v111;
                        *(PSLIST_ENTRY)((char *)v39 + 56) = *(PSLIST_ENTRY)((char *)a1 + 44);
                        v45 = *(struct tagRECT *)((char *)a1 + 60);
                        goto LABEL_43;
                      }
                      v44 = v112;
                    }
                    LODWORD(v39[2].Next) = v44;
                    *(struct tagRECT *)((char *)&v39[3] + 8) = v152;
                    v45 = v152;
LABEL_43:
                    *(struct tagRECT *)((char *)&v39[2] + 8) = v45;
                    goto LABEL_44;
                  }
                  do
                  {
                    v63 = v62++;
                    v37[v63] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v63);
                  }
                  while ( v62 < *((_DWORD *)a1 + 19) );
LABEL_77:
                  v38 = v108[0];
                  goto LABEL_36;
                }
                v29 = DXGDEVICE::Lock(v26, &v129, (struct COREDEVICEACCESS *)v154);
                v10 = (ADAPTER_DISPLAY *)v29;
                if ( v29 >= 0 )
                {
                  v119 = 0;
                  LOBYTE(v108[0]) = 1;
                  if ( *((_DWORD *)a1 + 19) )
                  {
                    v30 = v119;
                    v31 = v18;
                    v32 = v117;
                    v33 = v108[1];
                    do
                    {
                      v34 = v30;
                      v35 = (struct tagRECT *)(v34 * 16 + *((_QWORD *)a1 + 10));
                      v36 = ADAPTER_DISPLAY::GetCddShadowPitch(v32, v31);
                      DxgkpBlitA8R8R8G8(
                        *((unsigned __int8 **)a1 + 3),
                        *((_DWORD *)a1 + 8),
                        *((_DWORD *)a1 + 9),
                        *((_DWORD *)a1 + 10),
                        v33,
                        (unsigned __int8 *)v129.pData,
                        v36,
                        &v152,
                        v35,
                        &v113[v34]);
                      ++v30;
                    }
                    while ( v30 < *((_DWORD *)a1 + 19) );
                    v17 = v126;
                    LODWORD(v18) = v31;
                  }
                  if ( *((_QWORD *)v17 + 350) )
                  {
                    DXGDEVICE::Unlock(v114, &v128, 0);
                    v37 = v113;
                    v38 = 0;
                    LOBYTE(v108[0]) = 0;
                    goto LABEL_36;
                  }
                  goto LABEL_76;
                }
                WdLogSingleEntry4(2LL, v17, v123, v129.hAllocation, v29);
                v59 = L"Failed to lock CDD shadow allocation on Adapter 0x%I64x VidPn source 0x%I64x (hShadow = 0x%I64x) ("
                       "Status = 0x%I64x).";
                v106 = (struct tagRECT *)v10;
                v104 = v129.hAllocation;
                v102 = v123;
              }
              else
              {
                if ( *((_QWORD *)v17 + 350) )
                {
                  DxgkpConvertRects(
                    *((_DWORD *)a1 + 8),
                    *((_DWORD *)a1 + 9),
                    CurrentOrientation,
                    &v152,
                    *((_DWORD *)a1 + 19),
                    *((struct tagRECT **)a1 + 10),
                    v113);
LABEL_76:
                  v37 = v113;
                  goto LABEL_77;
                }
                LODWORD(v10) = -1073741637;
                WdLogSingleEntry3(2LL, v17, v28, -1073741637LL);
                v59 = L"Display only adapter 0x%I64x does not support PresentOnScreen operation 0x%I64x, returning 0x%I64x.";
                v106 = 0LL;
                v104 = -1073741637LL;
                v102 = *(int *)a1;
              }
LABEL_90:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v59, (__int64)v17, v102, v104, (__int64)v106, 0LL);
LABEL_54:
              COREACCESS::~COREACCESS((COREACCESS *)v156);
              COREACCESS::~COREACCESS((COREACCESS *)v155);
              if ( v136 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v134);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v151);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v150);
              if ( v120 )
              {
                v85 = _InterlockedDecrement64((volatile signed __int64 *)v120 + 13);
                if ( v85 >= 0 )
                {
                  if ( !v85 )
                  {
                    v86 = *((_QWORD *)P + 2);
                    v87 = *(struct DXGDEVICE **)(v86 + 16);
                    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v146,
                      v87);
                    v88 = *((_QWORD *)v87 + 2);
                    v145 = 0;
                    v144 = *(_QWORD *)(v88 + 16);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v143);
                    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v157, (__int64)v87, 2, v89, 0);
                    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v157, v90);
                    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v87 + 2) + 16LL) + 200LL) != 4 )
                      DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v86, P, (struct COREDEVICEACCESS *)v157);
                    COREACCESS::~COREACCESS((COREACCESS *)v159);
                    COREACCESS::~COREACCESS((COREACCESS *)v158);
                    if ( v145 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v143);
                    if ( v146[0] )
                      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v146);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      v91 = *(_QWORD *)(v86 + 16);
                      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v147,
                        (struct DXGDEVICE *)v91);
                      v92 = *(_QWORD *)(v86 + 16);
                      v139 = 0;
                      v138 = *(_QWORD *)(*(_QWORD *)(v92 + 16) + 16LL);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v137);
                      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v160, v91, 2, v93, 0);
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v160, v94);
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v91 + 16) + 16LL) + 200LL) != 4 )
                        DXGDEVICE::DestroyContext(
                          (DXGDEVICE *)v91,
                          (struct DXGCONTEXT *)v86,
                          (struct COREDEVICEACCESS *)v160);
                      COREACCESS::~COREACCESS((COREACCESS *)v162);
                      COREACCESS::~COREACCESS((COREACCESS *)v161);
                      if ( v139 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v137);
                      if ( v147[0] )
                        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v147);
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v91 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v91 + 16), (struct DXGDEVICE *)v91);
                    }
                  }
                }
                else
                {
                  WdLogSingleEntry1(1LL, 128LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"NewReferenceCount >= 0",
                    128LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v114 = v118;
              }
              v49 = v109;
              if ( v109 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v109 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v95 = *((_QWORD *)v49 + 2);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v148,
                    (struct DXGDEVICE *)v95);
                  v96 = *((_QWORD *)v49 + 2);
                  v142 = 0;
                  v141 = *(_QWORD *)(*(_QWORD *)(v96 + 16) + 16LL);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v163, v95, 2, v97, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v163, v98);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v95 + 16) + 16LL) + 200LL) != 4 )
                    DXGDEVICE::DestroyContext((DXGDEVICE *)v95, v49, (struct COREDEVICEACCESS *)v163);
                  COREACCESS::~COREACCESS((COREACCESS *)v165);
                  COREACCESS::~COREACCESS((COREACCESS *)v164);
                  if ( v142 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
                  if ( v148[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v148);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v95 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v95 + 16), (struct DXGDEVICE *)v95);
                }
                v50 = v118;
              }
              else
              {
                v50 = v114;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*v131, v118);
              goto LABEL_62;
            }
          }
          v55 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                  v10,
                  v114,
                  v18,
                  &v115,
                  &v116,
                  (struct COREDEVICEACCESS *)v154);
          LODWORD(v10) = v55;
          if ( v55 == -1073741637 )
          {
            LODWORD(v10) = -1071775482;
            v60 = -1071775482LL;
          }
          else
          {
            if ( v55 >= 0 )
            {
              v25 = v116;
              v110 = v115;
              LODWORD(v112) = v116;
              goto LABEL_25;
            }
            v60 = v55;
          }
          WdLogSingleEntry3(4LL, v17, v18, v60);
          goto LABEL_54;
        }
LABEL_66:
        if ( v113 != (struct tagRECT *)v166 )
          operator delete[](v113);
        v53 = 0;
        if ( !v2 )
          v53 = (unsigned int)v10;
        goto LABEL_70;
      }
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified shadow surface size dose not match the virtual mode size in session view, returning 0x%I64x.",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v56 = PsGetCurrentProcessSessionId();
      WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), v5, v56, -1073741811LL);
      v57 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x in session 0x%I64x, returning 0x%I64x.",
        *((unsigned int *)a1 + 4),
        (__int64)v5,
        v57,
        -1073741811LL,
        0LL);
    }
    LODWORD(v10) = -1073741811;
  }
  v53 = (unsigned int)v10;
LABEL_70:
  if ( BYTE2(v108[0]) )
    DxgkReleaseSessionModeChangeLock();
  return v53;
}
