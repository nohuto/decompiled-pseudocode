/*
 * XREFs of KeSetPriorityThread @ 0x140344340
 * Callers:
 *     sub_14023C3B4 @ 0x14023C3B4 (sub_14023C3B4.c)
 *     sub_14026446C @ 0x14026446C (sub_14026446C.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     sub_140288EE4 @ 0x140288EE4 (sub_140288EE4.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     sub_14035CA04 @ 0x14035CA04 (sub_14035CA04.c)
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 *     sub_1403C6D20 @ 0x1403C6D20 (sub_1403C6D20.c)
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 *     sub_1403CA190 @ 0x1403CA190 (sub_1403CA190.c)
 *     sub_1403CB9F0 @ 0x1403CB9F0 (sub_1403CB9F0.c)
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 *     sub_1403DD920 @ 0x1403DD920 (sub_1403DD920.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 *     sub_14058DE20 @ 0x14058DE20 (sub_14058DE20.c)
 *     sub_1405C6380 @ 0x1405C6380 (sub_1405C6380.c)
 *     ExRegisterBootDevice @ 0x14063A090 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_140A914C4 @ 0x140A914C4 (sub_140A914C4.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14062E0D0 @ 0x14062E0D0 (sub_14062E0D0.c)
 */

// local variable allocation has failed, the output may be wrong!
KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  __int64 v2; // r8
  __int64 v3; // r9
  KPRIORITY v4; // edi
  int v6; // r12d
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *v9; // r15
  __int64 v10; // rcx
  char v11; // cl
  char v12; // al
  KPRIORITY v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  int v17; // edx
  char v18; // al
  int v19; // eax
  char v20; // al
  char v21; // al
  struct _KPRCB *v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+70h] [rbp+8h] BYREF
  __int64 v32; // [rsp+80h] [rbp+18h] BYREF

  v4 = Priority;
  if ( *((_UNKNOWN **)Thread + 68) == &unk_140D32B00 )
    return 1;
  v6 = 0;
  v32 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_QWORD *)&Priority = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)Priority | *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 20) = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v31 = 0;
  v9 = (struct _KTHREAD *)*((_QWORD *)CurrentPrcb + 1);
  v10 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v10 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v27 = *(_DWORD *)(v10 + 24);
      *(_DWORD *)(v10 + 24) = v27 + 1;
      if ( v27 == -1 )
LABEL_45:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)Thread + 16, 0LL) )
  {
    v25 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v25 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v28 = *(_DWORD *)(v25 + 24) - 1;
        *(_DWORD *)(v25 + 24) = v28;
        if ( !v28 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v31, *(__int64 *)&Priority, v2, v3);
    while ( *((_QWORD *)Thread + 8) );
    v26 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v26 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v29 = *(_DWORD *)(v26 + 24);
        *(_DWORD *)(v26 + 24) = v29 + 1;
        if ( v29 == -1 )
          goto LABEL_45;
      }
    }
  }
  v11 = *((_BYTE *)Thread + 564);
  v12 = *((_BYTE *)Thread + 195);
  v13 = v12;
  if ( v11 )
  {
    if ( (v11 & 0xF) != 0 )
    {
      *((_DWORD *)Thread + 218) = MEMORY[0xFFFFF78000000320];
      v12 = *((_BYTE *)Thread + 195);
    }
    *((_BYTE *)Thread + 564) = 0;
  }
  if ( v4 != v12 )
  {
    if ( Thread != v9 || *((_BYTE *)CurrentPrcb + 32) )
    {
      v14 = *((_QWORD *)Thread + 9);
    }
    else
    {
      _disable();
      v14 = sub_140345AA0(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v15 = v14 + dword_140D050CC * (unsigned int)*((unsigned __int8 *)Thread + 651);
    if ( (*((_DWORD *)Thread + 30) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)Thread + 30, 5u);
    v16 = *((_BYTE *)Thread + 563);
    *((_QWORD *)Thread + 4) = v15;
    if ( v16 && !v4 )
      v4 = 1;
    if ( v16 < 16 || v4 >= 16 )
    {
      v17 = *((_DWORD *)Thread + 257);
      if ( v4 < 16 )
      {
        v19 = 32;
      }
      else
      {
        v18 = *((_BYTE *)Thread + (char)v4 + 824);
        if ( v18 == -1 )
          KeBugCheckEx(0x157u, (ULONG_PTR)Thread, (char)v4, 1uLL, 0LL);
        *((_BYTE *)Thread + (char)v4 + 824) = v18 + 1;
        v19 = v4;
        *((_DWORD *)Thread + 214) |= 1 << v4;
      }
      *((_DWORD *)Thread + 257) = v19;
      if ( v17 != 32 )
      {
        v20 = *((_BYTE *)Thread + (char)v17 + 824);
        if ( !v20 )
          KeBugCheckEx(0x157u, (ULONG_PTR)Thread, (char)v17, 2uLL, 0LL);
        v21 = v20 - 1;
        *((_BYTE *)Thread + (char)v17 + 824) = v21;
        if ( !v21 )
          *((_DWORD *)Thread + 214) ^= 1 << v17;
      }
      if ( (unsigned __int8)sub_140344A30(Thread, &v32, (unsigned int)v4) )
        v6 = *((char *)Thread + 195);
    }
  }
  *((_QWORD *)Thread + 8) = 0LL;
  v22 = KeGetCurrentPrcb();
  v23 = *((_QWORD *)v22 + 4375);
  if ( v23 )
  {
    if ( *((_BYTE *)v22 + 32) <= 1u )
    {
      v30 = *(_DWORD *)(v23 + 24) - 1;
      *(_DWORD *)(v23 + 24) = v30;
      if ( !v30 )
        sub_140418E4C(v22);
    }
  }
  sub_140344800(CurrentPrcb, &v32, CurrentIrql);
  if ( (WORD2(xmmword_140D06900) & 0x2000) != 0 )
  {
    if ( v6 )
      sub_14062E0D0((_DWORD)Thread, 1328, v13, v6, 0LL);
  }
  return v13;
}
