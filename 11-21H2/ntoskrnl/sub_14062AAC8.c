/*
 * XREFs of sub_14062AAC8 @ 0x14062AAC8
 * Callers:
 *     sub_1409D9620 @ 0x1409D9620 (sub_1409D9620.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_14062C4B4 @ 0x14062C4B4 (sub_14062C4B4.c)
 *     sub_14062C558 @ 0x14062C558 (sub_14062C558.c)
 *     sub_1409DA014 @ 0x1409DA014 (sub_1409DA014.c)
 *     sub_1409DA070 @ 0x1409DA070 (sub_1409DA070.c)
 *     sub_1409DA634 @ 0x1409DA634 (sub_1409DA634.c)
 */

__int64 __fastcall sub_14062AAC8(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v3; // rdi
  PEX_SPIN_LOCK v6; // rbp
  __int64 v7; // r12
  int v8; // ebx
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  _RTL_BALANCED_NODE *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  ULONG_PTR ParentValue; // r8
  __int64 *v22; // r14
  __int64 *v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rax
  _QWORD *v30; // r14
  ULONG_PTR v31; // rbx
  _RTL_RB_TREE *v32; // rbp
  __int64 v33; // rax
  _RTL_BALANCED_NODE *v34; // rax
  __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v36 = 0LL;
  v6 = SpinLock;
  v7 = sub_14045F78C(SpinLock);
  if ( *((_QWORD *)v6 + 9) == a3 )
  {
    v9 = *((_QWORD *)v6 + 3);
    if ( (v6[8] & 1) != 0 && v9 )
      v9 ^= (unsigned __int64)(v6 + 6);
    while ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 32);
      if ( a2 <= v10 )
      {
        if ( a2 >= *(_QWORD *)(v9 + 24) )
        {
          if ( v10 == a2
            && (v18 = (_RTL_BALANCED_NODE *)sub_14062C4B4(v6)) != 0LL
            && v18[1].Children[0] == (_RTL_BALANCED_NODE *)(a2 + 1) )
          {
            sub_14062C558(v9);
            v19 = sub_14062C558(v18);
            if ( v20 == v19 && ((*(_BYTE *)(v9 + 64) ^ *(_BYTE *)&v18[2].16) & 1) == 0 )
            {
              ParentValue = v18[1].ParentValue;
              v22 = (__int64 *)(v9 + 40);
              v23 = *(__int64 **)(v9 + 40);
              do
              {
                v24 = v23[7];
                if ( v24 + 1 < v24
                  || v24 + 1 != *(_QWORD *)(ParentValue + 48)
                  || ((*((_BYTE *)v23 + 64) ^ *(_BYTE *)(ParentValue + 64)) & 1) != 0 )
                {
                  goto LABEL_35;
                }
                v23 = (__int64 *)*v23;
                ParentValue = *(_QWORD *)ParentValue;
              }
              while ( v23 != v22 );
              if ( !*(_QWORD *)(v9 + 56) )
              {
LABEL_53:
                v30 = (_QWORD *)*v22;
                v31 = v18[1].ParentValue;
                v32 = (_RTL_RB_TREE *)(v6 + 2);
                do
                {
                  RtlRbRemoveNode(v32, (PRTL_BALANCED_NODE)(v31 + 24));
                  v33 = *(_QWORD *)(v31 + 56);
                  *(_QWORD *)(v31 + 40) = -1LL;
                  v30[7] = v33;
                  *(_DWORD *)(v31 + 64) &= ~1u;
                  v30 = (_QWORD *)*v30;
                  v31 = *(_QWORD *)v31;
                }
                while ( v30 != (_QWORD *)(v9 + 40) );
                v6 = SpinLock;
                RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), v18);
                v34 = v18[1].Children[1];
                v18->ParentValue = -1LL;
                *(_QWORD *)(v9 + 32) = v34;
                v3 = v18;
                ++*((_QWORD *)SpinLock + 5);
                v8 = 0;
                goto LABEL_18;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel(v6);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v27 = *((_QWORD *)CurrentPrcb + 4375);
                    v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
                    v16 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
                    *(_DWORD *)(v27 + 20) &= v28;
                    if ( v16 )
                      sub_140418E4C((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8((unsigned __int8)v7);
              v8 = sub_1409DA070(
                     (_DWORD)v6,
                     *(_QWORD *)(v9 + 24),
                     (unsigned int)v18[1].Children[1] - (unsigned int)*(_QWORD *)(v9 + 24) + 1,
                     *(_DWORD *)(v9 + 64) & 1,
                     (__int64)&v36);
              if ( v8 >= 0 )
              {
                sub_1409DA634(v6, v18[2].Children[1]);
                sub_1409DA634(v6, *(_QWORD *)(v9 + 56));
                v7 = sub_14045F78C(v6);
                v29 = v36;
                v36 = 0LL;
                *(_QWORD *)(v9 + 56) = v29;
                v18[2].Children[1] = 0LL;
                goto LABEL_53;
              }
              return (unsigned int)v8;
            }
LABEL_35:
            v8 = -1073741182;
          }
          else
          {
            v8 = -1073741503;
          }
LABEL_17:
          v3 = 0LL;
          goto LABEL_18;
        }
        v11 = *(_QWORD *)v9;
      }
      else
      {
        v11 = *(_QWORD *)(v9 + 8);
      }
      if ( (v6[8] & 1) != 0 && v11 )
        v9 ^= v11;
      else
        v9 = v11;
    }
    v8 = -1073741172;
    goto LABEL_17;
  }
  v8 = -1073740007;
LABEL_18:
  if ( v7 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = *((_QWORD *)v13 + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C((__int64)v13);
        }
      }
    }
    __writecr8((unsigned __int8)v7);
  }
  if ( v3 )
    sub_1409DA014(v3);
  return (unsigned int)v8;
}
