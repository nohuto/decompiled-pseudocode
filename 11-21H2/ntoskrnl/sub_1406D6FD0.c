/*
 * XREFs of sub_1406D6FD0 @ 0x1406D6FD0
 * Callers:
 *     sub_1406D6E10 @ 0x1406D6E10 (sub_1406D6E10.c)
 *     sub_140910800 @ 0x140910800 (sub_140910800.c)
 * Callees:
 *     sub_14091D12C @ 0x14091D12C (sub_14091D12C.c)
 */

__int64 sub_1406D6FD0()
{
  int v0; // ebx
  volatile __int32 *v1; // rdi
  __int64 result; // rax

  v0 = 0;
  v1 = (volatile __int32 *)&unk_140C48E00;
  do
  {
    if ( _InterlockedExchange(v1, 0) )
      result = sub_14091D12C((unsigned int)v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 27 );
  return result;
}
