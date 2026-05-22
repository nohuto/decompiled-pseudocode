/*
 * XREFs of ??$As@UID2D1PathGeometry@@@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@@Details@12@@Z @ 0x180040EE0
 * Callers:
 *     ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z @ 0x180040FF8 (-RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID2D1Geometry>::As<ID2D1PathGeometry>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a2);
  return v4(v2, &GUID_2cd906a5_12e2_11dc_9fed_001143a055f9, a2);
}
