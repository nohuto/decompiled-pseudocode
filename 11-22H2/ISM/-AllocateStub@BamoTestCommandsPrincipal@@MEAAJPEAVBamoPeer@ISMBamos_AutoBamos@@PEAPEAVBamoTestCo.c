/*
 * XREFs of ?AllocateStub@BamoTestCommandsPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoTestCommandsStub@@@Z @ 0x1800174E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoTestCommandsPrincipal::AllocateStub(
        BamoTestCommandsPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoTestCommandsStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoTestCommandsStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoTestCommandsStub::`vftable'{for `ITestCommandsStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoTestCommandsStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoTestCommandsStub *)v4;
  return result;
}
