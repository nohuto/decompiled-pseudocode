/*
 * XREFs of sub_140AA56FC @ 0x140AA56FC
 * Callers:
 *     sub_140AA3C00 @ 0x140AA3C00 (sub_140AA3C00.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

struct _KTHREAD *__fastcall sub_140AA56FC(__int64 a1, char a2)
{
  struct _KTHREAD *result; // rax
  unsigned __int8 CurrentIrql; // dl

  if ( (a1 & 7) != 0 )
    result = (struct _KTHREAD *)sub_140A8C924(0xC4u, 0x3DuLL, 0LL, 0LL, a1);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
  {
    result = KeGetCurrentThread();
    if ( (*((_DWORD *)result + 29) & 0x400) == 0 )
    {
      result = KeGetCurrentThread();
      if ( !*((_DWORD *)result + 121) && (CurrentIrql != 2 || a2) )
        return (struct _KTHREAD *)sub_140A8C924(
                                    0xC4u,
                                    0x37uLL,
                                    CurrentIrql,
                                    *((unsigned int *)KeGetCurrentThread() + 121),
                                    a1);
    }
  }
  return result;
}
