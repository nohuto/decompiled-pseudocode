/*
 * XREFs of sub_1405BCAF8 @ 0x1405BCAF8
 * Callers:
 *     sub_1402011DC @ 0x1402011DC (sub_1402011DC.c)
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     sub_1405AB9F0 @ 0x1405AB9F0 (sub_1405AB9F0.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 */

void __fastcall sub_1405BCAF8(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rdi
  struct _KTHREAD *v4; // rax

  if ( a2 == -1073740748 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v3 = *((_QWORD *)CurrentThread + 23);
      v4 = *(struct _KTHREAD **)(v3 + 1248);
      if ( v4 )
      {
        if ( v4 != CurrentThread )
        {
          --*((_WORD *)CurrentThread + 243);
          ExAcquirePushLockExclusiveEx(v3 + 1224, 0LL);
          *((_BYTE *)CurrentThread + 1384) |= 1u;
          sub_140281A58((__int64)CurrentThread, v3);
        }
      }
    }
  }
  else if ( a2 == -1073741801
         && KeGetCurrentIrql() < 2u
         && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0
         && (*((_DWORD *)KeGetCurrentThread() + 345) & 0xC) == 0 )
  {
    sub_1405B8348(*(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
