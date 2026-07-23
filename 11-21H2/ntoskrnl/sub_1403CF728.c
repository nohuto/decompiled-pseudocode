/*
 * XREFs of sub_1403CF728 @ 0x1403CF728
 * Callers:
 *     sub_140268CA8 @ 0x140268CA8 (sub_140268CA8.c)
 *     sub_14059C580 @ 0x14059C580 (sub_14059C580.c)
 *     sub_14084B418 @ 0x14084B418 (sub_14084B418.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403CF728(__int64 a1, signed __int32 *a2, unsigned __int16 a3)
{
  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 896),
                           *a2 ^ (a3 ^ (unsigned __int16)*a2) & 0x3FF,
                           *a2);
  else
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)(a1 + 896),
                           (*(_DWORD *)(a1 + 896) & 0xFFFFFC00 | 0x200) + 1024);
}
