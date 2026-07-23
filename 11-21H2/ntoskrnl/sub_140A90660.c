/*
 * XREFs of sub_140A90660 @ 0x140A90660
 * Callers:
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_140A7FF00 @ 0x140A7FF00 (sub_140A7FF00.c)
 *     sub_140A80040 @ 0x140A80040 (sub_140A80040.c)
 *     sub_140A8D338 @ 0x140A8D338 (sub_140A8D338.c)
 *     sub_140AA71F0 @ 0x140AA71F0 (sub_140AA71F0.c)
 *     sub_140AA72F4 @ 0x140AA72F4 (sub_140AA72F4.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140240470 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_1405FF8F0 @ 0x1405FF8F0 (sub_1405FF8F0.c)
 *     sub_140642384 @ 0x140642384 (sub_140642384.c)
 *     sub_140A6E0A0 @ 0x140A6E0A0 (sub_140A6E0A0.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A90C80 @ 0x140A90C80 (sub_140A90C80.c)
 *     sub_140A96A2C @ 0x140A96A2C (sub_140A96A2C.c)
 *     sub_140A96C48 @ 0x140A96C48 (sub_140A96C48.c)
 *     sub_140A9A1DC @ 0x140A9A1DC (sub_140A9A1DC.c)
 *     sub_140A9DFBC @ 0x140A9DFBC (sub_140A9DFBC.c)
 *     sub_140AA6EAC @ 0x140AA6EAC (sub_140AA6EAC.c)
 */

