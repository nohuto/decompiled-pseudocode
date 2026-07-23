/*
 * XREFs of sub_14096E06C @ 0x14096E06C
 * Callers:
 *     sub_14096E2E0 @ 0x14096E2E0 (sub_14096E2E0.c)
 * Callees:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_14038EAC8 @ 0x14038EAC8 (sub_14038EAC8.c)
 *     sub_140599764 @ 0x140599764 (sub_140599764.c)
 *     sub_14059A1C8 @ 0x14059A1C8 (sub_14059A1C8.c)
 *     sub_14096E3A4 @ 0x14096E3A4 (sub_14096E3A4.c)
 */

__int64 __fastcall sub_14096E06C(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v5; // r12
  unsigned int v6; // edi
  int v7; // r13d
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  char *v10; // rax
  char *v11; // r15
  _DWORD *v12; // rax
  signed __int64 v13; // rbx
  BOOLEAN v14; // r8
  int v15; // r14d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // esi
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  PRTL_BALANCED_NODE Parent[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 248);
  v26 = 0LL;
  *(_OWORD *)Parent = 0LL;
  v5 = sub_14038EAC8(v3, 0);
  if ( v5 )
  {
    v7 = 0;
    LODWORD(v8) = a3;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
        {
          sub_14059A1C8(a1, (__int64)Parent);
          v6 = 0;
          goto LABEL_29;
        }
        v9 = a3;
        if ( (unsigned int)v8 <= a3 )
          v9 = v8;
        v8 = v9;
        if ( (int)sub_140277D10(v5, 0LL, qword_140C50840, 0LL, 0, v9, 1u, 0x80000000, 0x80000000, 1048577, 0, 0LL, &v26) >= 0 )
          break;
        if ( (_DWORD)v8 == 512 )
          goto LABEL_34;
        LODWORD(v8) = (((unsigned int)v8 >> 1) + 511) & 0xFFFFFE00;
      }
      v10 = (char *)sub_1402828F0(64, 0x28uLL, 0x6550694Du);
      v11 = v10;
      if ( !v10 )
        break;
      v12 = v10 + 24;
      a3 -= v8;
      *v12 = v7;
      v7 += v8;
      *((_DWORD *)v11 + 7) = v7 - 1;
      *((_QWORD *)v11 + 4) = v26;
      v13 = (signed __int64)Parent[0];
      if ( ((__int64)Parent[1] & 1) != 0 && Parent[0] )
        v13 = (unsigned __int64)Parent ^ (unsigned __int64)Parent[0];
      v14 = 0;
      v15 = (__int64)Parent[1] & 1;
      if ( v13 )
      {
        while ( 1 )
        {
          if ( (int)sub_140599764(v12, v13) < 0 )
          {
            v16 = *(_QWORD *)v13;
            if ( v15 )
            {
              if ( !v16 )
                goto LABEL_25;
              v16 ^= v13;
            }
            if ( !v16 )
            {
LABEL_25:
              v14 = 0;
              break;
            }
          }
          else
          {
            v16 = *(_QWORD *)(v13 + 8);
            if ( v15 )
            {
              if ( !v16 )
                goto LABEL_19;
              v16 ^= v13;
            }
            if ( !v16 )
            {
LABEL_19:
              v14 = 1;
              break;
            }
          }
          v13 = v16;
          v12 = v11 + 24;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)Parent, (PRTL_BALANCED_NODE)v13, v14, (PRTL_BALANCED_NODE)v11);
    }
    sub_140213FA8(v26, v8);
LABEL_34:
    v6 = -1073741670;
LABEL_29:
    sub_1403606C4(*(_QWORD *)(v5 + 176));
  }
  else
  {
    v6 = -1073741670;
  }
  v17 = (unsigned __int64)Parent[0];
  if ( ((__int64)Parent[1] & 1) != 0 && Parent[0] )
    v17 = (unsigned __int64)Parent ^ (unsigned __int64)Parent[0];
  v18 = (__int64)Parent[1] & 1;
  if ( v17 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v17 )
        {
          v19 = (_QWORD *)v17;
          if ( v18 )
            v17 ^= *(_QWORD *)v17;
          else
            v17 = *(_QWORD *)v17;
          *v19 = 0LL;
        }
        v20 = *(_QWORD *)(v17 + 8);
        if ( !v20 )
          break;
        v21 = v17;
        if ( v18 )
          v17 ^= v20;
        else
          v17 = *(_QWORD *)(v17 + 8);
        *(_QWORD *)(v21 + 8) = 0LL;
      }
      v22 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v18 && v22 )
        v22 ^= v17;
      sub_14096E3A4((PVOID)v17);
      if ( !v22 )
        break;
      v17 = v22;
    }
  }
  return v6;
}
