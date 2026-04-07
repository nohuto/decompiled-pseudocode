/*
 * XREFs of ?GetGroupingTarget@CAppArrangementDelayed@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z @ 0x1800DA150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppArrangementDelayed::GetGroupingTarget(__int64 a1, __int16 a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // edx
  int v4; // r9d

  v2 = &unk_18012963C;
  v3 = a2 & 0xFFF;
  v4 = 0;
  while ( (*(v2 - 1) & 0xFFF) != v3 && (*v2 & 0xFFF) != v3 )
  {
    ++v4;
    v2 += 2;
    if ( v4 )
      return v3;
  }
  return *(v2 - 1) & 0xFFF;
}
