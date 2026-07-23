/*
 * XREFs of MiWriteAweClusterPte @ 0x14064CA58
 * Callers:
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x1402EB2DC (MiWriteValidPteNewPage.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiWriteAweClusterPte(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rsi
  int i; // ebp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( (_DWORD)a4 )
  {
    result = (__int64)&retaddr;
    v6 = a5;
    for ( i = a4; v6; --v6 )
    {
      if ( i == 1 )
      {
        result = MiWriteValidPteNewPage(a2, a3, 1);
      }
      else
      {
        result = (unsigned int)(i - 2);
        if ( (unsigned int)result <= 1 )
          result = MiRewritePteWithLockBit(a1, a2, a3, a4);
        else
          *a2 = a3;
      }
      if ( (a3 & 1) != 0 )
      {
        result = (a3 ^ (a3 + 4096)) & 0xFFFFFFFFFF000LL;
        a3 ^= result;
      }
      ++a2;
    }
  }
  return result;
}
