/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C00220C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x1C00B3D48 (GreDeleteSprite.c)
 */

void __fastcall vCleanupUMWindowlessSprite(int a1)
{
  HDEV HDEV; // rsi
  struct PDEVOBJ *v3; // rdx
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  if ( g_pDwmState && PsGetCurrentProcess() != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
    v11 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    HDEV = (HDEV)UserGetHDEV();
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v9, v3, 0, 1);
    v10 = ghsemDwmState;
    GreAcquireSemaphore(ghsemDwmState);
    if ( g_pDwmState )
    {
      v4 = (char *)g_pDwmState + 80;
      v5 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v5 != v4 )
      {
        v6 = (__int64)v5;
        v7 = (unsigned __int64)(v5 - 24);
        v5 = *(char **)v5;
        v8 = -v6;
        if ( (*(_DWORD *)((v7 & -(__int64)(v8 != 0)) + 0x48) & 0x400000) != 0
          && *(_DWORD *)((v7 & -(__int64)(v8 != 0)) + 0x70) == a1 )
        {
          GreDeleteSprite(HDEV, 0LL, *(HSPRITE *)(v7 & -(__int64)(v8 != 0)), 1);
        }
        v4 = (char *)g_pDwmState + 80;
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v10);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v9);
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  }
}
