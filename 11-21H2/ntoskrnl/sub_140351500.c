/*
 * XREFs of sub_140351500 @ 0x140351500
 * Callers:
 *     sub_1402F332C @ 0x1402F332C (sub_1402F332C.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 * Callees:
 *     sub_1402F2AD0 @ 0x1402F2AD0 (sub_1402F2AD0.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall sub_140351500(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v6; // cl
  char v7; // bp
  unsigned __int8 v8; // r15
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _RTL_RB_TREE *v14; // rdi
  BOOLEAN v15; // al
  PRTL_BALANCED_NODE Min; // rax
  __int64 v17; // rcx
  char v18; // cl
  _RTL_RB_TREE *v19; // rsi
  unsigned __int64 Root; // rdx
  BOOLEAN v21; // al
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  PRTL_BALANCED_NODE v24; // rax
  __int64 v25; // rcx
  bool v27; // dl
  signed __int32 *v28; // r8
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  signed __int32 v31[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 130);
  v7 = a2;
  v8 = 1;
  v10 = 0;
  *a3 = 0;
  v11 = 0;
  *a4 = 0;
  if ( v6 == 21 || (v6 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v6 | 0x10;
    goto LABEL_12;
  }
  *(_BYTE *)(a1 + 130) = v6 & 0xEF;
  v12 = 3LL * (v6 & 7);
  v13 = qword_140C2B8C0[v12];
  v14 = (_RTL_RB_TREE *)&qword_140C2B8C0[v12];
  if ( ((__int64)v14->Min & 1) == 0 )
  {
LABEL_24:
    v15 = 0;
    if ( !v13 )
      goto LABEL_8;
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 72) >= *(_QWORD *)(v13 + 48) )
      {
        v23 = *(_QWORD *)(v13 + 8);
        if ( (qword_140C2B8C0[v12 + 1] & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_35;
          v23 ^= v13;
        }
        if ( !v23 )
        {
LABEL_35:
          v15 = 1;
          goto LABEL_8;
        }
      }
      else
      {
        v23 = *(_QWORD *)v13;
        if ( (qword_140C2B8C0[v12 + 1] & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_7;
          v23 ^= v13;
        }
        if ( !v23 )
          goto LABEL_7;
      }
      v13 = v23;
    }
  }
  if ( v13 )
  {
    v13 ^= (unsigned __int64)v14;
    goto LABEL_24;
  }
  v13 = 0LL;
LABEL_7:
  v15 = 0;
LABEL_8:
  RtlRbInsertNodeEx(v14, (PRTL_BALANCED_NODE)v13, v15, (PRTL_BALANCED_NODE)(a1 + 24));
  Min = v14->Min;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Min == (PRTL_BALANCED_NODE)1 )
      v17 = 0LL;
    else
      v17 = (unsigned __int64)Min ^ ((unsigned __int64)v14 | 1);
  }
  else
  {
    v17 = (__int64)v14->Min;
  }
  if ( v17 == a1 + 24 )
  {
    v14[1].Root = *(PRTL_BALANCED_NODE *)(a1 + 72);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
LABEL_12:
  v18 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v18 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v18 & 0xEF;
    v19 = (_RTL_RB_TREE *)(0x140000000LL + 24LL * (v18 & 7) + 12761280);
    Root = (unsigned __int64)v19->Root;
    if ( (*(_QWORD *)(0x140000008LL + 24LL * (v18 & 7) + 12761280) & 1) == 0 )
      goto LABEL_16;
    if ( Root )
    {
      Root ^= (unsigned __int64)v19;
LABEL_16:
      v21 = 0;
      if ( !Root )
        goto LABEL_43;
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) >= *(_QWORD *)(Root + 32) )
        {
          v22 = *(_QWORD *)(Root + 8);
          if ( (*(_QWORD *)(0x140000008LL + 24LL * (v18 & 7) + 12761280) & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_40;
            v22 ^= Root;
          }
          if ( !v22 )
          {
LABEL_40:
            v21 = 1;
            goto LABEL_43;
          }
        }
        else
        {
          v22 = *(_QWORD *)Root;
          if ( (*(_QWORD *)(0x140000008LL + 24LL * (v18 & 7) + 12761280) & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_42;
            v22 ^= Root;
          }
          if ( !v22 )
            goto LABEL_42;
        }
        Root = v22;
      }
    }
    Root = 0LL;
LABEL_42:
    v21 = 0;
LABEL_43:
    RtlRbInsertNodeEx(v19, (PRTL_BALANCED_NODE)Root, v21, (PRTL_BALANCED_NODE)(a1 + 48));
    v24 = v19->Min;
    if ( ((unsigned __int8)v24 & 1) != 0 )
    {
      if ( v24 == (PRTL_BALANCED_NODE)1 )
        v25 = 0LL;
      else
        v25 = (unsigned __int64)v24 ^ ((unsigned __int64)v19 | 1);
    }
    else
    {
      v25 = (__int64)v19->Min;
    }
    if ( v25 == a1 + 48 )
    {
      v10 = 1;
      v19[1].Root = *(PRTL_BALANCED_NODE *)(a1 + 80);
    }
    v7 = a2;
    v11 |= v10;
  }
  if ( v11 )
  {
    if ( (unsigned __int64)qword_140C2B938 > *(_QWORD *)(a1 + 72) )
    {
      qword_140C2B938 = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v31, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !v7 )
      {
        sub_1402F2AD0(a1);
        v8 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&dword_140C2B980) == 1 )
  {
    v27 = 0;
    v28 = *(signed __int32 **)(qword_140D088C0[(unsigned int)dword_140C2B1C0] + 35000);
    if ( v28 && (dword_140D068EC & 0x40) != 0 )
    {
      _m_prefetchw(v28);
      v29 = *v28;
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange(v28, v29 | 0x80000, v29);
      }
      while ( v30 != v29 );
      v27 = (v29 & 0x80000) == 0;
    }
    *a4 = v27;
  }
  return v8;
}
