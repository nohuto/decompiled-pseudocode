/*
 * XREFs of sub_140393778 @ 0x140393778
 * Callers:
 *     sub_140394BE8 @ 0x140394BE8 (sub_140394BE8.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037A5B0 @ 0x14037A5B0 (sub_14037A5B0.c)
 *     sub_14037CFB8 @ 0x14037CFB8 (sub_14037CFB8.c)
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 *     sub_1403939B8 @ 0x1403939B8 (sub_1403939B8.c)
 *     sub_140393AA0 @ 0x140393AA0 (sub_140393AA0.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140393778(__int64 a1, _DWORD *a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rbp
  __int64 *v7; // r14
  unsigned int v8; // esi
  __int64 *v9; // r15
  int v10; // eax
  __int64 v11; // r13
  unsigned int v12; // edi
  char v13; // di
  __int64 PoolWithTag; // rsi
  bool v15; // zf
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned int v18; // [rsp+90h] [rbp+8h]
  int v20; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v20 = 0;
  v5 = 0;
  v21 = 0LL;
  v6 = a3;
  v7 = a5;
  if ( (a3 & 3) != 0 )
  {
    v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v5 = a3 & 1;
  }
  a5[1] = 0LL;
  *v7 = a4;
  v8 = *(_DWORD *)(v6 + 40) >> 12;
  v18 = v8;
  v9 = v7;
  LODWORD(a5) = v8;
  v10 = sub_140393AA0((unsigned int)&unk_140D31A00, (_DWORD)a2, (unsigned int)&a5, (unsigned int)&v21, (__int64)&v20);
  v11 = v21;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = (char)a5;
    v7[1] = (unsigned int)a5;
    if ( v5 >= 2 && !*(_BYTE *)(v11 + 6020) )
    {
      v12 = -1073741791;
      goto LABEL_16;
    }
    if ( (dword_140D32130 & 0x10) == 0 )
    {
LABEL_7:
      if ( (v5 & 1) != 0 )
      {
        PoolWithTag = (__int64)ExpInterlockedPopEntrySList(&stru_140D31EE0);
        if ( PoolWithTag )
          goto LABEL_9;
        PoolWithTag = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
        if ( PoolWithTag )
          goto LABEL_9;
        LOBYTE(v5) = v5 & 0xFE;
      }
      PoolWithTag = sub_14037DA00(dword_140D32000, 1, (__int64)v7, 0LL, dword_140D32130 & 1);
      if ( !PoolWithTag )
      {
        v12 = -1073741670;
LABEL_15:
        v8 = v18;
        goto LABEL_16;
      }
LABEL_9:
      v15 = (v20 & 1) == 0;
      *(_OWORD *)PoolWithTag = 0LL;
      *(_OWORD *)(PoolWithTag + 16) = 0LL;
      *(_DWORD *)(PoolWithTag + 24) = *a2;
      *(_DWORD *)PoolWithTag = 2;
      *(_QWORD *)(PoolWithTag + 16) = v6;
      *(_BYTE *)(PoolWithTag + 8) = v13;
      *(_QWORD *)(PoolWithTag + 32) = v7;
      if ( !v15 )
        *(_DWORD *)(PoolWithTag + 8) |= 0x1000000u;
      if ( (v5 & 1) != 0 )
        *(_DWORD *)(PoolWithTag + 8) |= 0x4000000u;
      if ( (int)sub_14037CFB8(v7, (__int64)&unk_140D31A00, *(_DWORD *)(v11 + 6016) & 0x3FF, (int *)PoolWithTag) < 0 )
      {
        v12 = -1073741670;
        sub_14037A5B0((__int64)&unk_140D31A00, (_DWORD *)PoolWithTag, (__int64)v7);
      }
      else
      {
        v9 = 0LL;
        LOBYTE(v5) = -5;
        v11 = 0LL;
        v12 = 259;
      }
      goto LABEL_15;
    }
    v5 |= 8 * (sub_1403939B8(v7, v8, 0LL) & 1);
    if ( v5 >= 8 )
    {
      LOBYTE(v5) = v5 | 4;
      goto LABEL_7;
    }
    v12 = -1073741670;
  }
LABEL_16:
  if ( v11 )
  {
    v17 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8((__int64)&unk_140D31A00, *(_DWORD *)(v11 + 6016) & 0x3FF);
    sub_1402AD030(v17 + 1);
  }
  if ( (v5 & 4) != 0 )
    sub_1403939B8(v9, v8, 1LL);
  if ( v9 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)v7 = v12;
  }
  return v12;
}
