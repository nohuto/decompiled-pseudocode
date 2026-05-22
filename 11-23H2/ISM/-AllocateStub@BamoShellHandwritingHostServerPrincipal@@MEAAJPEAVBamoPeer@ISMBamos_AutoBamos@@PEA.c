/*
 * XREFs of ?AllocateStub@BamoShellHandwritingHostServerPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostServerStub@@@Z @ 0x180062B50
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoShellHandwritingHostServerPrincipal::AllocateStub(
        BamoShellHandwritingHostServerPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoShellHandwritingHostServerStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoShellHandwritingHostServerStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoShellHandwritingHostServerStub::`vftable'{for `IShellHandwritingHostServerStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoShellHandwritingHostServerStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoShellHandwritingHostServerStub *)v4;
  return result;
}
