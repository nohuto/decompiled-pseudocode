/*
 * XREFs of sub_14023B310 @ 0x14023B310
 * Callers:
 *     <none>
 * Callees:
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 */

struct _KTHREAD *__fastcall sub_14023B310(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx

  if ( byte_140D0688A )
  {
    v4 = __readcr3();
    __writecr3(v4);
    result = KeGetCurrentThread();
    v6 = *((_QWORD *)result + 23);
    if ( !*(_BYTE *)(v6 + 912) )
      return (struct _KTHREAD *)sub_140420AD0(v6, a2, a3, a4);
  }
  else
  {
    v7 = __readcr4();
    if ( (v7 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v7 ^ 0x80);
      __writecr4(v7 ^ 0x80);
      __writecr4(v7);
    }
    else
    {
      result = (struct _KTHREAD *)__readcr3();
      __writecr3((unsigned __int64)result);
    }
  }
  return result;
}
