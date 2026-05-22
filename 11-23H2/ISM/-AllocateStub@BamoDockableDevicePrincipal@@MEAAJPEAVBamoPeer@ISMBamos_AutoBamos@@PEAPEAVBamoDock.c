/*
 * XREFs of ?AllocateStub@BamoDockableDevicePrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDockableDeviceStub@@@Z @ 0x18019C0C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoDockableDevicePrincipal::AllocateStub(
        BamoDockableDevicePrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoDockableDeviceStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoDockableDeviceStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoDockableDeviceStub::`vftable'{for `IDockableDeviceStub'};
  v4[6] = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoDockableDeviceStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoDockableDeviceStub *)v4;
  return result;
}
