/*
 * XREFs of ?AllocateStub@BamoInputDeliveryServerPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputDeliveryServerStub@@@Z @ 0x180017250
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoInputDeliveryServerPrincipal::AllocateStub(
        BamoInputDeliveryServerPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoInputDeliveryServerStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoInputDeliveryServerStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoInputDeliveryServerStub::`vftable'{for `IInputDeliveryServerStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoInputDeliveryServerStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoInputDeliveryServerStub *)v4;
  return result;
}
