/*
 * XREFs of sub_14033D720 @ 0x14033D720
 * Callers:
 *     sub_140238BC4 @ 0x140238BC4 (sub_140238BC4.c)
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14033C4D0 @ 0x14033C4D0 (sub_14033C4D0.c)
 *     sub_14033C880 @ 0x14033C880 (sub_14033C880.c)
 *     sub_14033CBF0 @ 0x14033CBF0 (sub_14033CBF0.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 *     sub_1403AB344 @ 0x1403AB344 (sub_1403AB344.c)
 *     sub_1405C629C @ 0x1405C629C (sub_1405C629C.c)
 *     sub_1406F653C @ 0x1406F653C (sub_1406F653C.c)
 *     sub_1407D7B88 @ 0x1407D7B88 (sub_1407D7B88.c)
 *     sub_1407DD3D0 @ 0x1407DD3D0 (sub_1407DD3D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14033D720(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx

  result = (*(_DWORD *)(a1 + 1376) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
  {
    v2 = 2;
    if ( (unsigned int)result < 2 )
      return (unsigned int)result;
    return v2;
  }
  return result;
}
