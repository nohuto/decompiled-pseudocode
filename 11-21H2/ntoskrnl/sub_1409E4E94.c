/*
 * XREFs of sub_1409E4E94 @ 0x1409E4E94
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_1409E4E94(__int64 a1, unsigned int a2, _OWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a2 == 0xFFFF )
    a2 = *(unsigned __int8 *)(a1 + 4232);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = sub_140797594(a1, a2, 0);
  v6 = 0;
  if ( v5 )
  {
    *a3 = *(_OWORD *)(v5 + 304);
    sub_1407981E8((unsigned int *)v5, 0);
  }
  else
  {
    v6 = -1073741162;
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v6;
}
