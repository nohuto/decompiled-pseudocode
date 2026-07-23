/*
 * XREFs of sub_140665AD0 @ 0x140665AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 */

__int64 __fastcall sub_140665AD0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx
  char v13; // [rsp+58h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v13 = 0;
  v10 = sub_140665B68(a1, a3 & 0xC0000000, a2, a4, a5, a6, a7, a8, a9, 0LL, 0LL, v13);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v10;
}
