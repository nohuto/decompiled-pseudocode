/*
 * XREFs of GreNotifyDirtySprite @ 0x1C000B1A0
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C000B2A0 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0078BB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 */

__int64 __fastcall GreNotifyDirtySprite(HWND a1)
{
  __int64 result; // rax
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 v5; // rbx
  struct SFMLOGICALSURFACE *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  result = IsDwmActive();
  if ( (_DWORD)result )
  {
    v4 = Gre::Base::Globals(v3);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9));
    if ( (unsigned int)IsDwmActive() )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v9, a1);
      v5 = v9;
      if ( v9 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)(v9 + 88));
        v6 = *(struct SFMLOGICALSURFACE **)(v5 + 144);
        v7 = *((_QWORD *)v6 + 23);
        if ( v7 )
          v8 = *(_QWORD *)(v7 + 8);
        else
          v8 = 0LL;
        bSpDwmNotifyDirty(*(HSPRITE *)v5, v6, 1u, v8);
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
        if ( v5 )
          DEC_SHARE_REF_CNT(v5);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    return GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
  }
  return result;
}
