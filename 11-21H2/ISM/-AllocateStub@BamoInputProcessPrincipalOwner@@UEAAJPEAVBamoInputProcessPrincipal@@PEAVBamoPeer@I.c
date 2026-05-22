/*
 * XREFs of ?AllocateStub@BamoInputProcessPrincipalOwner@@UEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputProcessStub@@@Z @ 0x1800B1960
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoInputProcessPrincipalOwner::AllocateStub(
        BamoInputProcessPrincipalOwner *this,
        struct BamoInputProcessPrincipal *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct BamoInputProcessStub **a4)
{
  _QWORD *v5; // rbx
  __int64 result; // rax

  v5 = operator new(0x50uLL);
  memset_0(v5, 0, 0x50uLL);
  *v5 = &BamoInputProcessStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v5[1] = &BamoInputProcessStub::`vftable'{for `IInputProcessStub'};
  v5[7] = 0LL;
  *((_DWORD *)v5 + 8) = 0;
  v5[5] = 0LL;
  v5[8] = 0LL;
  v5[9] = 0LL;
  v5[2] = &BamoImpl::BamoInputProcessStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v5 + 6) = 1;
  *((_WORD *)v5 + 24) = 256;
  *a4 = (struct BamoInputProcessStub *)v5;
  return result;
}
