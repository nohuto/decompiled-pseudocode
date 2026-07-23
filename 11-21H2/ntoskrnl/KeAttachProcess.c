/*
 * XREFs of KeAttachProcess @ 0x140252530
 * Callers:
 *     sub_1403C6DC0 @ 0x1403C6DC0 (sub_1403C6DC0.c)
 *     sub_140A58CF8 @ 0x140A58CF8 (sub_140A58CF8.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140346E50 @ 0x140346E50 (sub_140346E50.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v2; // esi
  struct _KPROCESS *v3; // r8
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (int)Process;
  v3 = (struct _KPROCESS *)*((_QWORD *)CurrentThread + 23);
  if ( v3 != Process )
  {
    if ( *((_BYTE *)CurrentThread + 586)
      || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0
      || (*((_DWORD *)Process + 158) & 0x800) != 0 )
    {
      KeBugCheckEx(
        5u,
        (ULONG_PTR)Process,
        (ULONG_PTR)v3,
        *((unsigned __int8 *)CurrentThread + 586),
        KeGetPcr()[36].Unused0[2] & 0x10001);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      LODWORD(v3) = (-1 << (CurrentIrql + 1)) & 4 | *(_DWORD *)(v7 + 20);
      *(_DWORD *)(v7 + 20) = (_DWORD)v3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 0;
    while ( 1 )
    {
      v6 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v6 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v8 = *(_DWORD *)(v6 + 24);
          *(_DWORD *)(v6 + 24) = v8 + 1;
          if ( v8 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
        break;
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v9 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v10 = *(_DWORD *)(v9 + 24) - 1;
          *(_DWORD *)(v9 + 24) = v10;
          if ( !v10 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v11);
      while ( *((_QWORD *)CurrentThread + 8) );
    }
    LOBYTE(v3) = CurrentIrql;
    sub_140346E50((_DWORD)CurrentThread, v2, (_DWORD)v3, 0, (__int64)CurrentThread + 600);
  }
}
