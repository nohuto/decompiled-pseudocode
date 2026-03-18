/*
 * XREFs of GreUpdateSpriteClipRgn @ 0x1C0084B9C
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042D7C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0084E3C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     UserGetWindowRect @ 0x1C0084E98 (UserGetWindowRect.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteClipRgn(__int64 a1, struct PDEVOBJ *a2, HRGN a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  REGION *v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-49h] BYREF
  struct _POINTL v11; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-31h] BYREF
  __int64 v14; // [rsp+48h] [rbp-29h] BYREF
  int v15; // [rsp+50h] [rbp-21h]
  _DWORD v16[4]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v17[32]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v18; // [rsp+88h] [rbp+17h]
  _QWORD v19[7]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+D8h] [rbp+67h] BYREF

  v20 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v20, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a3, 0, 0);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v17, (HWND)a2);
    v7 = v18;
    if ( !v18 )
    {
LABEL_26:
      v18 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
      goto LABEL_27;
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v13, (struct _EX_PUSH_LOCK *)(v18 + 88));
    v8 = *(_QWORD *)(v7 + 144);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v12, (struct _EX_PUSH_LOCK *)(v8 + 256));
    if ( v19[0] && (unsigned int)UserGetWindowRect(*(_QWORD *)(v7 + 40), v16) )
    {
      if ( !*(_QWORD *)(v8 + 88) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
        if ( v14 )
          *(_QWORD *)(v8 + 88) = v14;
        if ( v15 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
      }
      if ( !*(_QWORD *)(v8 + 88) )
        goto LABEL_21;
      v10 = *(_QWORD *)(v8 + 88);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v10, (struct RGNOBJ *)v19) )
        goto LABEL_21;
      v11.x = -v16[0];
      v11.y = -v16[1];
      if ( RGNOBJ::bOffset((RGNOBJ *)&v10, &v11) )
      {
        if ( (*(_DWORD *)(v7 + 140) & 0x20) != 0 )
          RGNOBJ::vScale(
            &v10,
            _mm_unpacklo_ps((__m128)*(unsigned int *)(v7 + 132), (__m128)*(unsigned int *)(v7 + 136)).m128_u64[0]);
        *(_QWORD *)(v8 + 88) = v10;
        goto LABEL_20;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
    }
    else
    {
      v9 = *(REGION **)(v8 + 88);
      if ( !v9 )
        goto LABEL_21;
      REGION::vDeleteREGION(v9);
    }
    *(_QWORD *)(v8 + 88) = 0LL;
LABEL_20:
    *(_DWORD *)(v8 + 252) |= 0x20u;
LABEL_21:
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v12);
    if ( (*(_DWORD *)(v8 + 252) & 1) == 0 || !a4 )
      vSpDwmFlushSpriteClipRgnChange((struct SFMLOGICALSURFACE *)v8);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v13);
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
    goto LABEL_26;
  }
LABEL_27:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v20);
}
