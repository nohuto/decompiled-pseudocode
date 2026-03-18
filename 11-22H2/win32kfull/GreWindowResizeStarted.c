/*
 * XREFs of GreWindowResizeStarted @ 0x1C02686B0
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001C2F4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00C89F8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C00D5BA0 (DwmAsyncUpdateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     UserDCompositionCreateSynchronizationObject @ 0x1C01FE61C (UserDCompositionCreateSynchronizationObject.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0265774 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeStarted(void *a1, HWND a2, int a3, int *a4, _DWORD *a5)
{
  unsigned int v6; // r12d
  _DWORD *v7; // rsi
  int v8; // r13d
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  Gre::Base *v11; // rcx
  struct PDEVOBJ *v12; // rdx
  Gre::Base *v13; // rcx
  struct DWMSPRITE *v14; // rdi
  __int64 *v15; // r14
  __int64 v16; // rax
  bool v17; // bl
  PVOID v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdi
  void *v22; // rax
  int v23; // ecx
  int v24; // eax
  char v26[8]; // [rsp+68h] [rbp-21h] BYREF
  void *v27; // [rsp+70h] [rbp-19h] BYREF
  __int64 v28; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v29[32]; // [rsp+80h] [rbp-9h] BYREF
  struct DWMSPRITE *v30; // [rsp+A0h] [rbp+17h]
  PVOID Object; // [rsp+E8h] [rbp+5Fh] BYREF
  int v32; // [rsp+F8h] [rbp+6Fh]
  int *v33; // [rsp+100h] [rbp+77h]

  v33 = a4;
  v32 = a3;
  Object = a1;
  v6 = 0;
  v7 = *(_DWORD **)(SGDGetSessionState(a1) + 32);
  v8 = v7[2177] & 2;
  LODWORD(Object) = v7[2177] & 1;
  v10 = Gre::Base::Globals(v9);
  v28 = *((_QWORD *)v10 + 15);
  GreAcquireSemaphore(v28);
  if ( IsDwmActive(v11) )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v26, v12, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
    if ( IsDwmActive(v13) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v29, a2);
      v14 = v30;
      if ( v30 )
      {
        v15 = (__int64 *)*((_QWORD *)v30 + 18);
        v17 = 0;
        if ( v15 )
        {
          v16 = v15[23];
          if ( v16 )
          {
            if ( v16 != 24 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v16 - 24)) )
              v17 = 1;
          }
        }
        if ( (_DWORD)Object && v17 || v32 && v8 )
        {
          if ( *((int *)v14 + 29) >= 1 )
            CheckAndProcessWindowResizeComplete(v14, 1, 0LL);
          *(_QWORD *)((char *)v14 + 116) = (unsigned int)v17 + 1;
          if ( v32 && v8 )
          {
            Object = 0LL;
            if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
            {
              v18 = Object;
              v27 = 0LL;
              if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v27) < 0 )
              {
                ObfDereferenceObject(v18);
              }
              else
              {
                *((_QWORD *)v14 + 13) = v27;
                *((_QWORD *)v14 + 12) = v18;
                *((_DWORD *)v14 + 30) = 1;
                *((_DWORD *)v14 + 31) = 1;
                v20 = *v15;
                v21 = *(_QWORD *)v14;
                v22 = (void *)UserReferenceDwmApiPort(v19);
                DwmAsyncUpdateSprite(v22, v21, v20, 512, 0LL, 0LL, 0, 0, 0, 0, 0LL);
              }
            }
            v23 = v7[2179];
            v24 = v7[2177] & 8;
          }
          else
          {
            v23 = v7[2178];
            v24 = v7[2177] & 4;
          }
          v6 = 1;
          v14 = v30;
          *v33 = v24;
          *a5 = v23;
        }
        if ( v14 )
          _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
      }
      v30 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v26);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  return v6;
}
