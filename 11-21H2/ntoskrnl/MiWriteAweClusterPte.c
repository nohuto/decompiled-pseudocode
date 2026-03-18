/*
 * XREFs of MiWriteAweClusterPte @ 0x1405ACAD0
 * Callers:
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x14026EDE4 (MiWriteValidPteNewPage.c)
 *     MiRewritePteWithLockBit @ 0x1403C2C58 (MiRewritePteWithLockBit.c)
 */

void __fastcall MiWriteAweClusterPte(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  int i; // ebp

  if ( (_DWORD)a4 )
  {
    v5 = a5;
    for ( i = a4; v5; --v5 )
    {
      if ( i == 1 )
      {
        MiWriteValidPteNewPage(a2, a3, 1);
      }
      else if ( (unsigned int)(i - 2) <= 1 )
      {
        MiRewritePteWithLockBit(a1, a2, a3, a4);
      }
      else
      {
        *a2 = a3;
      }
      if ( (a3 & 1) != 0 )
        a3 ^= (a3 ^ (a3 + 4096)) & 0xFFFFFFFFFF000LL;
      ++a2;
    }
  }
}
