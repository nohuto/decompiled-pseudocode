/*
 * XREFs of sub_1402AACD0 @ 0x1402AACD0
 * Callers:
 *     sub_14020B830 @ 0x14020B830 (sub_14020B830.c)
 *     IoAllocateIrpEx @ 0x14022CFA0 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402AACD0(__int64 a1, char a2, char a3)
{
  char v3; // r13
  char v5; // si
  struct _KPRCB *CurrentPrcb; // rdi
  char *v7; // rcx
  __int64 v8; // r12
  unsigned __int16 v9; // bp
  __int64 v10; // r12
  __int16 v11; // bp
  __int64 v12; // r12
  PSLIST_ENTRY v13; // rbx
  char v14; // r14
  char v15; // r14
  _SLIST_ENTRY **v16; // rcx
  __int64 result; // rax
  char v18; // [rsp+68h] [rbp+10h]
  __int64 v19; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v5 = a2;
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
  {
    v5 = a2 + 2;
    v3 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (dword_140C46D90 & 3) != 0 && (dword_140C46D90 & 4) != 0 && v5 < 20 )
  {
    v7 = (char *)CurrentPrcb + 4 * v5;
    ++*((_DWORD *)v7 + 8944);
    ++*((_DWORD *)CurrentPrcb + 8964);
    if ( *((_DWORD *)v7 + 8944) - *((_DWORD *)v7 + 8965) > (unsigned int)dword_140C46FE0
      && *((_DWORD *)CurrentPrcb + 8964) - *((_DWORD *)CurrentPrcb + 8985) > (unsigned int)dword_140C46FE4 )
    {
      _m_prefetchw(&dword_140C46D90);
      if ( (_InterlockedAnd(&dword_140C46D90, 0xFFFFFFFB) & 4) != 0 )
        KeInsertQueueDpc(&stru_140C47100, 0LL, 0LL);
    }
  }
  v8 = v5;
  v18 = 0;
  v9 = 72 * v5 + 208;
  if ( v5 > (char)dword_140C47418 || a3 && *((int *)CurrentPrcb + 2919) <= 0 )
    goto LABEL_38;
  v18 = 4;
  if ( v5 == 1 )
  {
    v19 = 0LL;
    v10 = 2048LL;
  }
  else
  {
    if ( v5 <= (char)dword_140C4741C )
    {
      v19 = 16LL;
      v10 = 2064LL;
      v11 = 9 * (char)dword_140C4741C;
    }
    else
    {
      v19 = 32LL;
      v10 = 2080LL;
      v11 = 9 * (char)dword_140C47418;
    }
    v9 = 8 * v11 + 208;
  }
  v12 = *(_QWORD *)((char *)CurrentPrcb + v10);
  ++*(_DWORD *)(v12 + 20);
  v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v12);
  if ( !v13 )
  {
    ++*(_DWORD *)(v12 + 24);
    v12 = *(_QWORD *)((char *)CurrentPrcb + v19 + 2056);
    ++*(_DWORD *)(v12 + 20);
    v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v12);
    if ( !v13 )
      ++*(_DWORD *)(v12 + 24);
  }
  if ( (dword_140C46D90 & 3) != 0 )
  {
    if ( v13 )
    {
      if ( *((_QWORD *)&v13[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * v5 + 208) )
      {
        v9 = *((_QWORD *)&v13[3].Next + 1);
        goto LABEL_19;
      }
      ++*(_DWORD *)(v12 + 28);
      ExFreePoolWithTag(v13, 0);
    }
  }
  else if ( v13 )
  {
LABEL_19:
    v14 = 0;
    if ( a3 && dword_140CF5F58 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)CurrentPrcb + 2919);
      v14 = 8;
    }
    v8 = v5;
    a3 = 0;
    goto LABEL_21;
  }
  v8 = v5;
LABEL_38:
  result = ExAllocatePool2((a3 != 0) + 64LL, v9, 544240201LL);
  v13 = (PSLIST_ENTRY)result;
  if ( !result )
    return result;
  v14 = 0;
LABEL_21:
  memset(v13, 0, v9);
  v15 = v18 | v14;
  BYTE2(v13[4].Next) = v5;
  LOWORD(v13->Next) = 6;
  BYTE3(v13[4].Next) = v5 + 1;
  WORD1(v13->Next) = v9;
  BYTE6(v13[4].Next) = *((_BYTE *)KeGetCurrentThread() + 586);
  *((_QWORD *)&v13[2].Next + 1) = v13 + 2;
  v13[2].Next = v13 + 2;
  v16 = &v13[4 * v8 + 13].Next + v8;
  *((_QWORD *)&v13[11].Next + 1) = v16;
  WORD2(v13->Next) = *((_WORD *)CurrentPrcb + 18);
  HIBYTE(v13[4].Next) = v15;
  if ( a3 )
    HIBYTE(v13[4].Next) = v15 | 1;
  if ( v3 )
  {
    BYTE3(v13[4].Next) -= 2;
    BYTE2(v13[4].Next) -= 2;
    *((_QWORD *)&v13[11].Next + 1) = v16 - 18;
    *((_QWORD *)&v13[12].Next + 1) = v16 - 18;
    if ( (dword_140D0110C & 4) != 0 && (dword_140D01110 & 1) != 0 )
      sub_140556BE4(v13);
  }
  return (__int64)v13;
}
