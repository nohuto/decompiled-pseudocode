/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenEventsClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801BE520
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1800550E0 (-UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180055230 (-UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1800552A0 (-UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180055310 (-UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateIsShell@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180055380 (-UpdateIsShell@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180055460 (-UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoPenEventsClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8

  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonClickedEventsRequired(this, 0LL, a3);
  LOBYTE(v5) = *((_BYTE *)a2 + 33);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonDoubleClickedEventsRequired(this, 0LL, v5);
  LOBYTE(v6) = *((_BYTE *)a2 + 34);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonLongPressedEventsRequired(this, 0LL, v6);
  LOBYTE(v7) = *((_BYTE *)a2 + 35);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateDockedEventsRequired(this, 0LL, v7);
  LOBYTE(v8) = *((_BYTE *)a2 + 36);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateUndockedEventsRequired(this, 0LL, v8);
  LOBYTE(v9) = *((_BYTE *)a2 + 37);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateIsShell(this, 0LL, v9);
  LOBYTE(v10) = *((_BYTE *)a2 + 38);
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTipToGlassEventsRequired(this, 0LL, v10);
}