PVOID __fastcall sub_140A90660(
        POOL_TYPE PoolType,
        __int64 a2,
        unsigned __int64 a3,
        ULONG a4,
        EX_POOL_PRIORITY Priority,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v10; // rbx
  POOL_TYPE v11; // esi
  _SLIST_HEADER *v12; // r15
  int v13; // r13d
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rcx
  EX_POOL_PRIORITY v19; // r14d
  PSLIST_ENTRY v20; // rsi
  ULONG_PTR PoolWithTagPriority; // rax
  ULONG_PTR v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rcx
  unsigned int v25; // r15d
  __int64 v26; // r14
  __int64 v27; // rdx
  _SLIST_ENTRY *v28; // rax
  unsigned int v29; // edx
  _DWORD *v30; // rax
  _BYTE v31[4]; // [rsp+30h] [rbp-20h] BYREF
  int v32; // [rsp+34h] [rbp-1Ch]
  unsigned int v33; // [rsp+38h] [rbp-18h]
  unsigned __int64 v34; // [rsp+40h] [rbp-10h]
  unsigned __int64 v35; // [rsp+48h] [rbp-8h]
  POOL_TYPE v36; // [rsp+90h] [rbp+40h] BYREF
  char v37; // [rsp+98h] [rbp+48h] BYREF
  ULONG Tag; // [rsp+A8h] [rbp+58h] BYREF

  Tag = a4;
  v36 = PoolType;
  v33 = 0;
  v10 = a2;
  v11 = PoolType;
  v12 = 0LL;
  v13 = 0;
  if ( a2 )
  {
    if ( (int)sub_140A6E0A0(a2, 0, (int *)&v36, v31, &v37) < 0 )
    {
LABEL_3:
      if ( a6 )
        return (PVOID)ExAllocatePool3(v10, a3, a4, a6, a7);
      else
        return (PVOID)ExAllocatePool2(v10, a3, a4);
    }
    v11 = v36;
  }
  if ( dword_140C1ACA4 )
  {
    if ( (v11 & 0x80u) == 0 )
    {
      v11 |= 0x80u;
      v36 = v11;
      if ( v10 )
        v10 |= 0x200uLL;
    }
    else
    {
      v13 = 1;
      v12 = (_SLIST_HEADER *)sub_140A8ABF8(a8);
      if ( !v12 )
      {
        if ( !v10 )
          return ExAllocatePoolWithTagPriority(v11, a3, a4, Priority);
        goto LABEL_3;
      }
    }
  }
  v15 = a8;
  if ( (dword_140C29FC0 & 1) != 0 )
    sub_140AA6EAC((unsigned int)v11, a3, &Tag, a8);
  v32 = 0;
  if ( !a3 && (unsigned int)dword_140C0B1F8 <= 1 )
  {
    v32 = 1;
    a3 = 1LL;
  }
  v35 = a3;
  v34 = a3;
  _InterlockedIncrement(&dword_140C29FD0);
  v16 = v36;
  v17 = Tag;
  if ( (v36 & 2) != 0 )
  {
    if ( (dword_140C29FC0 & 8) != 0 && (unsigned int)sub_140A96C48() )
      sub_140A8C924(0xC2u, 0x9AuLL, v16 & 0xFFFFFFFFFFFFFF7FuLL, a3, v17);
  }
  else if ( (dword_140C29FC0 & 4) != 0 )
  {
    if ( !v13 )
    {
      v13 = 1;
      v12 = (_SLIST_HEADER *)sub_140A8ABF8(v15);
    }
    if ( v12 )
    {
      v18 = (unsigned int)v17;
      LODWORD(v18) = v17 & 0x7FFFFFFF;
      if ( (unsigned int)sub_140A96A2C(v18) )
      {
        sub_140A9DFBC(0LL, (unsigned int)v17, a3, 0LL);
LABEL_59:
        if ( (v16 & 0x10) != 0 )
          RtlRaiseStatus(-1073741670);
        return 0LL;
      }
    }
  }
  v19 = Priority;
  if ( (qword_140D01450 & 1) != 0 || byte_140C1A8C0 )
  {
    if ( (Priority & 9) == 0 )
    {
      if ( dword_140D05168 == 1 )
        v19 = Priority | 8;
      else
        v19 = Priority | 9;
    }
    if ( v10 )
      v10 |= 0x100000000uLL;
  }
  v20 = 0LL;
  if ( (qword_140D01450 & 8) != 0 && (v16 & 0x20) == 0 && Tag != 1850304854 )
  {
    if ( !v13 )
      v12 = (_SLIST_HEADER *)sub_140A8ABF8(a8);
    if ( v12 && a3 + 8 >= a3 )
    {
      v20 = ExpInterlockedPopEntrySList(v12 + 5);
      if ( v20 || (v20 = sub_1405FF8F0(v12)) != 0LL )
      {
        LODWORD(v16) = v16 | 0x40;
        a3 += 8LL;
        v36 = (int)v16;
        if ( !v10 )
        {
LABEL_50:
          PoolWithTagPriority = (ULONG_PTR)ExAllocatePoolWithTagPriority((POOL_TYPE)v16, a3, Tag, v19);
          goto LABEL_54;
        }
        v10 |= 0x400uLL;
      }
    }
    else
    {
      ++dword_140C29FFC;
    }
  }
  if ( !v10 )
    goto LABEL_50;
  if ( a6 )
    PoolWithTagPriority = ExAllocatePool3(v10, a3, Tag, a6, a7);
  else
    PoolWithTagPriority = ExAllocatePool2(v10, a3, Tag);
LABEL_54:
  v22 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    ++dword_140C29FE8;
    if ( (dword_140C29FC0 & 0x1000) != 0 )
      sub_140A8B2AC(a8, 176LL);
    if ( v20 )
      ExpInterlockedPushEntrySList(v12 + 5, v20);
    goto LABEL_59;
  }
  v23 = a8;
  if ( v32 && (qword_140D01450 & 8) != 0 )
  {
    v24 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&dword_140D57860, 1u) + 1) & 0xF);
    *((_DWORD *)&unk_140D59350 + 2 * v24) = 1;
    *((_QWORD *)&unk_140D59350 + v24 + 1) = v23;
    *((_QWORD *)&unk_140D59350 + v24 + 2) = PoolWithTagPriority;
  }
  v25 = 0;
  _InterlockedIncrement(&dword_140C29FD4);
  if ( (unsigned int)sub_140642384(PoolWithTagPriority) == 1 )
  {
    v25 = 1;
LABEL_68:
    _InterlockedIncrement(&dword_140C29FD8);
    goto LABEL_69;
  }
  if ( a3 > 0xFE0 )
    goto LABEL_68;
LABEL_69:
  v26 = Tag;
  if ( v20 )
  {
    v27 = (unsigned int)v36;
    *((_QWORD *)&v20->Next + 1) = v23;
    v20->Next = (_SLIST_ENTRY *)(v22 | v25);
    v28 = (_SLIST_ENTRY *)v35;
    if ( !v25 )
      v28 = (_SLIST_ENTRY *)a3;
    *((_QWORD *)&v20[1].Next + 1) = v26;
    v20[1].Next = v28;
    sub_140A90C80(v20, v27);
  }
  if ( (qword_140D01450 & 8) != 0 )
  {
    if ( (unsigned int)(dword_140C0D9F0 - 1) <= 9 )
    {
      v29 = v33;
      v30 = &unk_140D01548;
      while ( *v30 != (_DWORD)v26 )
      {
        ++v29;
        ++v30;
        if ( v29 >= dword_140C0D9F0 )
          goto LABEL_80;
      }
    }
    sub_140A9DFBC(v22, (unsigned int)v26, v34, 0LL);
LABEL_80:
    if ( v20 && !v25 && (v36 & 0x400) == 0 )
      sub_140A9A1DC((void *)v22);
  }
  return (PVOID)v22;
}
