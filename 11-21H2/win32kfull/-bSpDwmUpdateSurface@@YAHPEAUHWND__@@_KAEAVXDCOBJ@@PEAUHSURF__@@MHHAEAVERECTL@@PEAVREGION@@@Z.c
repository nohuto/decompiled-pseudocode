/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00CBDF4
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026DCB8 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00843F8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00CC4A8 (DwmSyncCaptureSurfaceBits.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C01591BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        HWND a1,
        __int64 a2,
        struct XDCOBJ *a3,
        HSURF a4,
        float a5,
        int a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9)
{
  PVOID v11; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v15; // ecx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rsi
  __int64 v20; // rcx
  void *v21; // rbx
  NTSTATUS v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  _BYTE *v25; // rsi
  __int64 CurrentProcess; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rbx
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  void *v31; // rbx
  __int64 v32; // rax
  BOOL v33; // edi
  int v35; // [rsp+38h] [rbp-C8h]
  _BYTE v36[4]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v37[3]; // [rsp+64h] [rbp-9Ch] BYREF
  char v38; // [rsp+70h] [rbp-90h]
  int v39; // [rsp+74h] [rbp-8Ch]
  int v40; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  void *v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h] BYREF
  int v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-40h] BYREF
  HSURF v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+D0h] [rbp-30h] BYREF
  int v52; // [rsp+D4h] [rbp-2Ch]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  __int64 v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  _QWORD v58[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v59[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v60[32]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v61; // [rsp+130h] [rbp+30h]
  _BYTE v62[32]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v63[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v64[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v65[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v66[52]; // [rsp+1B4h] [rbp+B4h] BYREF
  __int64 v67; // [rsp+1E8h] [rbp+E8h]
  __int64 v68; // [rsp+200h] [rbp+100h]
  int v69; // [rsp+208h] [rbp+108h]
  int v70; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+240h] [rbp+140h]

  v42 = 0LL;
  *(_QWORD *)&v37[1] = 0LL;
  v11 = 0LL;
  v38 = 0;
  v39 = 0;
  v51 = 0;
  v54 = 0;
  v57 = 0;
  v50 = a4;
  v44 = a2;
  v48 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread || (*(_DWORD *)(ThreadWin32Thread + 328) & 8) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( !CurrentProcessWin32Process )
      goto LABEL_10;
    if ( a1 )
      goto LABEL_10;
    v15 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v15 & 2) != 0 )
      goto LABEL_10;
    *(_DWORD *)(CurrentProcessWin32Process + 288) = v15 | 2;
  }
  if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL) )
  {
    v40 = v18;
    v37[0] = 0;
    v43 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      (unsigned int)&unk_1C02F243C,
      v17,
      v18,
      (__int64)&v43,
      (__int64)v37,
      (__int64)&v40);
  }
LABEL_10:
  v52 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v53 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v55 = 0LL;
  v56 = 1;
  UserEnterUserCritSecShared();
  v19 = UserReferenceDwmProcess();
  v21 = (void *)UserReferenceDwmApiPort(v20);
  UserLeaveUserCritSec();
  v37[0] = 88;
  if ( v19 && v21 )
  {
    v22 = DwmSyncCaptureSurfaceBits(v21, a7, v52, v53, v44, (__int64)v37, (__int64)&v48);
  }
  else
  {
    v22 = -1073741823;
    UserDereferenceDwmApiPort(v21);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v63);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v62, a3, 0);
  if ( (v62[24] & 1) != 0 && **(HSURF **)(*(_QWORD *)a3 + 496LL) == v50 )
  {
    if ( v22 >= 0 )
    {
      LOBYTE(v35) = 0;
      Handle = 0LL;
      v22 = ObDuplicateObject(v19, v48, 0LL, &Handle, 4, 512, 1, v35);
      if ( v22 >= 0 )
      {
        Object = 0LL;
        v22 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
        v11 = Object;
        ZwClose(Handle);
      }
    }
  }
  else
  {
    v22 = -1073741823;
  }
  UserDereferenceDwmProcess(v19);
  v25 = 0LL;
  if ( v22 >= 0 )
  {
    v43 = 0LL;
    v44 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v24, v23);
    v22 = MmMapViewOfSection(v11, CurrentProcess, &v42, 0LL, 0LL, &v43, &v44, 2, 0, 2);
    if ( v22 >= 0 )
    {
      v51 = 6;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v37[1], (struct _DEVBITMAPINFO *)&v51, v42, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v47 = 0;
        v46 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v46, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v27 = *(_QWORD *)&v37[1];
          v47 = 1;
          v45 = *(_QWORD *)(*(_QWORD *)&v37[1] + 128LL);
          if ( v45 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v45);
            v27 = *(_QWORD *)&v37[1];
          }
          *(_QWORD *)(v27 + 128) = v46;
          if ( v46 )
            INC_SHARE_REF_CNT(v46);
        }
        else
        {
          v22 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v46);
        if ( v22 >= 0 )
        {
          SURFREF::SURFREF((SURFREF *)v60, v50);
          v28 = v61;
          if ( v61 )
          {
            if ( *(_DWORD *)(v61 + 96) == 6 )
            {
              v29 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
              v45 = v29;
              v59[0] = 0LL;
              SURFREFVIEW::bMap(
                (SURFREFVIEW *)v59,
                (struct _SURFOBJ *)((*(_QWORD *)&v37[1] + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)&v37[1] >> 64)));
              v58[0] = 0LL;
              SURFREFVIEW::bMap(
                (SURFREFVIEW *)v58,
                (struct _SURFOBJ *)((v61 + 24) & ((unsigned __int128)-(__int128)v61 >> 64)));
              if ( v59[0] && v58[0] )
              {
                v68 = 0LL;
                v69 = 0;
                v70 = 1;
                v71 = 0LL;
                v67 = 0LL;
                if ( a9 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v65, a9, a8, 0);
                  v25 = v65;
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v45) )
                {
                  v30 = RedirCopyBits;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
                {
                  v30 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v29 + 2816);
                }
                else
                {
                  v30 = EngCopyBits;
                }
                if ( !v25 || !ERECTL::bEmpty((ERECTL *)v66) )
                  ((void (__fastcall *)(unsigned __int64, __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v30)(
                    (v61 + 24) & -(__int64)(v61 != 0),
                    (*(_QWORD *)&v37[1] + 24LL) & -(__int64)(*(_QWORD *)&v37[1] != 0LL),
                    v25,
                    0LL,
                    a8,
                    &gptlZero);
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v58);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v59);
              v28 = v61;
            }
            if ( v28 )
              DEC_SHARE_REF_CNT(v28);
          }
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v60);
        }
      }
      else
      {
        v22 = -1073741823;
      }
    }
  }
  if ( a9 )
    REGION::vDeleteREGION(a9);
  v31 = v42;
  if ( v42 )
  {
    v32 = PsGetCurrentProcess(v24, v23);
    MmUnmapViewOfSection(v32, v31);
  }
  if ( v11 )
    ObfDereferenceObject(v11);
  v33 = v22 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v62);
  if ( v63[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v63);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v64);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  SURFMEM::~SURFMEM((SURFMEM *)&v37[1]);
  return v33;
}
