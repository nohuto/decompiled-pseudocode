/*
 * XREFs of ?GetCount@CAppLayoutOperation@@UEAAJPEAI@Z @ 0x180613510
 * Callers:
 *     ?GetCount@CAppLayoutOperation@@W7EAAJPEAI@Z @ 0x18020ABD0 (-GetCount@CAppLayoutOperation@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806151A8 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetCount(CAppLayoutOperation *this, unsigned int *a2)
{
  __int64 result; // rax

  *a2 = 0;
  result = CAppLayoutOperation::_GenerateOperationItemList(this);
  if ( (int)result >= 0 )
    *a2 = *((_DWORD *)this + 32);
  return result;
}
