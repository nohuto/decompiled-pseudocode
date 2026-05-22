/*
 * XREFs of ?AllocateStub@BamoDataSourcePrincipal@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataSourceStub@@@Z @ 0x18010E940
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::AllocateStub(
        BamoDataSourcePrincipal *this,
        struct dataprovider_AutoBamos::BamoPeer *a2,
        struct BamoDataSourceStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoDataSourceStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoDataSourceStub::`vftable'{for `IDataSourceStub'};
  v4[6] = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoDataSourceStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoDataSourceStub *)v4;
  return result;
}
