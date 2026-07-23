/*
 * XREFs of sub_14024BB3C @ 0x14024BB3C
 * Callers:
 *     sub_14024BAD4 @ 0x14024BAD4 (sub_14024BAD4.c)
 *     sub_1405EEB40 @ 0x1405EEB40 (sub_1405EEB40.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall sub_14024BB3C(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF
  int v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+24h] [rbp-24h]
  _DWORD *v18; // [rsp+28h] [rbp-20h]
  unsigned __int64 v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+60h] [rbp+18h]

  v18 = (_DWORD *)qword_140D071C8;
  v20 = *(_DWORD *)(qword_140D071C8 + 8);
  v16 = 0;
  v17 = 0;
  v4 = qword_140D071C8 + 16;
  v5 = *(_QWORD *)(qword_140D071C8 + 24);
  if ( a1 < v5 || a1 >= v5 + *(unsigned int *)(qword_140D071C8 + 32) )
  {
    v6 = *v18 - 1;
    if ( (unsigned int)v6 > 0x200 )
      return 0LL;
    if ( *v18 != 1 )
    {
      v7 = 1;
      v17 = 1;
      v16 = v6;
      while ( v6 >= v7 )
      {
        v8 = (v7 + v6) >> 1;
        v4 = (__int64)&v18[6 * v8 + 4];
        v9 = *(_QWORD *)(v4 + 8);
        v10 = v9 + *(unsigned int *)(v4 + 16);
        if ( v10 < v9 )
          return 0LL;
        if ( a1 < v9 )
        {
          if ( !v8 )
            break;
          v6 = v8 - 1;
          v16 = v8 - 1;
        }
        else
        {
          if ( a1 < v10 )
            goto LABEL_13;
          v7 = v8 + 1;
          v17 = v8 + 1;
        }
      }
    }
    v4 = 0LL;
  }
LABEL_13:
  if ( !v4 )
    return 0LL;
  v11 = *(_QWORD *)v4;
  v19 = v11;
  *(_QWORD *)a2 = v11;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 16);
  v12 = *(unsigned int *)(a2 + 20);
  if ( (_DWORD)v12 )
  {
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 + v12 > 0x7FFFFFFF0000LL || v11 + v12 < v11 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v13 = *(_QWORD *)(a2 + 8);
  if ( (_WORD)v13 )
    ExRaiseDatatypeMisalignment();
  if ( v13 + 64 > 0x7FFFFFFF0000LL || v13 + 64 < v13 )
    MEMORY[0x7FFFFFFF0000] = 0;
  _InterlockedOr(v15, 0);
  if ( v18[2] != v20 || (v20 & 1) != 0 )
    return 0LL;
  else
    return v19;
}
