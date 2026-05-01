/*
 * XREFs of ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x1800EAC60
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800EBB6C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 */

__int64 __fastcall CApplicationManager::GetAssociatedGlomCount(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 *a3)
{
  __int64 result; // rax
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  result = CActivationBasedAppAndGlomCollection::_GetGlomCollection(
             (CApplicationManager *)((char *)this + 384),
             a2,
             &v5,
             0LL);
  if ( (int)result >= 0 )
    *a3 = *((_QWORD *)v5 + 1);
  return result;
}
