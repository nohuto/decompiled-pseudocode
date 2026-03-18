/*
 * XREFs of ?vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z @ 0x1C0035A9C
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall vMarkSurfacesWithHDEV(struct PDEV *a1)
{
  __int64 v2; // rdx
  signed __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  SURFACE *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 6088), 1uLL) & 0xF;
  *(_QWORD *)(v2 + 16LL * (unsigned int)v3 + 6104) = a1;
  *(_QWORD *)(v2 + 16 * (v3 + 382)) = *((_QWORD *)a1 + 221);
  GreAcquireHmgrSemaphore();
  v5 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    LOBYTE(v4) = 5;
    v5 = HmgSafeNextObjt(v5, v4, &v9);
    if ( !v5 )
      break;
    if ( *((struct PDEV **)v9 + 6) == a1 )
      SURFACE::hdev(v9, 0LL);
  }
  GreReleaseHmgrSemaphore(v6, v4, v7, v8);
}
