/*
 * XREFs of ?AllocateStub@BamoMPCManagerClientPrincipal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoMPCManagerClientStub@@@Z @ 0x18018C900
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientPrincipal::AllocateStub(
        BamoMPCManagerClientPrincipal *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2,
        struct BamoMPCManagerClientStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoMPCManagerClientStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoMPCManagerClientStub::`vftable'{for `IMPCManagerClientStub'};
  v4[6] = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoMPCManagerClientStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoMPCManagerClientStub *)v4;
  return result;
}
