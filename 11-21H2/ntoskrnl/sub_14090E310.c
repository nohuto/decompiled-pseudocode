/*
 * XREFs of sub_14090E310 @ 0x14090E310
 * Callers:
 *     <none>
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067DE4C @ 0x14067DE4C (sub_14067DE4C.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14091CEA0 @ 0x14091CEA0 (sub_14091CEA0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090E310(unsigned int a1, char *a2)
{
  _PRIVILEGE_SET *v4; // rsi
  unsigned int v5; // r12d
  char v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  SIZE_T v13; // r13
  _PRIVILEGE_SET *v14; // r15
  unsigned int v15; // r15d
  _PRIVILEGE_SET *v16; // r13
  __int64 v17; // rax
  PVOID *v18; // rdi
  __int64 v19; // r14
  KPROCESSOR_MODE v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF
  char v25; // [rsp+A8h] [rbp+20h]

  v24 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  sub_140347770((__int64)&v24);
  v9 = sub_14067DE4C();
  if ( v9 < 0 )
    goto LABEL_4;
  v21 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !SeSinglePrivilegeCheck(stru_140D3CA58, v21) )
  {
    v9 = -1073741727;
LABEL_4:
    v12 = 0;
    goto LABEL_42;
  }
  if ( !a1 )
  {
    v9 = 0;
    goto LABEL_7;
  }
  if ( a1 >= 0x1FFFFFFF )
  {
    v9 = -1073741811;
    goto LABEL_4;
  }
  v13 = 8 * a1;
  v4 = (_PRIVILEGE_SET *)sub_140367AF0(v8, v13, 0x61624D43u);
  if ( !v4 )
  {
    v9 = -1073741670;
    v12 = 0;
    v6 = 0;
    goto LABEL_42;
  }
  if ( v21 == 1 && (_DWORD)v13 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v13] > 0x7FFFFFFF0000LL || &a2[v13] < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(v4, a2, (unsigned int)v13);
  v14 = v4;
  do
  {
    LOBYTE(v11) = v21;
    v9 = sub_140AB4630(*(_QWORD *)&v14->PrivilegeCount, 131078, v10, v11, (__int64)v4 + 8 * v5, 0LL);
    if ( v9 < 0 )
    {
      v12 = 0;
      v6 = 0;
      goto LABEL_42;
    }
    ++v5;
    v14 = (_PRIVILEGE_SET *)((char *)v14 + 8);
  }
  while ( v5 < a1 );
  v6 = sub_140AB46D0(v8, v7, v10);
  v25 = v6;
  if ( !v6 )
  {
    v9 = -1073741431;
    v12 = 0;
    goto LABEL_42;
  }
  sub_14071B6EC();
  v22 = 0LL;
  v15 = 0;
  v16 = v4;
  do
  {
    v23 = *(_QWORD *)&v16->PrivilegeCount;
    v9 = sub_140AB43C0(*(_QWORD *)&v16->PrivilegeCount, 0LL);
    if ( v9 < 0 )
      goto LABEL_40;
    v17 = *(_QWORD *)(v23 + 8);
    if ( v15 )
    {
      v8 = v22;
    }
    else
    {
      v8 = *(_QWORD *)(v17 + 32);
      v22 = v8;
    }
    if ( v8 != *(_QWORD *)(v17 + 32) || (v8 = *(unsigned __int16 *)(v17 + 186), (v8 & 4) != 0) || (v8 & 0x10) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_40;
    }
    if ( *(_WORD *)(v17 + 66) )
    {
      v9 = -1073741822;
LABEL_40:
      v12 = 1;
      v6 = v25;
      goto LABEL_42;
    }
    ++v15;
    v16 = (_PRIVILEGE_SET *)((char *)v16 + 8);
  }
  while ( v15 < a1 );
  v6 = v25;
  v9 = 0;
  sub_140AB4260(v8, v7, v10, v11);
  sub_14091CEA0(7LL);
LABEL_7:
  v12 = 0;
LABEL_42:
  if ( v12 )
    sub_140AB4260(v8, v7, v10, v11);
  if ( v6 )
    sub_140AB42A0(v8, v7);
  if ( v4 )
  {
    if ( v5 )
    {
      v18 = (PVOID *)v4;
      v19 = v5;
      do
      {
        ObfDereferenceObject(*v18++);
        --v19;
      }
      while ( v19 );
    }
    SeFreePrivileges(v4);
  }
  sub_14022EA30((__int64 *)&v24);
  return (unsigned int)v9;
}
