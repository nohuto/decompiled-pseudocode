/*
 * XREFs of sub_14062BA64 @ 0x14062BA64
 * Callers:
 *     sub_1409D94E0 @ 0x1409D94E0 (sub_1409D94E0.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_14062A30C @ 0x14062A30C (sub_14062A30C.c)
 *     sub_14062C524 @ 0x14062C524 (sub_14062C524.c)
 *     sub_14062C558 @ 0x14062C558 (sub_14062C558.c)
 *     sub_1409DA014 @ 0x1409DA014 (sub_1409DA014.c)
 *     sub_1409DA634 @ 0x1409DA634 (sub_1409DA634.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14062BA64(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // r13
  unsigned int v9; // ebx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r10
  _RTL_BALANCED_NODE *v12; // r8
  unsigned __int64 v13; // rax
  _RTL_BALANCED_NODE *v14; // r11
  unsigned __int8 v15; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  _RTL_BALANCED_NODE *v21; // rbx
  _RTL_BALANCED_NODE *ParentValue; // rdi
  _RTL_BALANCED_NODE *v23; // rax
  _RTL_BALANCED_NODE *v24; // r9
  int v25; // eax
  _RTL_BALANCED_NODE *v26; // rdx
  _RTL_BALANCED_NODE *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r11
  bool v32; // zf
  __int64 v33; // [rsp+40h] [rbp-78h] BYREF
  __int64 v34; // [rsp+48h] [rbp-70h]
  __int64 v35; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h]
  PVOID v37; // [rsp+60h] [rbp-58h]
  unsigned __int64 v38; // [rsp+68h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+D0h] [rbp+18h]

  P = 0LL;
  v37 = 0LL;
  v39 = a4 + a2 - 1;
  v34 = 0LL;
  v38 = a3 + a4;
  v6 = a3 + a4 - 1;
  v35 = 0LL;
  v33 = sub_14045F78C(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
  {
    v9 = -1073740007;
    goto LABEL_18;
  }
  sub_14062A30C(SpinLock, a3, a2, a4, &v33, 1);
  v10 = (unsigned __int64)(SpinLock + 2);
  v11 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 )
  {
    if ( v11 )
      v11 ^= v10;
    else
      v11 = 0LL;
  }
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_17;
    v12 = *(_RTL_BALANCED_NODE **)(v11 + 32);
    if ( a3 > (unsigned __int64)v12 )
    {
      v13 = *(_QWORD *)(v11 + 8);
      goto LABEL_12;
    }
    v14 = *(_RTL_BALANCED_NODE **)(v11 + 24);
    if ( a3 >= (unsigned __int64)v14 )
      break;
    v13 = *(_QWORD *)v11;
LABEL_12:
    if ( (SpinLock[4] & 1) != 0 && v13 )
      v11 ^= v13;
    else
      v11 = v13;
  }
  v21 = (_RTL_BALANCED_NODE *)(v11 - 24);
  if ( v11 == 24 )
  {
LABEL_17:
    v9 = -1073741172;
    goto LABEL_18;
  }
  ParentValue = (_RTL_BALANCED_NODE *)v21->ParentValue;
  v23 = ParentValue[1].Children[0];
  v24 = ParentValue[1].Children[1];
  v41 = (unsigned __int64)v23;
  v35 = (char *)v24 - (char *)v23 + 1;
  if ( v14 == (_RTL_BALANCED_NODE *)a3
    && v12 == (_RTL_BALANCED_NODE *)v6
    && v23 == (_RTL_BALANCED_NODE *)a2
    && v24 == (_RTL_BALANCED_NODE *)v39 )
  {
    v25 = (int)v21[2].16;
    if ( (v25 & 1) != 0 )
    {
      *(_DWORD *)&v21[2].16 = v25 & 0xFFFFFFFE;
      v34 = sub_14062C524(ParentValue);
    }
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v11);
    v21[1].ParentValue = -1LL;
    v26 = v21->Children[0];
    v27 = v21->Children[1];
    if ( v21->Children[0]->Children[1] != v21 || v27->Children[0] != v21 )
      __fastfail(3u);
    v27->Children[0] = v26;
    v26->Children[1] = v27;
    P = v21;
    if ( (_RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *)ParentValue[1].ParentValue == &ParentValue[1].16 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), ParentValue);
      ParentValue->ParentValue = -1LL;
      v37 = ParentValue;
    }
    goto LABEL_45;
  }
  if ( (unsigned __int64)sub_14062C558(ParentValue) <= 1 )
  {
    if ( a3 == v31 && a2 == v41 )
    {
      v32 = v6 == v29;
      if ( v6 >= v29 )
        goto LABEL_60;
      if ( v39 < v30 )
      {
        v21[2].Children[0] = (_RTL_BALANCED_NODE *)v38;
        ParentValue[1].Children[0] = (_RTL_BALANCED_NODE *)(a2 + a4);
        goto LABEL_65;
      }
    }
    v32 = v6 == v29;
LABEL_60:
    if ( !v32 || v39 != v30 || a3 <= v31 || a2 <= v41 )
      goto LABEL_53;
    v21[2].Children[1] = (_RTL_BALANCED_NODE *)(a3 - 1);
    ParentValue[1].Children[1] = (_RTL_BALANCED_NODE *)(a2 - 1);
LABEL_65:
    if ( (*(_DWORD *)&v21[2].16 & 1) != 0 )
      v34 = (__int64)ParentValue[2].Children[1];
LABEL_45:
    ++*((_QWORD *)SpinLock + 5);
    v28 = *(_QWORD *)v10;
    if ( (SpinLock[4] & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_49;
      v28 ^= v10;
    }
    if ( v28 )
    {
LABEL_50:
      v9 = 0;
      goto LABEL_18;
    }
LABEL_49:
    *((_QWORD *)SpinLock + 9) = -1LL;
    *((_WORD *)SpinLock + 52) = 0;
    goto LABEL_50;
  }
LABEL_53:
  v9 = -1073741637;
LABEL_18:
  v15 = v33;
  if ( v33 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << (v15 + 1));
          v32 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v32 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v33);
  }
  if ( v34 )
    sub_1409DA634(SpinLock, v34);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v37 )
    sub_1409DA014(v37);
  return v9;
}
