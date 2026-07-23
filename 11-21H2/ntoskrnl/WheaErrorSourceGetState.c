/*
 * XREFs of WheaErrorSourceGetState @ 0x140643540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 */

__int64 __fastcall WheaErrorSourceGetState(unsigned int a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_140643F2C(&unk_140CE1A98, a1);
  if ( ((v1 + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64)) == 0 )
    return 3LL;
  result = *(unsigned int *)(((v1 + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64)) + 0xC);
  if ( (_DWORD)result == 4 )
    return 3LL;
  return result;
}
