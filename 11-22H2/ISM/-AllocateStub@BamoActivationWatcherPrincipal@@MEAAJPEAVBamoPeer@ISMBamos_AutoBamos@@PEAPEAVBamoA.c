/*
 * XREFs of ?AllocateStub@BamoActivationWatcherPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoActivationWatcherStub@@@Z @ 0x180017DE0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoActivationWatcherPrincipal::AllocateStub(
        BamoActivationWatcherPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoActivationWatcherStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoActivationWatcherStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoActivationWatcherStub::`vftable'{for `IActivationWatcherStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoActivationWatcherStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoActivationWatcherStub *)v4;
  return result;
}
