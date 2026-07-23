/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x140543A10
 * Callers:
 *     sub_14099E040 @ 0x14099E040 (sub_14099E040.c)
 * Callees:
 *     sub_140544640 @ 0x140544640 (sub_140544640.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 v1; // rax

  if ( (dword_140D0688C & 2) != 0 && (v1 = sub_140544640(a1)) != 0 )
    return *(unsigned int *)(v1 + 4);
  else
    return 0xFFFFFFFFLL;
}
