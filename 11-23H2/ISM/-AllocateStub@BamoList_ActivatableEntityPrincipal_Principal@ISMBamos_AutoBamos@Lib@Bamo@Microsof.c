/*
 * XREFs of ?AllocateStub@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoPeer@2@PEAPEAVBamoList_ActivatableEntityPrincipal_Stub@2345@@Z @ 0x180017010
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::AllocateStub(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_ActivatableEntityPrincipal_Stub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub *)v4;
  return result;
}
