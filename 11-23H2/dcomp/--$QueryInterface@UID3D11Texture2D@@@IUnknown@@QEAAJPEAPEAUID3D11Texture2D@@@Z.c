/*
 * XREFs of ??$QueryInterface@UID3D11Texture2D@@@IUnknown@@QEAAJPEAPEAUID3D11Texture2D@@@Z @ 0x1800E9494
 * Callers:
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknown::QueryInterface<ID3D11Texture2D>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  return (**a1)(a1, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, a2);
}
