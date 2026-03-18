/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E9C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00182FC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0044440 (GreReleaseSemaphoreInternal.c)
 *     PALLOCMEM @ 0x1C004F000 (PALLOCMEM.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     bSpEnableSprites @ 0x1C0062980 (bSpEnableSprites.c)
 *     vEnableSynchronize @ 0x1C0064088 (vEnableSynchronize.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0088CC0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0094C00 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C0098990 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00D29DC (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00D2A30 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01545DC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0156018 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

struct PDEV *__fastcall DrvCreateCloneHDEV(struct PDEV *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct PDEV *v4; // rsi
  __int64 v5; // r15
  unsigned int v6; // r8d
  struct PDEV *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11[6]; // [rsp+40h] [rbp-30h] BYREF
  struct PDEV *v12; // [rsp+A0h] [rbp+30h] BYREF
  struct PDEV *v13; // [rsp+B0h] [rbp+40h] BYREF
  char v14; // [rsp+B8h] [rbp+48h] BYREF

  WdLogSingleEntry2(4LL, a1);
  v3 = SGDGetSessionState(v2);
  v13 = a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(v3 + 24);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v14, (struct PDEVOBJ *)&v13);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v12, (char *)a1, v6);
  v7 = v12;
  if ( v12 )
  {
    v8 = PALLOCMEM(0x888u, 0x706D7447u);
    if ( v8 && qword_1C02947C0 && (int)qword_1C02947C0() >= 0 && (unsigned int)bSpEnableSprites((__int64)v7) )
    {
      if ( qword_1C02947D0 && (int)qword_1C02947D0() >= 0 )
        vEnableSynchronize((__int64)v7);
      *(_QWORD *)(v8 + 976) = v8 + 544;
      *(_DWORD *)(v8 + 728) = 0;
      *(_DWORD *)(*(_QWORD *)(v8 + 976) + 176LL) = 0xFFFFFF;
      *(_DWORD *)(v8 + 120) = 0;
      *(_QWORD *)(*(_QWORD *)(v8 + 976) + 248LL) = 0LL;
      v9 = HmgShareLockCheck(*(_QWORD *)(v5 + 224), 16);
      HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>((__int64)v11, v9);
      *((_QWORD *)v7 + 196) = 0LL;
      *((_QWORD *)v7 + 193) = 0LL;
      *((_DWORD *)v7 + 388) = 0;
      EBRUSHOBJ::vInitBrush(
        (int *)v7 + 384,
        v8,
        v11[0],
        *(_QWORD *)(v5 + 6000),
        *(_QWORD *)(*((_QWORD *)v7 + 316) + 128LL),
        *((_QWORD *)v7 + 316),
        1u);
      HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>((__int64)v11);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v5 + 8), 16);
      --*((_DWORD *)a1 + 3);
      EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v5 + 8));
      GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v5 + 8));
      PDEVOBJ::vUnreferencePdev(&v13);
      PDEVOBJ::bDisabled((PDEVOBJ *)&v12, *((_DWORD *)a1 + 10) & 0x400);
      v4 = v7;
      goto LABEL_11;
    }
    PDEVOBJ::vClearSurface((PDEVOBJ *)&v12);
    PDEVOBJ::vUnreferencePdev(&v12);
    if ( v8 )
LABEL_11:
      Win32FreePool((char *)v8);
  }
  WdLogSingleEntry1(5LL, v4);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v14);
  return v4;
}
