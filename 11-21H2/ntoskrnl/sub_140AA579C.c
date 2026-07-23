/*
 * XREFs of sub_140AA579C @ 0x140AA579C
 * Callers:
 *     sub_140AA3DE0 @ 0x140AA3DE0 (sub_140AA3DE0.c)
 *     sub_140AA3E00 @ 0x140AA3E00 (sub_140AA3E00.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

struct _KTHREAD *__fastcall sub_140AA579C(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
  {
    result = KeGetCurrentThread();
    if ( (*((_DWORD *)result + 29) & 0x400) == 0 )
    {
      result = KeGetCurrentThread();
      if ( !*((_DWORD *)result + 121) && CurrentIrql != 2 )
        return (struct _KTHREAD *)sub_140A8C924(
                                    0xC4u,
                                    0x38uLL,
                                    CurrentIrql,
                                    *((unsigned int *)KeGetCurrentThread() + 121),
                                    a1);
    }
  }
  return result;
}
