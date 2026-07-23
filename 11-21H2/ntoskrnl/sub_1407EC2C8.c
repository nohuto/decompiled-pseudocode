/*
 * XREFs of sub_1407EC2C8 @ 0x1407EC2C8
 * Callers:
 *     sub_1407ED88C @ 0x1407ED88C (sub_1407ED88C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407ED774 @ 0x1407ED774 (sub_1407ED774.c)
 *     sub_1407EDCAC @ 0x1407EDCAC (sub_1407EDCAC.c)
 *     sub_1407EF430 @ 0x1407EF430 (sub_1407EF430.c)
 */

__int64 __fastcall sub_1407EC2C8(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  sub_1407ED774(&stru_140010F70);
  if ( dword_140C1F3B8 == a1 && a1 != -1 )
  {
    memset(&byte_140C1F3A0, 0, 0x50uLL);
    dword_140C1F3B8 = -1;
    dword_140C1F3BC = 3;
  }
  sub_1407EDCAC(a1, 0LL, 0LL);
  sub_1407EF430(a1, 2LL);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  return result;
}
