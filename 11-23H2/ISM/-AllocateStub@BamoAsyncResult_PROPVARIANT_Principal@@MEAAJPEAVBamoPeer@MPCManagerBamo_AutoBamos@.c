/*
 * XREFs of ?AllocateStub@BamoAsyncResult_PROPVARIANT_Principal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoAsyncResult_PROPVARIANT_Stub@@@Z @ 0x18018DDE0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoAsyncResult_PROPVARIANT_Principal::AllocateStub(
        BamoAsyncResult_PROPVARIANT_Principal *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2,
        struct BamoAsyncResult_PROPVARIANT_Stub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoAsyncResult_PROPVARIANT_Stub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoAsyncResult_PROPVARIANT_Stub::`vftable'{for `IAsyncResult_PROPVARIANT_Stub'};
  v4[6] = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoAsyncResult_PROPVARIANT_StubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoAsyncResult_PROPVARIANT_Stub *)v4;
  return result;
}
