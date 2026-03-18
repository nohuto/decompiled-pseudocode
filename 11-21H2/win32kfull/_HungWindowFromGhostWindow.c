/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C01043E4
 * Callers:
 *     NtUserHungWindowFromGhostWindow @ 0x1C0104300 (NtUserHungWindowFromGhostWindow.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C010435C (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 Prop; // rax
  __int64 v5; // rax

  v2 = 0LL;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
    if ( Prop || (Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u)) != 0 )
    {
      v5 = HMValidateHandleNoSecure(Prop, 1);
      v2 = v5;
      if ( v5 && (unsigned int)IsWindowBeingDestroyed(v5) )
        return 0LL;
    }
  }
  return v2;
}
