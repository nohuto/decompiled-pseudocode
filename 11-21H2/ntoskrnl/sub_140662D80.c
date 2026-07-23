/*
 * XREFs of sub_140662D80 @ 0x140662D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 */

__int64 __fastcall sub_140662D80(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  char v10; // [rsp+58h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = 1;
  v7 = sub_140665B68(a1, 0LL, 0LL, 0LL, 0LL, a2, a3, 0LL, a4, a5, a6, v10);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v7 == -1073740029 )
    return (unsigned int)-1073741813;
  return v7;
}
