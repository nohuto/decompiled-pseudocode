/*
 * XREFs of sub_14039AC54 @ 0x14039AC54
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14039AC54(_QWORD *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax

  v3 = *a1 - 0x4FAB3541A1841308LL;
  if ( *a1 == 0x4FAB3541A1841308LL )
    v3 = a1[1] - 0x4A0BF25615F781BCLL;
  if ( v3 )
  {
    v4 = *a1 - 0x4A96E8BF8C5E7FDALL;
    if ( *a1 == 0x4A96E8BF8C5E7FDALL )
      v4 = a1[1] - 0x5C638C3AE2A6859ALL;
    if ( v4 )
    {
      v8 = *a1 - 0x41F0F694381B4222LL;
      if ( *a1 == 0x41F0F694381B4222LL )
        v8 = a1[1] - 0x2EDF60B25BFF8596LL;
      if ( v8 )
        *a3 |= 0x10u;
    }
  }
  v5 = *a2 - 0x4FAB3541A1841308LL;
  if ( *a2 == 0x4FAB3541A1841308LL )
    v5 = a2[1] - 0x4A0BF25615F781BCLL;
  if ( !v5 )
  {
    result = *a3 & 0xFFFFFFF0 | 1;
    goto LABEL_14;
  }
  v6 = *a2 - 0x4A96E8BF8C5E7FDALL;
  if ( *a2 == 0x4A96E8BF8C5E7FDALL )
    v6 = a2[1] - 0x5C638C3AE2A6859ALL;
  if ( !v6 )
  {
    result = *a3 & 0xFFFFFFF0 | 2;
LABEL_14:
    *a3 = result;
    return result;
  }
  result = *a2 - 0x41F0F694381B4222LL;
  if ( *a2 == 0x41F0F694381B4222LL )
    result = a2[1] - 0x2EDF60B25BFF8596LL;
  if ( !result )
  {
    result = *a3 & 0xFFFFFFF0 | 4;
    goto LABEL_14;
  }
  return result;
}
