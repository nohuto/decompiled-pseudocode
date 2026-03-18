/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C026E9E0
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C0270170 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C006DC80 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     UserRedrawDesktop @ 0x1C0222E68 (UserRedrawDesktop.c)
 *     vSpUnTearDownSprites @ 0x1C02844F0 (vSpUnTearDownSprites.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  DWORD LowPart; // ebx
  int v3; // edi
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  Gre::Base *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LONG HighPart; // [rsp+64h] [rbp+44h]
  __int64 v21; // [rsp+70h] [rbp+50h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v21);
  for ( i = hdevEnumerateDisplayOnly(0LL); i; i = hdevEnumerateDisplayOnly(i) )
  {
    v21 = i;
    if ( (*(_DWORD *)(i + 40) & 0x20400) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v21 + 2552) + 248LL) == v3 )
    {
      GreLockVisRgn(v21);
      GreLockSprite(v21);
      GreLockDisplayDevice(v21);
      v7 = v21;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v7 + 2600, CurrentProcessId & 0xFFFFFFFC);
      v10 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v11 = v21;
          if ( *(_QWORD *)(v21 + 2624) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v21 + 2624))(*(_QWORD *)(v21 + 1768), v10 + 28);
            v11 = v21;
          }
          --*(_DWORD *)(v11 + 2616);
          if ( (*(_DWORD *)(v10 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v21, v10 + 28, 1LL);
            if ( *(_DWORD *)(v10 + 44) != *((_DWORD *)Gre::Base::Globals(v13) + 1629) )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v21);
      GreUnlockSprite(v21);
      GreUnlockVisRgn(v21);
      v3 = a2;
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v21);
  if ( v5 )
    UserRedrawDesktop(v15, v14, v16, v17);
  return v4;
}
