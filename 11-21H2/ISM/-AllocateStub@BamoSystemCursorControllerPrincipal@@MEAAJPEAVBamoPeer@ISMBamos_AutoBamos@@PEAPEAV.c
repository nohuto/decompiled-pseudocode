/*
 * XREFs of ?AllocateStub@BamoSystemCursorControllerPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemCursorControllerStub@@@Z @ 0x18000FC20
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoSystemCursorControllerPrincipal::AllocateStub(
        BamoSystemCursorControllerPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoSystemCursorControllerStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoSystemCursorControllerStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoSystemCursorControllerStub::`vftable'{for `ISystemCursorControllerStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[2] = &BamoImpl::BamoSystemCursorControllerStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_WORD *)v4 + 24) = 256;
  *a3 = (struct BamoSystemCursorControllerStub *)v4;
  return result;
}
