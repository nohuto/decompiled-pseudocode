/*
 * XREFs of sub_140A8D4A4 @ 0x140A8D4A4
 * Callers:
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 * Callees:
 *     sub_140A8ACE8 @ 0x140A8ACE8 (sub_140A8ACE8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

struct _KTHREAD *__fastcall sub_140A8D4A4(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  struct _KTHREAD *result; // rax
  struct _KPROCESS *v6; // r9

  result = (struct _KTHREAD *)(BugCheckParameter3 - 1);
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFDLL )
  {
    result = KeGetCurrentThread();
    v6 = (struct _KPROCESS *)*((_QWORD *)result + 23);
    if ( v6 != PsInitialSystemProcess && v6 != qword_140D06940 )
    {
      if ( !a3 )
        return (struct _KTHREAD *)sub_140A8C924(0xC4u, 0xE2uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
      result = (struct _KTHREAD *)sub_140A8ACE8(*(_QWORD *)(a3 + 176));
      if ( (_DWORD)result )
        return (struct _KTHREAD *)sub_140A8C924(0xC4u, 0xE2uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    }
  }
  return result;
}
