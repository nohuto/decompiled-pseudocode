/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x14024F590
 * Callers:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x14034B008 (KiInsertTimer2.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     KiRemoveTimer2 @ 0x140251790 (KiRemoveTimer2.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v5; // cl
  unsigned __int8 v7; // r14
  int v9; // r15d
  int v10; // edi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _RTL_RB_TREE *v13; // rdi
  BOOLEAN v14; // al
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // cl
  _RTL_RB_TREE *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v21; // r8
  int v22; // r9d
  unsigned __int64 v23; // rax
  _RTL_BALANCED_NODE *v24; // rcx
  __int64 v25; // rax
  _RTL_BALANCED_NODE *Min; // rax
  signed __int32 *v28; // rdx
  bool v29; // al
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  signed __int32 v32[8]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_BYTE *)(a1 + 130);
  v7 = 1;
  v9 = 0;
  *a3 = 0;
  v10 = 0;
  *a4 = 0;
  if ( v5 == 21 || (v5 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v5 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v5 & 0xEF;
    v11 = 3LL * (v5 & 7);
    v12 = KiTimer2Collections[v11];
    v13 = (_RTL_RB_TREE *)&KiTimer2Collections[v11];
    if ( ((__int64)v13->Min & 1) == 0 )
      goto LABEL_7;
    if ( v12 )
    {
      v12 ^= (unsigned __int64)v13;
LABEL_7:
      v14 = 0;
      if ( !v12 )
        goto LABEL_51;
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) >= *(_QWORD *)(v12 + 48) )
        {
          v15 = *(_QWORD *)(v12 + 8);
          if ( (KiTimer2Collections[v11 + 1] & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_49;
            v15 ^= v12;
          }
          if ( !v15 )
          {
LABEL_49:
            v14 = 1;
            goto LABEL_51;
          }
        }
        else
        {
          v15 = *(_QWORD *)v12;
          if ( (KiTimer2Collections[v11 + 1] & 1) != 0 )
          {
            if ( !v15 )
              break;
            v15 ^= v12;
          }
          if ( !v15 )
            break;
        }
        v12 = v15;
      }
    }
    v14 = 0;
LABEL_51:
    RtlRbInsertNodeEx(v13, (PRTL_BALANCED_NODE)v12, v14, (PRTL_BALANCED_NODE)(a1 + 24));
    Min = v13->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Min == (_RTL_BALANCED_NODE *)1 )
        v16 = 0LL;
      else
        v16 = (unsigned __int64)Min ^ ((unsigned __int64)v13 | 1);
    }
    else
    {
      v16 = (__int64)v13->Min;
    }
    if ( v16 == a1 + 24 )
    {
      v13[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  v17 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v17 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v17 & 0xEF;
    v18 = (_RTL_RB_TREE *)(0x140000000LL + 24LL * (v17 & 7) + 12853984);
    v19 = *(_QWORD *)(0x140000008LL + 24LL * (v17 & 7) + 12853984);
    Root = (unsigned __int64)v18->Root;
    if ( (v19 & 1) == 0 )
      goto LABEL_22;
    if ( Root )
    {
      Root ^= (unsigned __int64)v18;
LABEL_22:
      v21 = 0;
      v22 = v19 & 1;
      if ( !Root )
        goto LABEL_35;
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) >= *(_QWORD *)(Root + 32) )
        {
          v23 = *(_QWORD *)(Root + 8);
          if ( v22 )
          {
            if ( !v23 )
              goto LABEL_33;
            v23 ^= Root;
          }
          if ( !v23 )
          {
LABEL_33:
            v21 = 1;
            goto LABEL_35;
          }
        }
        else
        {
          v23 = *(_QWORD *)Root;
          if ( v22 )
          {
            if ( !v23 )
              goto LABEL_35;
            v23 ^= Root;
          }
          if ( !v23 )
            goto LABEL_35;
        }
        Root = v23;
      }
    }
    v21 = 0;
LABEL_35:
    RtlRbInsertNodeEx(v18, (PRTL_BALANCED_NODE)Root, v21, (PRTL_BALANCED_NODE)(a1 + 48));
    v24 = v18->Min;
    if ( ((unsigned __int8)v24 & 1) != 0 )
    {
      if ( v24 == (_RTL_BALANCED_NODE *)1 )
        v25 = 0LL;
      else
        v25 = (unsigned __int64)v24 ^ ((unsigned __int64)v18 | 1);
    }
    else
    {
      v25 = (__int64)v18->Min;
    }
    if ( v25 == a1 + 48 )
    {
      v9 = 1;
      v18[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 80);
    }
    v10 |= v9;
  }
  if ( v10 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v32, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !a2 )
      {
        KiRemoveTimer2(a1);
        v7 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v28 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 35000);
    if ( v28 )
    {
      _m_prefetchw(v28);
      v30 = *v28;
      do
      {
        v31 = v30;
        v30 = _InterlockedCompareExchange(v28, v30 | 0x80000, v30);
      }
      while ( v31 != v30 );
      v29 = (v30 & 0x80000) == 0;
    }
    else
    {
      v29 = 0;
    }
    *a4 = v29;
  }
  return v7;
}
