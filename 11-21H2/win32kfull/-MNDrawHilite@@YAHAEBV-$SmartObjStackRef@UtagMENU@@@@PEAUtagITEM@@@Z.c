/*
 * XREFs of ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00C1F98
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C00C1E10 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C0247380 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 */

__int64 __fastcall MNDrawHilite(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  int v4; // ecx
  __int64 v6; // rcx
  struct tagITEM *v7; // r10

  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( (v4 & 0x80u) != 0 && (v4 & 0xC0000000) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
      v6 = **(_QWORD **)a1;
    if ( (unsigned int)MNIsUAHMenu(v6) || !(unsigned int)MNIsCachedBmpOnly(v7) )
      return 1;
  }
  return v3;
}
