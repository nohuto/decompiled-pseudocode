/*
 * XREFs of sub_1406F80E4 @ 0x1406F80E4
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_1407DB734 @ 0x1407DB734 (sub_1407DB734.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 */

__int64 __fastcall sub_1406F80E4(struct _EX_RUNDOWN_REF *a1, __int64 a2, char a3)
{
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // rax
  ULONG_PTR Count; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // r12d
  int v11; // eax
  __int128 v12; // xmm0
  char *v13; // rcx
  __int64 v14; // rax
  _OWORD *v15; // rbx
  unsigned int v16; // r14d
  struct _EX_RUNDOWN_REF *v17; // rax
  __int64 v18; // rsi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  ULONG_PTR v23; // [rsp+20h] [rbp-49h]
  ULONG_PTR v24; // [rsp+28h] [rbp-41h]
  ULONG_PTR v25; // [rsp+30h] [rbp-39h]
  _OWORD v26[8]; // [rsp+40h] [rbp-29h] BYREF
  char v27; // [rsp+D0h] [rbp+67h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v26, 0, 0x48uLL);
  v6 = sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D06D80);
  v23 = v6;
  v7 = sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D06AA8);
  Count = a1[280].Count;
  v9 = 0;
  v10 = ((unsigned int)dword_140D3CA20 >> 2) & 1;
  v25 = v7;
  Object = 0LL;
  v27 = 0;
  v24 = Count;
  if ( !a3 || (dword_140D3CA20 & 4) == 0 && !v6 && !v7 )
  {
    v15 = 0LL;
    goto LABEL_14;
  }
  v11 = 0;
  *(_QWORD *)&v26[0] = 72LL;
  if ( Count )
    v11 = 2;
  DWORD2(v26[0]) = v11;
  *(struct _EX_RUNDOWN_REF *)&v26[1] = a1[168];
  v12 = *(_OWORD *)((char *)KeGetCurrentThread() + 1224);
  LODWORD(v26[4]) = 0;
  *(_OWORD *)((char *)&v26[1] + 8) = v12;
  if ( Count )
  {
    *((_QWORD *)&v26[2] + 1) = 0LL;
    v26[3] = 0LL;
    if ( a2 )
    {
      v22 = *(_QWORD *)(a2 + 432);
      if ( v22 )
      {
        *((_QWORD *)&v26[2] + 1) = *(_QWORD *)v22;
        v26[3] = *(_OWORD *)(v22 + 8);
      }
    }
    goto LABEL_13;
  }
  if ( a2 && (v13 = *(char **)(a2 + 176)) != 0LL )
  {
    Object = *(PVOID *)(a2 + 176);
    *((_QWORD *)&v26[2] + 1) = v13;
  }
  else
  {
    PsReferenceProcessFilePointer(a1, (__int64 *)&Object);
    v13 = (char *)Object;
    *((_QWORD *)&v26[2] + 1) = Object;
    v27 = 1;
    if ( !a2 )
      goto LABEL_41;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
  {
    DWORD2(v26[0]) |= 1u;
    *(_QWORD *)&v26[3] = a2 + 232;
    goto LABEL_11;
  }
LABEL_41:
  *(_QWORD *)&v26[3] = v13 + 88;
  if ( !a2 )
    goto LABEL_42;
LABEL_11:
  v14 = *(_QWORD *)(a2 + 208);
  if ( !v14 )
  {
LABEL_42:
    *((_QWORD *)&v26[3] + 1) = 0LL;
    goto LABEL_13;
  }
  *((_QWORD *)&v26[3] + 1) = v14 + 112;
LABEL_13:
  v15 = v26;
LABEL_14:
  if ( (dword_140D3CA20 & 2) != 0 || (_BYTE)v10 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = sub_140281870((signed __int64 *)&stru_140CF6440.Ptr + v16);
      v18 = (__int64)v17;
      if ( v17 )
      {
        v20 = v17[2].Count;
        if ( !v24 || (v20 & 4) != 0 )
        {
          if ( (v20 & 2) != 0 )
          {
            if ( (_BYTE)v10 )
              sub_14042A5E0(a1, a1[136].Count);
          }
          else
          {
            sub_14042A5E0(a1[168].Count, a1[136].Count);
          }
        }
        sub_140281930((signed __int64 *)&stru_140CF6440.Ptr + v16, v18);
        if ( v15 )
        {
          v21 = *((_DWORD *)v15 + 16);
          if ( v21 < 0 )
            break;
        }
      }
      if ( ++v16 >= 0x40 )
        goto LABEL_18;
    }
    v9 = *((_DWORD *)v15 + 16);
    sub_1407D80A4(a1, (unsigned int)v21);
LABEL_18:
    v6 = v23;
  }
  if ( v25 && (!v15 || *((int *)v15 + 16) >= 0) )
  {
    sub_14042A5E0(a1, a1[136].Count);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D06AA8);
  }
  if ( v6 && (!v15 || *((int *)v15 + 16) >= 0) )
  {
    sub_14042A5E0(a1, a1[136].Count);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D06D80);
  }
  if ( v27 )
    ObfDereferenceObject(Object);
  return v9;
}
