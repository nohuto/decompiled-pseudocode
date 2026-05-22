/*
 * XREFs of ?CreateInputSiteElementProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputSiteElementProxy@@@Z @ 0x18000B700
 * Callers:
 *     ?Thunk_Materialize_BamoInputSiteElementProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000B550 (-Thunk_Materialize_BamoInputSiteElementProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerI.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateInputSiteElementProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputSiteElementProxy **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = operator new(0x150uLL);
  memset_0(v3, 0, 0x150uLL);
  v3[2] = &BamoImpl::BamoInputSiteElementProxyImpl::`vftable';
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  *((_DWORD *)v3 + 10) = 0;
  *(_QWORD *)((char *)v3 + 44) = 0LL;
  v3[7] = 0LL;
  v3[8] = 0LL;
  v3[9] = 0LL;
  v3[10] = 0LL;
  v3[11] = 0LL;
  v3[12] = 0LL;
  v3[13] = 0LL;
  v3[14] = 0LL;
  v3[15] = 0LL;
  v3[16] = 0LL;
  v3[17] = 0LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  v3[20] = 0LL;
  v3[21] = 0LL;
  v3[22] = 0LL;
  v3[23] = 0LL;
  v3[24] = 0LL;
  v3[25] = 0LL;
  v3[26] = 0LL;
  v3[27] = 0LL;
  v3[28] = 0LL;
  v3[29] = 0LL;
  v3[30] = 0LL;
  v3[31] = 0LL;
  v3[32] = 0LL;
  v3[33] = 0LL;
  v3[34] = 0LL;
  v3[35] = 0LL;
  v3[36] = 0LL;
  v3[37] = 0LL;
  v3[38] = 0LL;
  v3[39] = 0LL;
  v3[40] = 0LL;
  *v3 = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  result = 0LL;
  v3[41] = 0LL;
  *a2 = (struct BamoInputSiteElementProxy *)v3;
  return result;
}
