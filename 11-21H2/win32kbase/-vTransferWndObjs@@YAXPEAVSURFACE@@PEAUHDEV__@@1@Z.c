/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C0175540
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0171840 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C008DCA0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, struct PDEV *a2, HDEV a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 *v9; // rax
  __int64 i; // rbx
  __int64 j; // rdi
  int v12; // r8d
  HDEV v13; // [rsp+48h] [rbp+10h] BYREF
  struct PDEV *v14; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v9 = (__int64 *)qword_1C029B5A8;
  v14 = a2;
  v13 = a3;
  if ( qword_1C029B5A8 )
    v9 = (__int64 *)qword_1C029B5A8(v7);
  for ( i = *v9; i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v13, v6, v8);
        PDEVOBJ::vUnreferencePdev(&v14, 0, v12);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v15);
}
