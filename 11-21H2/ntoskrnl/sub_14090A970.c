/*
 * XREFs of sub_14090A970 @ 0x14090A970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14090A970(int a1, _QWORD *a2)
{
  if ( a1 != 1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  *a2 = 1LL;
  a2[1] = sub_14090AAC0;
  a2[2] = sub_14090AAF0;
  a2[3] = sub_140527CF0;
  a2[4] = sub_140528160;
  a2[12] = sub_140528C60;
  a2[13] = sub_14090AA70;
  a2[5] = sub_140528380;
  a2[6] = sub_14090AB10;
  a2[7] = PoRegisterDeviceNotify;
  a2[8] = sub_140528650;
  a2[9] = sub_140528F50;
  a2[10] = sub_140528440;
  a2[11] = sub_140528E00;
  return 0LL;
}
