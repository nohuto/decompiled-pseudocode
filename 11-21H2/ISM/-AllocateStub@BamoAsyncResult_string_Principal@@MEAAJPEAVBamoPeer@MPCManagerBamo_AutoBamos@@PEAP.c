/*
 * XREFs of ?AllocateStub@BamoAsyncResult_string_Principal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoAsyncResult_string_Stub@@@Z @ 0x18016F0F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoAsyncResult_string_Principal::AllocateStub(
        BamoAsyncResult_string_Principal *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2,
        struct BamoAsyncResult_string_Stub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoAsyncResult_string_Stub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoAsyncResult_string_Stub::`vftable'{for `IAsyncResult_string_Stub'};
  v4[7] = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[2] = &BamoImpl::BamoAsyncResult_string_StubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_WORD *)v4 + 24) = 256;
  *a3 = (struct BamoAsyncResult_string_Stub *)v4;
  return result;
}
