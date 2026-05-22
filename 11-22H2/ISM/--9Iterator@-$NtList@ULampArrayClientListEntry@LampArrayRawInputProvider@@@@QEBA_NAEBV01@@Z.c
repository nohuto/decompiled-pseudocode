/*
 * XREFs of ??9Iterator@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEBA_NAEBV01@@Z @ 0x18001140C
 * Callers:
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180011020 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800F804C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800FB9FC (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(
        _QWORD *a1,
        _QWORD *a2)
{
  return *a1 != *a2;
}
