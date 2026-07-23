/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x140294DCC
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140294964 (MiFindFreePageFileSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x1406382C0 (MiAttemptPageFileReductionApc.c)
 *     MiGatherPagefilePages @ 0x14063A694 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140295AF0 (MiBitmapsCachedEntryLengthChanged.c)
 */

char __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // r14
  BOOLEAN v7; // bl
  int v11; // r8d
  unsigned int *v12; // rcx
  unsigned int v13; // edx
  bool v14; // zf
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rsi
  int v20; // r11d
  int v21; // edx
  int v22; // edx
  unsigned int v23; // r9d
  _QWORD *v24; // r8
  unsigned int v25; // edx
  __int64 *v26; // r15
  unsigned int v27; // eax
  __int64 v28; // rax
  _RTL_RB_TREE *v29; // rcx
  unsigned __int64 v30; // rdx
  BOOLEAN v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v6 = a1 + 160;
  v7 = 0;
  if ( a4 )
  {
LABEL_2:
    v11 = *(_DWORD *)(a4 + 48);
    v12 = (unsigned int *)(a4 + 52);
    if ( v11 == a2 || (v20 = a2 + a3, v21 = v11 + *v12, a2 + a3 == v21) )
    {
      v13 = *v12 - a3;
      *v12 = v13;
      if ( v11 == a2 )
        *(_DWORD *)(a4 + 48) = v11 + a3;
      v14 = v13 == 0;
      v15 = a4;
      if ( !v14 )
        goto LABEL_6;
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)a4);
      RtlRbRemoveNode((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)(a4 + 24));
      v19 = a1 + 176;
      v4 = *(_QWORD *)(v19 + 8);
      if ( *(_QWORD *)v4 == v19 )
      {
        *(_QWORD *)a4 = v19;
        *(_QWORD *)(a4 + 8) = v4;
        *(_QWORD *)v4 = a4;
        *(_QWORD *)(v19 + 8) = a4;
        return v4;
      }
    }
    else
    {
      v22 = v21 - a2;
      v23 = a2 - v11;
      v24 = (_QWORD *)(a1 + 176);
      v25 = v22 - a3;
      v26 = *(__int64 **)(a1 + 176);
      if ( v26 == (__int64 *)(a1 + 176) )
      {
        if ( v23 <= v25 )
        {
          *v12 = v25;
          *(_DWORD *)(a4 + 48) = v20;
          v27 = *(_DWORD *)(a1 + 140);
          if ( v27 <= v23 )
            v27 = v23;
        }
        else
        {
          *v12 = v23;
          v27 = *(_DWORD *)(a1 + 140);
          if ( v27 <= v25 )
            v27 = v25;
        }
        *(_DWORD *)(a1 + 140) = v27;
        v15 = a4;
LABEL_6:
        LOBYTE(v4) = MiBitmapsCachedEntryLengthChanged(a1, v15, 0LL);
        return v4;
      }
      if ( (_QWORD *)v26[1] == v24 )
      {
        v28 = *v26;
        if ( *(__int64 **)(*v26 + 8) == v26 )
        {
          *v24 = v28;
          *(_QWORD *)(v28 + 8) = v24;
          *((_DWORD *)v26 + 13) = v25;
          *((_DWORD *)v26 + 12) = v20;
          *v12 = v23;
          MiBitmapsCachedEntryLengthChanged(a1, a4, 0LL);
          v29 = (_RTL_RB_TREE *)(a1 + 144);
          v30 = *(_QWORD *)(a1 + 144);
          if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v30 )
            v30 ^= (unsigned __int64)v29;
          v31 = 0;
          if ( v30 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)v26[6] < *(_QWORD *)(v30 + 48) )
              {
                v32 = *(_QWORD *)v30;
                if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                {
                  if ( !v32 )
                    goto LABEL_52;
                  v32 ^= v30;
                }
                if ( !v32 )
                {
LABEL_52:
                  v31 = 0;
                  break;
                }
              }
              else
              {
                v32 = *(_QWORD *)(v30 + 8);
                if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
                {
                  if ( !v32 )
                    goto LABEL_46;
                  v32 ^= v30;
                }
                if ( !v32 )
                {
LABEL_46:
                  v31 = 1;
                  break;
                }
              }
              v30 = v32;
            }
          }
          RtlRbInsertNodeEx(v29, (PRTL_BALANCED_NODE)v30, v31, (PRTL_BALANCED_NODE)v26);
          v33 = *(_QWORD *)v6;
          if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v33 )
            v33 ^= v6;
          if ( v33 )
          {
            while ( 1 )
            {
              if ( *((_DWORD *)v26 + 12) >= *(_DWORD *)(v33 + 24) )
              {
                v34 = *(_QWORD *)(v33 + 8);
                if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
                {
                  if ( !v34 )
                    goto LABEL_68;
                  v34 ^= v33;
                }
                if ( !v34 )
                {
LABEL_68:
                  v7 = 1;
                  break;
                }
              }
              else
              {
                v34 = *(_QWORD *)v33;
                if ( (*(_BYTE *)(v6 + 8) & 1) != 0 )
                {
                  if ( !v34 )
                    break;
                  v34 ^= v33;
                }
                if ( !v34 )
                  break;
              }
              v33 = v34;
            }
          }
          LOBYTE(v4) = RtlRbInsertNodeEx((PRTL_RB_TREE)v6, (PRTL_BALANCED_NODE)v33, v7, (PRTL_BALANCED_NODE)v26 + 1);
          return v4;
        }
      }
    }
    __fastfail(3u);
  }
  v16 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 && v16 )
    v16 ^= v6;
  v17 = *(_BYTE *)(a1 + 168) & 1;
  if ( v16 )
  {
    do
    {
      v18 = *(_DWORD *)(v16 + 24);
      if ( a2 + a3 > v18 )
      {
        if ( a2 < *(_DWORD *)(v16 + 28) + v18 )
          break;
        v4 = *(_QWORD *)(v16 + 8);
      }
      else
      {
        v4 = *(_QWORD *)v16;
      }
      if ( v17 && v4 )
        v16 ^= v4;
      else
        v16 = v4;
    }
    while ( v16 );
    if ( v16 )
    {
      a4 = v16 - 24;
      goto LABEL_2;
    }
  }
  return v4;
}
