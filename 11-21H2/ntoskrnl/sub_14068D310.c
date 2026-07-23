/*
 * XREFs of sub_14068D310 @ 0x14068D310
 * Callers:
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020B6B8 @ 0x14020B6B8 (sub_14020B6B8.c)
 *     sub_140254F78 @ 0x140254F78 (sub_140254F78.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_14068DA14 @ 0x14068DA14 (sub_14068DA14.c)
 *     sub_14068DB00 @ 0x14068DB00 (sub_14068DB00.c)
 *     sub_14080C194 @ 0x14080C194 (sub_14080C194.c)
 *     sub_14080C508 @ 0x14080C508 (sub_14080C508.c)
 */

__int64 __fastcall sub_14068D310(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  _RTL_BALANCED_NODE *v7; // r13
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // esi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  _RTL_BALANCED_NODE *v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  _RTL_BALANCED_NODE *i; // rcx
  unsigned __int64 v24; // rdx
  _RTL_BALANCED_NODE *v25; // r9
  __int64 v26; // rdi
  PPRIVILEGE_SET *v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  PPRIVILEGE_SET v30; // rbx
  __int64 v31; // rax
  void *v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  PPRIVILEGE_SET *v36; // rax
  PPRIVILEGE_SET *v37; // rax
  BOOLEAN v38; // r8
  _RTL_BALANCED_NODE *v39; // r8
  PPRIVILEGE_SET v40; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-18h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+40h] [rbp-10h]

  v40 = 0LL;
  v4 = a1 + 40;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (unsigned int)(a2 + 4096);
  v7 = (_RTL_BALANCED_NODE *)(v6 + a3);
  p_Privileges = &Privileges;
  v8 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  Privileges = (PPRIVILEGE_SET)&Privileges;
  v9 = a1;
  if ( !v8 && v5 )
    v5 ^= v4;
  v10 = *(_BYTE *)(a1 + 48) & 1;
  while ( v5 )
  {
    if ( v6 >= *(_QWORD *)(v5 + 40) )
    {
      if ( v6 < *(_QWORD *)(v5 + 48) )
        break;
      v11 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v5;
    }
    if ( v10 && v11 )
      v5 ^= v11;
    else
      v5 = v11;
  }
  if ( *(_QWORD *)(v5 + 48) >= (__int64)v7 )
  {
    *a4 = v6 + *(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 24);
    return 0;
  }
  v14 = sub_14020B6B8();
  v15 = sub_14068DA14(v9, v6 & -v14, v7, &v40);
  v17 = (_RTL_BALANCED_NODE *)v40;
  v12 = v15;
  if ( v15 >= 0 )
  {
    v12 = sub_14068DB00(v9, (_DWORD)v40, v6, (_DWORD)v7, 0);
    if ( v12 >= 0 )
    {
      v18 = v6;
      if ( v6 < (unsigned __int64)v7 )
      {
        do
        {
          v19 = *(_QWORD *)v4;
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v19 )
            v19 ^= v4;
          while ( v19 )
          {
            if ( v18 >= *(_QWORD *)(v19 + 40) )
            {
              if ( v18 < *(_QWORD *)(v19 + 48) )
                break;
              v20 = *(_QWORD *)(v19 + 8);
            }
            else
            {
              v20 = *(_QWORD *)v19;
            }
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v20 )
              v19 ^= v20;
            else
              v19 = v20;
          }
          v12 = sub_14080C194(a1, v17, v19);
          if ( v12 < 0 )
            goto LABEL_64;
          v18 = *(_QWORD *)(v19 + 48);
        }
        while ( v18 < (__int64)v7 );
      }
      v33 = (__int64)&v7[-1].ParentValue + 7;
      v21 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v21 )
        v21 ^= v4;
      while ( v21 )
      {
        if ( v33 >= *(_QWORD *)(v21 + 40) )
        {
          if ( v33 < *(_QWORD *)(v21 + 48) )
            break;
          v22 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v22 = *(_QWORD *)v21;
        }
        if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v22 )
          v21 ^= v22;
        else
          v21 = v22;
      }
      for ( i = *(_RTL_BALANCED_NODE **)(v5 + 48);
            (__int64)i < *(_QWORD *)(v21 + 40);
            i = *(_RTL_BALANCED_NODE **)(v34 + 48) )
      {
        v34 = *(_QWORD *)v4;
        if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v34 )
          v34 ^= v4;
        while ( v34 )
        {
          if ( (__int64)i >= *(_QWORD *)(v34 + 40) )
          {
            if ( (__int64)i < *(_QWORD *)(v34 + 48) )
              break;
            v35 = *(_QWORD *)(v34 + 8);
          }
          else
          {
            v35 = *(_QWORD *)v34;
          }
          if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v35 )
            v34 ^= v35;
          else
            v34 = v35;
        }
        RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v34);
        v36 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_105;
        *(_QWORD *)(v34 + 8) = p_Privileges;
        *(_QWORD *)v34 = &Privileges;
        *v36 = (PPRIVILEGE_SET)v34;
        p_Privileges = (PPRIVILEGE_SET *)v34;
      }
      v24 = v5;
      if ( *(_QWORD *)(v5 + 40) == v6 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v5);
        v37 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_105;
        *(_QWORD *)(v5 + 8) = p_Privileges;
        *(_QWORD *)v5 = &Privileges;
        *v37 = (PPRIVILEGE_SET)v5;
        p_Privileges = (PPRIVILEGE_SET *)v5;
        v26 = a1;
      }
      else
      {
        v25 = *(_RTL_BALANCED_NODE **)(v5 + 48);
        v26 = a1;
        sub_14080C508(a1, v24, v6, v25);
      }
      if ( *(_RTL_BALANCED_NODE **)(v21 + 48) == v7 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v21);
        v27 = p_Privileges;
        if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
          goto LABEL_105;
        *(_QWORD *)(v21 + 8) = p_Privileges;
        *(_QWORD *)v21 = &Privileges;
        *v27 = (PPRIVILEGE_SET)v21;
        p_Privileges = (PPRIVILEGE_SET *)v21;
      }
      else
      {
        sub_14080C508(v26, v21, *(_QWORD *)(v21 + 40), v7);
      }
      v29 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v29 )
        v29 ^= v4;
      v38 = 0;
      if ( v29 )
      {
        while ( 1 )
        {
          if ( (signed __int64)v17[1].ParentValue >= *(_QWORD *)(v29 + 40) )
          {
            v28 = *(_QWORD *)(v29 + 8);
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v28 )
              {
LABEL_104:
                v38 = 1;
                break;
              }
              v28 ^= v29;
            }
            if ( !v28 )
              goto LABEL_104;
          }
          else
          {
            v28 = *(_QWORD *)v29;
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v28 )
              {
LABEL_103:
                v38 = 0;
                break;
              }
              v28 ^= v29;
            }
            if ( !v28 )
              goto LABEL_103;
          }
          v29 = v28;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v29, v38, v17);
      v30 = Privileges;
      v31 = *(_QWORD *)&Privileges->PrivilegeCount;
      if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid == &Privileges )
      {
        while ( 1 )
        {
          if ( *(PPRIVILEGE_SET *)(v31 + 8) != v30 )
            goto LABEL_105;
          Privileges = (PPRIVILEGE_SET)v31;
          *(_QWORD *)(v31 + 8) = &Privileges;
          if ( v30 == (PPRIVILEGE_SET)&Privileges )
            break;
          v32 = *(void **)&v30[2].Privilege[0].Attributes;
          if ( v32 )
            sub_140254F78((__int64)&Privileges, *(HANDLE **)(v26 + 24), v32);
          SeFreePrivileges(v30);
          v30 = Privileges;
          if ( (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid != &Privileges )
            goto LABEL_105;
          v31 = *(_QWORD *)&Privileges->PrivilegeCount;
        }
        v12 = 0;
        v16 = v6 + (char *)v17[2].Children[1] - (char *)v17[1].Children[0];
        v17 = 0LL;
        *a4 = v16;
LABEL_64:
        v9 = a1;
        goto LABEL_65;
      }
LABEL_105:
      __fastfail(3u);
    }
  }
LABEL_65:
  if ( v17 )
  {
    v39 = v17[2].Children[1];
    if ( v39 )
      sub_140254F78(v16, *(HANDLE **)(v9 + 24), v39);
    SeFreePrivileges((PPRIVILEGE_SET)v17);
  }
  return (unsigned int)v12;
}
