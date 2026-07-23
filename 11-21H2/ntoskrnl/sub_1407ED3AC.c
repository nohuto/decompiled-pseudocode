/*
 * XREFs of sub_1407ED3AC @ 0x1407ED3AC
 * Callers:
 *     sub_1407ED310 @ 0x1407ED310 (sub_1407ED310.c)
 *     KseSetDeviceFlags @ 0x140963670 (KseSetDeviceFlags.c)
 *     sub_140963B40 @ 0x140963B40 (sub_140963B40.c)
 * Callees:
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 */

__int64 __fastcall sub_1407ED3AC(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // bx
  __int64 result; // rax
  unsigned __int16 i; // ax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( !a1 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v8 + 1] = -1073740768;
    dword_140C2A220[2 * v8] = 197405;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("TargetString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x31Du, 0LL);
  }
  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v9 + 1] = -1073740768;
    dword_140C2A220[2 * v9] = 197406;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x31Eu, 0LL);
  }
  result = sub_14075C924(a1, a2);
  if ( (int)result >= 0 )
  {
    for ( i = *(_WORD *)a1 & 0xFFFE; v2 < i; i = *(_WORD *)a1 >> 1 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_WORD *)(v7 + 2LL * v2) == 92 )
        *(_WORD *)(v7 + 2LL * v2) = 33;
      ++v2;
    }
    return 0LL;
  }
  return result;
}
