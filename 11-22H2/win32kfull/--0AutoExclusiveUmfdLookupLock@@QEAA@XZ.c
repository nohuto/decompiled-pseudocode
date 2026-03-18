/*
 * XREFs of ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C007EE40
 * Callers:
 *     FreeFileView @ 0x1C007C5A8 (FreeFileView.c)
 *     UmfdUnloadFontFileInternal @ 0x1C007C648 (UmfdUnloadFontFileInternal.c)
 *     UmfdLoadFontFile @ 0x1C007ECF0 (UmfdLoadFontFile.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00A5158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00A5278 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00A5810 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     GreMakeFontDir @ 0x1C02D5B38 (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

AutoExclusiveUmfdLookupLock *__fastcall AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock(
        AutoExclusiveUmfdLookupLock *this)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  *(_QWORD *)this = v2 + 23464;
  if ( v2 != -23464 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
