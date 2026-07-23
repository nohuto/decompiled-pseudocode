/*
 * XREFs of sub_1403A5920 @ 0x1403A5920
 * Callers:
 *     ExInitializeFastResource @ 0x1403A5830 (ExInitializeFastResource.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E4840 @ 0x1405E4840 (sub_1405E4840.c)
 *     sub_1405E48CC @ 0x1405E48CC (sub_1405E48CC.c)
 *     sub_1405E4CD4 @ 0x1405E4CD4 (sub_1405E4CD4.c)
 */

void *__fastcall sub_1403A5920(_QWORD *a1)
{
  void *result; // rax
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // rsi
  void *v5; // r14
  __int16 v6; // bp

  result = memset(a1, 0, 0x68uLL);
  a1[1] = a1;
  v3 = 0LL;
  *a1 = a1;
  *((_OWORD *)a1 + 2) = 0LL;
  a1[12] = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v4 = qword_140C1BC48;
    if ( qword_140C1BC48 )
    {
      result = (void *)sub_1405E4840(qword_140C1BC48);
      v5 = result;
      if ( result )
      {
        result = (void *)sub_1405E4CD4(v4);
        v6 = (__int16)result;
        if ( !(_DWORD)result )
          result = (void *)sub_1405E48CC(v4, v5);
      }
      else
      {
        v6 = 0;
      }
      LOWORD(v3) = v6;
    }
    v3 = (unsigned __int16)v3;
  }
  a1[11] = v3;
  return result;
}
