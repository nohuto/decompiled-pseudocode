/*
 * XREFs of KeRaiseUserException @ 0x14056E010
 * Callers:
 *     sub_14025032C @ 0x14025032C (sub_14025032C.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A2E10 @ 0x1407A2E10 (sub_1407A2E10.c)
 * Callees:
 *     sub_14025E30C @ 0x14025E30C (sub_14025E30C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall KeRaiseUserException(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v4; // r10
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v4 = 1;
  if ( !CurrentIrql )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v5 = *((_QWORD *)CurrentThread + 18);
  if ( v5 )
  {
    if ( (*(_BYTE *)(v5 + 368) & 1) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)CurrentThread + 30) + 704LL) = a1;
      *(_WORD *)(v5 + 368) = 51;
      *(_QWORD *)(v5 + 360) = qword_140D071A0;
      if ( *(_BYTE *)(v5 + 43) != 2 )
        sub_14025E30C(v5);
    }
  }
  if ( CurrentIrql < v4 )
  {
    if ( dword_140D06B08 )
    {
      if ( ((unsigned __int8)dword_140D06B08 & v4) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << (v4 + CurrentIrql));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return a1;
}
