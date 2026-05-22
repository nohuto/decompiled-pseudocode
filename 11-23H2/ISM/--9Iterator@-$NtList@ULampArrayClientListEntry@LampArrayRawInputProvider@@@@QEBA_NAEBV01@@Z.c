/*
 * XREFs of ??9Iterator@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEBA_NAEBV01@@Z @ 0x180010ACC
 * Callers:
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800106E0 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E90CC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800EC8E8 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(
        _QWORD *a1,
        _QWORD *a2)
{
  return *a1 != *a2;
}
