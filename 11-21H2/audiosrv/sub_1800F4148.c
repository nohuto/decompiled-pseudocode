/*
 * XREFs of sub_1800F4148 @ 0x1800F4148
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1800F4148(__int64 a1, __int64 a2)
{
  char v2; // of
  __int64 v3; // rdi
  double v4; // st7
  __int64 v6; // [rsp-8h] [rbp-8h]

  if ( !v2 )
    JUMPOUT(0x1800F4113LL);
  *(float *)(v3 + 4 * a2) = v4;
  return v6;
}
