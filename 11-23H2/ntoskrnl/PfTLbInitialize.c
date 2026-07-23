/*
 * XREFs of PfTLbInitialize @ 0x14079D648
 * Callers:
 *     PfTFreeBufferList @ 0x14079D580 (PfTFreeBufferList.c)
 *     PfTAllocateBuffers @ 0x140846468 (PfTAllocateBuffers.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall PfTLbInitialize(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    memset(a1 + 3, 0, a2 - 24LL);
  }
  else
  {
    memset(a1, 0, a2);
    a1[1] = a1;
    *a1 = a1;
  }
  *((_DWORD *)a1 + 4) = 0;
  result = (a2 - 24) >> 4;
  *((_DWORD *)a1 + 5) = result;
  return result;
}
