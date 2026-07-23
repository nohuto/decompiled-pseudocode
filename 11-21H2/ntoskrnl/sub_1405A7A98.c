/*
 * XREFs of sub_1405A7A98 @ 0x1405A7A98
 * Callers:
 *     sub_1409AF728 @ 0x1409AF728 (sub_1409AF728.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1405A7A98(unsigned __int64 a1, signed __int64 a2)
{
  __int64 v3; // rax
  char *v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  volatile signed __int64 *v15; // rcx
  BOOL v16; // r14d
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v25; // [rsp+90h] [rbp+18h]
  unsigned int v26; // [rsp+98h] [rbp+20h] BYREF

  v26 = 0;
  v22 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = sub_14030E7C0(a1, 0, (int *)&v26);
  v4 = (char *)v3;
  v21 = v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 48) & 0xA200000) == 0x8200000 )
    {
      v5 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
      v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v7 = sub_1402CF4F0(v5);
        v25 = v7;
        v8 = sub_14027D6E0(v5, v6, &v22);
        v9 = sub_140317A10(v22);
        v23[0] = v9;
        if ( v8 == ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v9 & 1) != 0 )
          break;
        sub_14020D8D0(v5, v8);
        sub_1402B0CE0(v5, v7);
      }
      v13 = ((unsigned __int64)sub_140317A10((unsigned __int64)v23) >> 12) & 0xFFFFFFFFFFLL;
      v14 = 48 * v13 - 0x220000000000LL;
      LODWORD(v21) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v21, v10, v11, v12);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      v15 = (volatile signed __int64 *)((a1 & 0xFFF) + sub_1402CC7C0(v13, 0LL, 0x80000000));
      v16 = a2 == _InterlockedCompareExchange64(v15, 0LL, a2);
      sub_1402BEDD0((unsigned __int64)v15, 0x11u);
      v17 = sub_14033C2A0(48 * v13 - 0x220000000000LL);
      if ( v17 )
        v18 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
      else
        v18 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        sub_1402E20D0(v18, v17, 1);
      sub_14020D8D0(v5, v8);
      sub_1402B0CE0(v5, v25);
      v19 = !v16 ? 0xC0000272 : 0;
    }
    else
    {
      v19 = -1073741800;
    }
  }
  else
  {
    v19 = v26;
  }
  if ( v4 )
    sub_14032E700(v4);
  return v19;
}
