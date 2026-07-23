/*
 * XREFs of sub_1403A35B8 @ 0x1403A35B8
 * Callers:
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_1403AD034 @ 0x1403AD034 (sub_1403AD034.c)
 * Callees:
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 */

struct _KTHREAD *__fastcall sub_1403A35B8(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx

  if ( byte_140E01840 )
  {
    if ( !a1 || a1 == 2 )
      goto LABEL_7;
  }
  else if ( a1 && a1 <= 2 )
  {
    goto LABEL_7;
  }
  if ( !byte_140D0688A )
  {
    v7 = __readcr4();
    if ( (v7 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v7 ^ 0x80);
      __writecr4(v7 ^ 0x80);
      __writecr4(v7);
      return result;
    }
LABEL_7:
    result = (struct _KTHREAD *)__readcr3();
    __writecr3((unsigned __int64)result);
    return result;
  }
  v4 = __readcr3();
  __writecr3(v4);
  result = KeGetCurrentThread();
  v6 = *((_QWORD *)result + 23);
  if ( !*(_BYTE *)(v6 + 912) )
    return (struct _KTHREAD *)sub_140420AD0(v6, 0LL, a3, a4);
  return result;
}
