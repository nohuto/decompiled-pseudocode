/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x14004F978
 * Callers:
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$22 @ 0x1400389F0 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$22.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x14004FD6E (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
