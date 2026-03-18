/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C007A4F0
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C007ADC0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C007AD98 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // ebx
  _BYTE v17[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v19[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  if ( (unsigned int)IsDwmActive() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
    v10 = Gre::Base::Globals(v9);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9));
    if ( (unsigned int)IsDwmActive() )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        if ( *(_QWORD *)(a1 + 3432) )
        {
          UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v19);
          v12 = 0LL;
          v20 = 0LL;
          if ( a2 && (LOBYTE(v11) = 18, v13 = HmgShareLockCheck(a2, v11), v20 = v13, (v12 = v13) != 0) )
          {
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v18, (struct _EX_PUSH_LOCK *)(v13 + 256));
            v14 = *(_QWORD *)(v12 + 184);
            if ( v14 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12) )
            {
              if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 3432))(
                     v14,
                     a3,
                     a2,
                     *(_QWORD *)(v14 + 32)) )
              {
                *(_DWORD *)(v12 + 244) ^= (*(_DWORD *)(v12 + 244) ^ (2 * a5)) & 2;
                EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
              }
              *(_QWORD *)(v12 + 192) = *(_QWORD *)(v14 + 544);
              *(_QWORD *)(v12 + 200) = *(_QWORD *)(v14 + 552);
              *(_DWORD *)(v12 + 208) = *(_DWORD *)(v14 + 100);
              if ( (*(_DWORD *)(v14 + 92) & 0x400) != 0 )
                *(_DWORD *)(v12 + 244) |= 0x100u;
            }
            else
            {
              *(_QWORD *)(v12 + 192) = a3;
              *(_QWORD *)(v12 + 200) = a4;
            }
            v15 = 0;
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
            v12 = v20;
          }
          else
          {
            v15 = -1073741811;
          }
          if ( v12 )
            DEC_SHARE_REF_CNT(v12);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
        }
        else
        {
          v15 = -1073741822;
        }
      }
      else
      {
        v15 = -1073741790;
      }
    }
    else
    {
      v15 = -1071775733;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v15;
}
