/*
 * XREFs of ?CreateProxy_InputSystem@BamoImpl@@YAXPEAPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180123E6C
 * Callers:
 *     ?Materialize_BamoInputSystemProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180127BD8 (-Materialize_BamoInputSystemProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateProxy_InputSystem(BamoImpl *this, struct Microsoft::Bamo::BamoProxy **a2)
{
  _QWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0xB0uLL);
  *(_QWORD *)this = v3;
  *v3 = &BamoInputSystemProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &BamoInputSystemProxy::`vftable'{for `IInputSystemProxy'};
  v3[2] = &BamoImpl::BamoInputSystemProxyImpl::`vftable';
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[5] = 0LL;
  v3[6] = 0LL;
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
}
