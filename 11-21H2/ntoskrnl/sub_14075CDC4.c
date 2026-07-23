/*
 * XREFs of sub_14075CDC4 @ 0x14075CDC4
 * Callers:
 *     sub_14057D548 @ 0x14057D548 (sub_14057D548.c)
 *     sub_14057DA30 @ 0x14057DA30 (sub_14057DA30.c)
 *     sub_14075C424 @ 0x14075C424 (sub_14075C424.c)
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 *     sub_14075CC14 @ 0x14075CC14 (sub_14075CC14.c)
 *     sub_14075CCC8 @ 0x14075CCC8 (sub_14075CCC8.c)
 *     sub_14075ECF4 @ 0x14075ECF4 (sub_14075ECF4.c)
 *     sub_1407EC8C4 @ 0x1407EC8C4 (sub_1407EC8C4.c)
 *     sub_1407ED310 @ 0x1407ED310 (sub_1407ED310.c)
 *     sub_14085C084 @ 0x14085C084 (sub_14085C084.c)
 *     KseSetDeviceFlags @ 0x140963670 (KseSetDeviceFlags.c)
 *     sub_140963B40 @ 0x140963B40 (sub_140963B40.c)
 *     sub_140964E64 @ 0x140964E64 (sub_140964E64.c)
 *     sub_140965070 @ 0x140965070 (sub_140965070.c)
 *     sub_1409651B8 @ 0x1409651B8 (sub_1409651B8.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 */

void __fastcall sub_14075CDC4(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      sub_1402D8494(v2);
      *(_OWORD *)a1 = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v3 + 1] = -1073740768;
    dword_140C2A220[2 * v3] = 197451;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Bu, 0LL);
  }
}
