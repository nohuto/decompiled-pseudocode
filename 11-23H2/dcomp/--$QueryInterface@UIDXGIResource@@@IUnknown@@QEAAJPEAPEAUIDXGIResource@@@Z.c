/*
 * XREFs of ??$QueryInterface@UIDXGIResource@@@IUnknown@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x1800E94BC
 * Callers:
 *     ?EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceTextureManager@2@@Z @ 0x1800A0AAC (-EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknown::QueryInterface<IDXGIResource>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  return (**a1)(a1, &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b, a2);
}
