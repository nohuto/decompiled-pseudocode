/*
 * XREFs of ?AllocateStub@BamoPenEventsDispatcherPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsDispatcherStub@@@Z @ 0x180017690
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoPenEventsDispatcherPrincipal::AllocateStub(
        BamoPenEventsDispatcherPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoPenEventsDispatcherStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoPenEventsDispatcherStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoPenEventsDispatcherStub::`vftable'{for `IPenEventsDispatcherStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoPenEventsDispatcherStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoPenEventsDispatcherStub *)v4;
  return result;
}
