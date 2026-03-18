/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C02C2C38
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00147D0 (-DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C80AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C033A184 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C03477A8 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(ADAPTER_DISPLAY *this, struct _LUID *a2)
{
  _DWORD *i; // rax
  DXGPROTECTEDSESSION *j; // rbx
  DXGADAPTER *v5; // rcx
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int k; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  DXGSESSIONDATA **v13; // rcx
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF

  if ( !(_BYTE)a2 )
  {
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners((PERESOURCE **)this, *(PERESOURCE ***)(*((_QWORD *)this + 2) + 2800LL));
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 32));
    for ( i = (_DWORD *)*((_QWORD *)this + 10); i != (_DWORD *)((char *)this + 80) && i; i = *(_DWORD **)i )
      i[14] = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 664));
    for ( j = (DXGPROTECTEDSESSION *)*((_QWORD *)this + 89);
          j != (ADAPTER_DISPLAY *)((char *)this + 712) && j;
          j = *(DXGPROTECTEDSESSION **)j )
    {
      DXGPROTECTEDSESSION::Stop(j);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 83);
  }
  v5 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v14 = 0;
  if ( (*((_DWORD *)v5 + 109) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v5, a2, &v14, 0LL) )
  {
    Global = DXGGLOBAL_GetGlobal();
    v7 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 122), v14);
    if ( v7 < 0 )
    {
      v8 = v14;
      v9 = v7;
      WdLogSingleEntry2(2LL, v14, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to purge the cached IDD display config request for session 0x%I64x, (Status = 0x%I64x).",
        v8,
        v9,
        0LL,
        0LL,
        0LL);
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 24); ++k )
  {
    v11 = 4000LL * k;
    v12 = *((_QWORD *)this + 16);
    if ( *(_BYTE *)(v11 + v12 + 762) )
    {
      v13 = *(DXGSESSIONDATA ***)(v11 + v12 + 48);
      if ( v13 )
        DXGSESSIONDATA::DecrementDesktopVidPnCount(*v13);
    }
  }
  KeCancelTimer((PKTIMER)((char *)this + 736));
  KeFlushQueuedDpcs();
}
