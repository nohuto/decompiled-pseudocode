/*
 * XREFs of KeSetActualBasePriorityThread @ 0x14028FD20
 * Callers:
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_140253900 @ 0x140253900 (sub_140253900.c)
 *     sub_140259B30 @ 0x140259B30 (sub_140259B30.c)
 *     sub_14025C448 @ 0x14025C448 (sub_14025C448.c)
 *     sub_14025C460 @ 0x14025C460 (sub_14025C460.c)
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     sub_140267A5C @ 0x140267A5C (sub_140267A5C.c)
 *     IoApplyPriorityInfoThread @ 0x14028F280 (IoApplyPriorityInfoThread.c)
 *     sub_14028F8E4 @ 0x14028F8E4 (sub_14028F8E4.c)
 *     sub_1402C4BF0 @ 0x1402C4BF0 (sub_1402C4BF0.c)
 *     sub_14035F4C8 @ 0x14035F4C8 (sub_14035F4C8.c)
 *     sub_1403773D8 @ 0x1403773D8 (sub_1403773D8.c)
 *     sub_14037A5F0 @ 0x14037A5F0 (sub_14037A5F0.c)
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 *     sub_140384F50 @ 0x140384F50 (sub_140384F50.c)
 *     sub_14038B6C0 @ 0x14038B6C0 (sub_14038B6C0.c)
 *     sub_1403B5088 @ 0x1403B5088 (sub_1403B5088.c)
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 *     sub_1403C6B00 @ 0x1403C6B00 (sub_1403C6B00.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 *     sub_1403D8FF0 @ 0x1403D8FF0 (sub_1403D8FF0.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 *     sub_1405C614C @ 0x1405C614C (sub_1405C614C.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 *     sub_140859AD4 @ 0x140859AD4 (sub_140859AD4.c)
 *     sub_140864F80 @ 0x140864F80 (sub_140864F80.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_140291174 @ 0x140291174 (sub_140291174.c)
 *     sub_140291EE4 @ 0x140291EE4 (sub_140291EE4.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062E0D0 @ 0x14062E0D0 (sub_14062E0D0.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  struct _KDPC *v9; // rcx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rcx
  __int64 v15; // r9
  PVOID *v16; // r8
  PVOID *p_SystemArgument2; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v24 = a2;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &unk_140D32B00 )
    return 1LL;
  v25 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v15 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  v5 = *((_QWORD *)CurrentPrcb + 1);
  v6 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v6 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v20 = *(_DWORD *)(v6 + 24);
      *(_DWORD *)(v6 + 24) = v20 + 1;
      if ( v20 == -1 )
LABEL_39:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    v18 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v21 = *(_DWORD *)(v18 + 24) - 1;
        *(_DWORD *)(v18 + 24) = v21;
        if ( !v21 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v23);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    v19 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v19 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v22 = *(_DWORD *)(v19 + 24);
        *(_DWORD *)(v19 + 24) = v22 + 1;
        if ( v22 == -1 )
          goto LABEL_39;
      }
    }
  }
  v7 = *(char *)(BugCheckParameter1 + 563);
  *(_BYTE *)(BugCheckParameter1 + 645) = 0;
  v8 = v7;
  v9 = (struct _KDPC *)KeGetCurrentPrcb();
  if ( (char)v24 < (char)v7 )
  {
    if ( *(_BYTE *)(BugCheckParameter1 + 871) )
    {
      v16 = (PVOID *)(BugCheckParameter1 + 816);
      if ( *(_QWORD *)(BugCheckParameter1 + 816) == 1LL )
      {
        p_SystemArgument2 = &v9[557].SystemArgument2;
        if ( v9 != (struct _KDPC *)-35696LL )
        {
          *v16 = *p_SystemArgument2;
          *p_SystemArgument2 = v16;
          _InterlockedIncrement16((volatile signed __int16 *)(BugCheckParameter1 + 868));
          sub_140229D30(v9);
        }
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 563) = v24;
  v10 = *(_BYTE *)(BugCheckParameter1 + 564);
  if ( v10 )
  {
    if ( (v10 & 0xF) != 0 )
      *(_DWORD *)(BugCheckParameter1 + 872) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(BugCheckParameter1 + 564) = 0;
  }
  if ( v24 != *(char *)(BugCheckParameter1 + 195) )
  {
    if ( BugCheckParameter1 != v5 || *((_BYTE *)CurrentPrcb + 32) )
    {
      v11 = *(_QWORD *)(BugCheckParameter1 + 72);
    }
    else
    {
      _disable();
      v11 = sub_140345AA0(CurrentPrcb, BugCheckParameter1, 0LL);
      _enable();
    }
    v12 = v11 + dword_140D050CC * (unsigned int)*(unsigned __int8 *)(BugCheckParameter1 + 651);
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 5u);
    *(_QWORD *)(BugCheckParameter1 + 32) = v12;
    sub_140291174(BugCheckParameter1);
    sub_140344A30(BugCheckParameter1, &v25, v24);
  }
  v13 = *(_BYTE **)(BugCheckParameter1 + 232);
  if ( v13 && (*v13 & 0x7F) == 0x15 )
    sub_140291EE4(v13, BugCheckParameter1);
  else
    sub_140224100(BugCheckParameter1);
  sub_140344800(CurrentPrcb, &v25, CurrentIrql);
  if ( (WORD2(xmmword_140D06900) & 0x2000) != 0 )
    sub_14062E0D0(BugCheckParameter1, 1329, v8, v24, (__int64)&v24);
  return v8;
}
