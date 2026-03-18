/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002E950 (GreReleaseSemaphoreInternal.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0030400 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C007FCA0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     PALLOCMEM @ 0x1C0086980 (PALLOCMEM.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C0097170 (--1SPRITELOCK@@QEAA@XZ.c)
 *     vEnableSynchronize @ 0x1C00C3134 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x1C00C4470 (bSpEnableSprites.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DAF28 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00DAF80 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C016A304 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C016B0B8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

struct PDEV *__fastcall DrvCreateCloneHDEV(struct PDEV *a1)
{
  struct PDEV *v2; // rdi
  struct PDEV *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  struct HOBJ__ **v8; // rdi
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v15[6]; // [rsp+40h] [rbp-30h] BYREF
  struct PDEV *v16; // [rsp+A0h] [rbp+30h] BYREF
  struct PDEV *v17; // [rsp+B0h] [rbp+40h] BYREF
  char v18; // [rsp+B8h] [rbp+48h] BYREF

  WdLogSingleEntry2(4LL, a1, 1LL);
  v17 = a1;
  v2 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v18, (struct PDEVOBJ *)&v17);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v16, (char *)a1);
  v3 = v16;
  if ( v16 )
  {
    v4 = PALLOCMEM(0x860u, 1886221383);
    if ( v4 && qword_1C029B130 && (int)qword_1C029B130() >= 0 && (unsigned int)bSpEnableSprites() )
    {
      if ( qword_1C029B140 && (int)qword_1C029B140() >= 0 )
        vEnableSynchronize();
      *(_QWORD *)(v4 + 976) = v4 + 544;
      *(_DWORD *)(v4 + 728) = 0;
      *(_DWORD *)(*(_QWORD *)(v4 + 976) + 176LL) = 0xFFFFFF;
      v5 = *(_QWORD *)(v4 + 976);
      *(_DWORD *)(v4 + 120) = 0;
      *(_QWORD *)(v5 + 248) = 0LL;
      if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
      {
        v6 = HmgShareLockCheck(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
        HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>((__int64)v15, v6);
        *((_QWORD *)v3 + 196) = 0LL;
        *((_QWORD *)v3 + 193) = 0LL;
        *((_DWORD *)v3 + 388) = 0;
        EBRUSHOBJ::vInitBrush(
          (int *)v3 + 384,
          v4,
          v15[0],
          (__int64)ppalDefault,
          *(_QWORD *)(*((_QWORD *)v3 + 316) + 128LL),
          *((_QWORD *)v3 + 316),
          1u);
        HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>((__int64)v15);
      }
      else
      {
        v7 = HmgShareLockCheck(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
        *((_QWORD *)v3 + 196) = 0LL;
        v8 = (struct HOBJ__ **)v7;
        *((_QWORD *)v3 + 193) = 0LL;
        *((_DWORD *)v3 + 388) = 0;
        EBRUSHOBJ::vInitBrush(
          (int *)v3 + 384,
          v4,
          v7,
          (__int64)ppalDefault,
          *(_QWORD *)(*((_QWORD *)v3 + 316) + 128LL),
          *((_QWORD *)v3 + 316),
          1u);
        DEC_SHARE_REF_CNT_LAZY0(v8);
      }
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      --*((_DWORD *)a1 + 3);
      PDEVOBJ::vUnreferencePdev(&v17, 0, v9);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v10);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      PDEVOBJ::bDisabled((PDEVOBJ *)&v16, *((_DWORD *)a1 + 10) & 0x400);
      v2 = v3;
      goto LABEL_14;
    }
    PDEVOBJ::vClearSurface((PDEVOBJ *)&v16);
    PDEVOBJ::vUnreferencePdev(&v16, 0, v11);
    if ( v4 )
LABEL_14:
      Win32FreePool((char *)v4);
  }
  WdLogSingleEntry1(5LL, v2);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v18, v12, v13);
  return v2;
}
