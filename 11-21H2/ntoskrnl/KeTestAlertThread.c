/*
 * XREFs of KeTestAlertThread @ 0x140299000
 * Callers:
 *     sub_1402987C0 @ 0x1402987C0 (sub_1402987C0.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_140704950 @ 0x140704950 (sub_140704950.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall KeTestAlertThread(char a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  char v6; // bl
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf
  int v17; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  while ( 1 )
  {
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v10 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 24) = v10 + 1;
        if ( v10 == -1 )
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
        v11 = *(_DWORD *)(v9 + 24) - 1;
        *(_DWORD *)(v9 + 24) = v11;
        if ( !v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v17);
    while ( *((_QWORD *)CurrentThread + 8) );
  }
  v6 = *((_BYTE *)CurrentThread + v2 + 114);
  if ( v6 )
  {
    *((_BYTE *)CurrentThread + v2 + 114) = 0;
  }
  else if ( (_BYTE)v2 == 1
         && *((struct _KTHREAD **)CurrentThread + 21) != (struct _KTHREAD *)((char *)CurrentThread + 168) )
  {
    *((_BYTE *)CurrentThread + 194) |= 2u;
  }
  sub_140224100((__int64)CurrentThread);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = *((_QWORD *)v13 + 4375);
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C(v13);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
