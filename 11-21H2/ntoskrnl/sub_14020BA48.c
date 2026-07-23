/*
 * XREFs of sub_14020BA48 @ 0x14020BA48
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x14020BA30 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x140557670 (IoMakeAssociatedIrp.c)
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     sub_14020C178 @ 0x14020C178 (sub_14020C178.c)
 *     sub_14020C21C @ 0x14020C21C (sub_14020C21C.c)
 *     sub_14020C4B8 @ 0x14020C4B8 (sub_14020C4B8.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14020BA48(__int64 a1, __int64 a2, char a3)
{
  char v5; // al
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v10; // di
  __int64 v11; // rsi
  __int64 v12; // r12
  __int16 v13; // di
  __int64 v14; // rsi
  PSLIST_ENTRY v15; // rbx
  __int64 v16; // r8
  char v17; // cl
  _SLIST_ENTRY **v18; // rdx
  __int16 v19; // ax
  __int64 v20; // rcx
  __int64 result; // rax
  char v22; // [rsp+80h] [rbp+18h]
  char v23; // [rsp+88h] [rbp+20h]

  v23 = 0;
  v5 = sub_14020C4B8(a1, a2, a2);
  LODWORD(v6) = 6;
  if ( v5 && (unsigned __int8)sub_14020C0F0(a1, 0LL)
    || (unsigned __int8)sub_14020C0F0(a1, (unsigned int)v6)
    || (unsigned __int8)sub_14020C0F0(v7, 8LL)
    || v8 && (*(_DWORD *)(v8 + 48) & 0x8000000) != 0 )
  {
    a3 += 2;
    v23 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  v10 = 72 * a3 + 208;
  if ( a3 > (char)dword_140C47418 )
    goto LABEL_29;
  v22 = 4;
  if ( a3 == 1 )
  {
    v12 = 0LL;
    v11 = 2048LL;
  }
  else
  {
    if ( a3 <= (char)dword_140C4741C )
    {
      v11 = 2064LL;
      v12 = 16LL;
      v13 = 9 * (char)dword_140C4741C;
    }
    else
    {
      v11 = 2080LL;
      v12 = 32LL;
      v13 = 9 * (char)dword_140C47418;
    }
    v10 = 8 * v13 + 208;
  }
  v14 = *(_QWORD *)((char *)CurrentPrcb + v11);
  ++*(_DWORD *)(v14 + 20);
  v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
  if ( !v15 )
  {
    ++*(_DWORD *)(v14 + 24);
    v14 = *(_QWORD *)((char *)CurrentPrcb + v12 + 2056);
    ++*(_DWORD *)(v14 + 20);
    v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
    if ( !v15 )
      ++*(_DWORD *)(v14 + 24);
  }
  if ( (dword_140C46D90 & 3) == 0 )
  {
    if ( v15 )
      goto LABEL_17;
LABEL_29:
    result = ExAllocatePool2(64LL, v10, 544240201LL, v6);
    v15 = (PSLIST_ENTRY)result;
    if ( !result )
      return result;
    goto LABEL_17;
  }
  if ( !v15 )
    goto LABEL_29;
  if ( *((_QWORD *)&v15[3].Next + 1) < (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
  {
    ++*(_DWORD *)(v14 + 28);
    ExFreePoolWithTag(v15, 0);
    goto LABEL_29;
  }
  v10 = *((_WORD *)&v15[3].Next + 4);
LABEL_17:
  memset(v15, 0, v10);
  BYTE2(v15[4].Next) = a3;
  LOWORD(v15->Next) = 6;
  BYTE3(v15[4].Next) = a3 + 1;
  WORD1(v15->Next) = v10;
  v17 = *((_BYTE *)KeGetCurrentThread() + 586);
  *((_QWORD *)&v15[2].Next + 1) = v15 + 2;
  v15[2].Next = v15 + 2;
  BYTE6(v15[4].Next) = v17;
  v18 = &v15[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v15[11].Next + 1) = v18;
  v19 = *((_WORD *)CurrentPrcb + 18);
  LODWORD(v15[1].Next) |= 8u;
  WORD2(v15->Next) = v19;
  v20 = *(_DWORD *)(a1 + 16) & 0xE0002;
  LODWORD(v15[1].Next) |= v20;
  HIBYTE(v15[4].Next) |= v22;
  *((_QWORD *)&v15[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v15[1].Next + 1) = a1;
  if ( v23 )
  {
    BYTE3(v15[4].Next) -= 2;
    BYTE2(v15[4].Next) -= 2;
    *((_QWORD *)&v15[11].Next + 1) = v18 - 18;
    *((_QWORD *)&v15[12].Next + 1) = v18 - 18;
  }
  if ( (unsigned __int8)sub_14020C4B8(v20, v18, v16) && (unsigned __int8)sub_14020C0F0(a1, 0LL) )
    IoSetActivityIdIrp(v15, *(_QWORD *)(a1 + 200) + 24LL);
  if ( (unsigned __int8)sub_14020C0F0(a1, 6LL) )
    sub_14020C178(v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL), *((_QWORD *)&v15[9].Next + 1), 1LL);
  if ( (unsigned __int8)sub_14020C0F0(a1, 8LL) )
    sub_14020C21C(v15, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  return (__int64)v15;
}
