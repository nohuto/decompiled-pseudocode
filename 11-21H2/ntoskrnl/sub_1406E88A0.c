/*
 * XREFs of sub_1406E88A0 @ 0x1406E88A0
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1406E8870 (NtSetCachedSigningLevel.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405E3AB8 @ 0x1405E3AB8 (sub_1405E3AB8.c)
 *     sub_1406A0BF0 @ 0x1406A0BF0 (sub_1406A0BF0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406E88A0(__int64 a1, char a2, const void *a3, unsigned int a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v6; // r12
  size_t v7; // rbx
  __int16 v8; // si
  _QWORD *v9; // r15
  char v10; // r14
  int v11; // ebx
  char *v12; // rbx
  char *v13; // rsi
  int v14; // eax
  _BYTE *v15; // rdx
  _BYTE *v16; // rcx
  char v17; // bl
  size_t v18; // r12
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  PVOID Pool2; // [rsp+60h] [rbp-68h]
  PVOID P[12]; // [rsp+68h] [rbp-60h] BYREF

  v6 = a4;
  v7 = (size_t)a3;
  v8 = a1;
  v9 = 0LL;
  P[0] = 0LL;
  Pool2 = 0LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (a1 & 0x2000) != 0 )
  {
    if ( !qword_140C1B990 )
    {
LABEL_3:
      v11 = -1073741822;
      goto LABEL_72;
    }
    if ( !a6 || !a5 )
    {
      v11 = -1073741811;
      goto LABEL_72;
    }
    if ( v10 == 1 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2170LL) & 7) != 1 )
      {
        v11 = -1073741790;
        goto LABEL_72;
      }
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v12 = *(char **)(a6 + 8);
      P[2] = v12;
      v13 = *(char **)(a6 + 16);
      P[3] = v13;
      if ( v12 )
      {
        if ( ((unsigned __int8)v13 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( &v12[(_QWORD)v13] > (char *)0x7FFFFFFF0000LL || &v12[(_QWORD)v13] < v13 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (unsigned __int64)v12 > 0xFFFF )
      {
        v11 = -1073741811;
        goto LABEL_72;
      }
      Pool2 = (PVOID)ExAllocatePool2(259LL, v12, 1668499779LL);
      if ( !Pool2 )
      {
        v11 = -1073741670;
        goto LABEL_72;
      }
      memmove(Pool2, v13, (size_t)v12);
    }
    else
    {
      Pool2 = *(PVOID *)(a6 + 16);
    }
    LOBYTE(a1) = v10;
    v14 = sub_14042A5E0(a1, a5);
LABEL_25:
    v11 = v14;
    goto LABEL_72;
  }
  if ( !qword_140C1B8A8 )
    goto LABEL_3;
  if ( (a2 & 0x30) != 0 )
  {
LABEL_29:
    v11 = -1073741584;
    goto LABEL_72;
  }
  if ( a4 - 1 > 0xFFF )
    goto LABEL_71;
  if ( (a1 & 6) == 0 && a2 )
    goto LABEL_29;
  if ( (a1 & 3) == 3 )
  {
LABEL_34:
    v11 = -1073741585;
    goto LABEL_72;
  }
  if ( v10 == 1 )
  {
    if ( (a1 & 2) != 0 )
      goto LABEL_34;
    v8 = a1 | 1;
    if ( (a1 & 4) == 0 )
    {
      v15 = (_BYTE *)*((_QWORD *)KeGetCurrentThread() + 23);
      v16 = v15;
      if ( (v15[2170] & 7) != 1 )
      {
        v11 = -1073741790;
        goto LABEL_72;
      }
      v17 = v15[2169] & 0xF;
      if ( qword_140C1B8E0 )
      {
        LOBYTE(v15) = v15[2168] & 0xF;
        LOBYTE(v16) = v17;
        sub_14042A5E0(v16, v15);
      }
      v7 = (size_t)a3;
    }
  }
  else if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    goto LABEL_34;
  }
  v18 = 8 * v6;
  v9 = (_QWORD *)ExAllocatePool2(256LL, v18, 1668499779LL);
  P[1] = v9;
  if ( !v9 )
  {
    v11 = -1073741670;
    goto LABEL_72;
  }
  if ( v10 == 1 )
  {
    if ( v18 )
    {
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v18 + v7 > 0x7FFFFFFF0000LL || v18 + v7 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v19 = a6;
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 24 > 0x7FFFFFFF0000LL || a6 + 24 < a6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v19 = a6;
  }
  memmove(v9, a3, v18);
  if ( !v19 )
    goto LABEL_66;
  if ( *(_DWORD *)v19 < 0x18u )
  {
    v11 = -1073741580;
    goto LABEL_72;
  }
  if ( !*(_WORD *)(v19 + 8)
    || (LOBYTE(v20) = v10, v11 = sub_1406A0BF0(v19 + 8, 1u, v20, P), v11 >= 0)
    && (v11 = sub_1405E3AB8((unsigned __int16 *)P[0]), v11 >= 0) )
  {
LABEL_66:
    v21 = a4;
    if ( (v8 & 6) == 0 )
    {
LABEL_70:
      LOBYTE(v21) = v10;
      v14 = sub_14042A5E0(v8 & 0x807, v21);
      goto LABEL_25;
    }
    if ( a4 == 1 )
    {
      if ( a5 != *v9 )
      {
        v11 = -1073741581;
        goto LABEL_72;
      }
      goto LABEL_70;
    }
LABEL_71:
    v11 = -1073741582;
  }
LABEL_72:
  if ( v10 == 1 && P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x63734943u);
  if ( Pool2 && v10 == 1 )
    ExFreePoolWithTag(Pool2, 0x63734943u);
  return (unsigned int)v11;
}
