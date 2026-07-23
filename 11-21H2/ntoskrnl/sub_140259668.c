/*
 * XREFs of sub_140259668 @ 0x140259668
 * Callers:
 *     PsResumeProcess @ 0x1406E5510 (PsResumeProcess.c)
 *     sub_1409B2DD0 @ 0x1409B2DD0 (sub_1409B2DD0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402EEAA8 @ 0x1402EEAA8 (sub_1402EEAA8.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 *     sub_1409E6524 @ 0x1409E6524 (sub_1409E6524.c)
 */

__int64 __fastcall sub_140259668(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = a1 + 1112;
  if ( (unsigned __int8)sub_140347810(a1 + 1112) == 1 )
  {
    v4 = sub_1407E7750(a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = v4;
      if ( !v4 )
        break;
      if ( (*(_DWORD *)(v4 + 116) & 0x200000) == 0 )
        sub_1402EEAA8(v4, 1LL);
      v4 = sub_1407E7750(a1, v6);
    }
    sub_1402AD030(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  sub_1402F9540(CurrentThread);
  if ( (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    sub_1409E6524(v5, CurrentThread, a1, 1LL);
  return v5;
}
