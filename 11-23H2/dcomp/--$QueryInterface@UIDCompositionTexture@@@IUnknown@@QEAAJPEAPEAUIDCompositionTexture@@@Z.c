/*
 * XREFs of ??$QueryInterface@UIDCompositionTexture@@@IUnknown@@QEAAJPEAPEAUIDCompositionTexture@@@Z @ 0x18009CB10
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknown::QueryInterface<IDCompositionTexture>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  return (**a1)(a1, &GUID_929bb1aa_725f_433b_abd7_273075a835f2, a2);
}
