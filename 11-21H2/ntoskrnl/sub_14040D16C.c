/*
 * XREFs of sub_14040D16C @ 0x14040D16C
 * Callers:
 *     sub_140400B8C @ 0x140400B8C (sub_140400B8C.c)
 *     sub_14040B088 @ 0x14040B088 (sub_14040B088.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_14040D16C(__int64 a1, __int64 a2)
{
  void *result; // rax

  if ( a1 != a2 )
    return memmove((void *)(a2 + 32), (const void *)(a1 + 32), (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  return result;
}
