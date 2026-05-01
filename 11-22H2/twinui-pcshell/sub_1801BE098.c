/*
 * XREFs of sub_1801BE098 @ 0x1801BE098
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801BE098(__int64 a1)
{
  char v1; // of
  __int64 v2; // rbx
  __int64 v3; // rsi
  double v4; // st7

  if ( !v1 )
    JUMPOUT(0x1801BE0F2LL);
  *(float *)(v2 + v3 - 66) = v4;
  BYTE1(a1) = -57;
  return CStartExperienceManager::add_DismissRequested(a1);
}
