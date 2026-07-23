/*
 * XREFs of sub_140293B50 @ 0x140293B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140293BA0 @ 0x140293BA0 (sub_140293BA0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140293B50(PRKDPC Dpc, __int64 a2)
{
  int v4; // eax

  v4 = sub_14042A5E0(KeGetCurrentPrcb(), *(_QWORD *)(a2 + 8));
  if ( v4 < 0 )
    *(_DWORD *)(a2 + 40) = v4;
  return sub_140293BA0(Dpc);
}
