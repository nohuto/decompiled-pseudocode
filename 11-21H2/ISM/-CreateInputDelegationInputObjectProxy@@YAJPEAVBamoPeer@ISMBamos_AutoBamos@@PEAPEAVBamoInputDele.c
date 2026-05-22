/*
 * XREFs of ?CreateInputDelegationInputObjectProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputDelegationInputObjectProxy@@@Z @ 0x180005D88
 * Callers:
 *     ?Thunk_Materialize_BamoInputDelegationInputObjectProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800056B0 (-Thunk_Materialize_BamoInputDelegationInputObjectProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateInputDelegationInputObjectProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputDelegationInputObjectProxy **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = operator new(0x60uLL);
  memset_0(v3, 0, 0x60uLL);
  v3[2] = &BamoImpl::BamoInputDelegationInputObjectProxyImpl::`vftable';
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[5] = 0LL;
  *v3 = &InputDelegationInputObjectProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &InputDelegationInputObjectProxy::`vftable'{for `IInputDelegationInputObjectProxy'};
  v3[6] = &InputDelegationInputObjectProxy::`vftable'{for `IDelegateInformationProvider'};
  v3[7] = &InputDelegationInputObjectProxy::`vftable'{for `IInputSiteClientPrivate'};
  result = 0LL;
  v3[8] = 0LL;
  v3[9] = 0LL;
  v3[10] = 0LL;
  *((_DWORD *)v3 + 22) = 1;
  *a2 = (struct BamoInputDelegationInputObjectProxy *)v3;
  return result;
}
