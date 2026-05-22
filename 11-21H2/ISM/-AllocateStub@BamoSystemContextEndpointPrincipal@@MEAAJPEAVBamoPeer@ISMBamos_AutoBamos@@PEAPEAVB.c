/*
 * XREFs of ?AllocateStub@BamoSystemContextEndpointPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemContextEndpointStub@@@Z @ 0x180087790
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoSystemContextEndpointPrincipal::AllocateStub(
        BamoSystemContextEndpointPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoSystemContextEndpointStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x60uLL);
  memset_0(v4, 0, 0x60uLL);
  *v4 = &BamoSystemContextEndpointStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoSystemContextEndpointStub::`vftable'{for `ISystemContextEndpointStub'};
  v4[7] = 0LL;
  v4[2] = &BamoImpl::BamoSystemContextEndpointStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_WORD *)v4 + 24) = 256;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[10] = 0LL;
  v4[11] = 0LL;
  *a3 = (struct BamoSystemContextEndpointStub *)v4;
  return result;
}
