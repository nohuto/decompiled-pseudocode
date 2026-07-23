/*
 * XREFs of sub_1405BD66C @ 0x1405BD66C
 * Callers:
 *     sub_1405BD580 @ 0x1405BD580 (sub_1405BD580.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall sub_1405BD66C(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rax
  int v5; // r10d
  unsigned __int64 *v6; // rdx
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  char v11; // si
  __int64 v12; // rbp
  unsigned __int64 v13; // r11
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdi
  unsigned __int64 *v20; // r15
  __int64 *v21; // rsi
  __int64 v22; // r14
  _QWORD *v23; // rbp
  unsigned __int64 v24; // rdi
  PVOID v25; // rax
  __int64 v26; // rcx
  bool v27; // r8
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 *v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rdx
  bool v38; // zf
  bool i; // zf
  __int64 v41; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+28h] [rbp-90h]
  unsigned __int64 v43; // [rsp+30h] [rbp-88h]
  int v46; // [rsp+D0h] [rbp+18h]

  v4 = a2;
  v5 = 0;
  v6 = a1;
  v46 = 0;
  v8 = 0LL;
  v9 = v4 & 0x3FFFFFFFFFFC0000LL;
  v10 = 0LL;
  v11 = a4;
  v42 = v4 & 0x3FFFFFFFFFFC0000LL;
LABEL_2:
  v10 = v9 | v10 & 0xC000000000000000uLL;
  v12 = v4;
  v13 = (v4 + a3 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
  v43 = v13;
  while ( 1 )
  {
    v41 = v12;
    if ( !a3 )
      return !v5;
    v14 = (_QWORD *)*v6;
    v15 = 0LL;
    if ( *v6 )
    {
      v16 = v10 & 0x3FFFFFFFFFFFFFFFLL;
      do
      {
        v17 = v14[3];
        if ( v16 >= (v17 & 0x3FFFFFFFFFFFFFFFuLL) )
        {
          v18 = v14[4];
          if ( v16 < v18 + (v17 & 0x3FFFFFFFFFFFFFFFLL) )
          {
            v20 = v14 + 4;
            v21 = v14 + 3;
            v22 = (__int64)(v14 + 4);
            if ( (v17 & 0x4000000000000000LL) == 0 || (a4 & 1) == 0 )
            {
              v17 &= ~0x4000000000000000uLL;
              *v21 = v17;
            }
            goto LABEL_32;
          }
          v14 = (_QWORD *)v14[1];
        }
        else
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
        }
      }
      while ( v14 );
      if ( !v15 )
        goto LABEL_15;
      v19 = v15[3] & 0x3FFFFFFFFFFFFFFFLL;
    }
    else
    {
LABEL_15:
      v19 = v13;
    }
    v23 = sub_1402828F0(64, 0x30uLL, 0x7070694Du);
    if ( !v23 )
      goto LABEL_58;
    if ( (v11 & 2) != 0 )
      v24 = v19 - (v10 & 0x3FFFFFFFFFFFFFFFLL);
    else
      v24 = 0x40000LL;
    v25 = sub_1402828F0(64, 8 * ((v24 >> 6) + ((v24 & 0x3F) != 0)), 0x6270694Du);
    if ( !v25 )
    {
      ExFreePoolWithTag(v23, 0);
LABEL_58:
      v5 = 1;
      v46 = 1;
      if ( v8 )
      {
        v4 = a2;
        a3 = v8;
        v9 = v42;
        v6 = a1;
        goto LABEL_2;
      }
      return 0LL;
    }
    v20 = v23 + 4;
    v21 = v23 + 3;
    v23[4] = v24;
    v23[5] = v25;
    v22 = (__int64)(v23 + 4);
    v26 = v23[3] ^ (v23[3] ^ v10) & 0x3FFFFFFFFFFFFFFFLL;
    v23[3] = v26;
    if ( (a4 & 1) != 0 )
    {
      v26 |= 0x4000000000000000uLL;
      *v21 = v26;
    }
    v27 = 0;
    v28 = (_QWORD *)*a1;
    if ( *a1 )
    {
      v29 = v26 & 0x3FFFFFFFFFFFFFFFLL;
      while ( 1 )
      {
        if ( v29 >= (v28[3] & 0x3FFFFFFFFFFFFFFFuLL) )
        {
          v30 = (_QWORD *)v28[1];
          if ( !v30 )
          {
            v27 = 1;
            break;
          }
        }
        else
        {
          v30 = (_QWORD *)*v28;
          if ( !*v28 )
            break;
        }
        v28 = v30;
      }
    }
    RtlAvlInsertNodeEx(a1, (unsigned __int64)v28, v27, v23);
    v17 = *v21;
    v18 = *v20;
    v5 = v46;
    v12 = v41;
LABEL_32:
    v31 = v17 & 0x3FFFFFFFFFFFFFFFLL;
    v32 = v18 + v31 - v12;
    if ( v32 > a3 )
      v32 = a3;
    if ( (a4 & 4) == 0 )
    {
      v33 = v12 - v31;
      if ( v5 )
      {
        RtlClearBitsEx(v22, v33, v32);
        *v21 &= ~0x8000000000000000uLL;
        goto LABEL_56;
      }
      RtlSetBitsEx(v22, v33, v32);
      if ( v12 == (*v21 & 0x3FFFFFFFFFFFFFFFLL) && v32 == *v20 )
      {
        *v21 |= 0x8000000000000000uLL;
        goto LABEL_56;
      }
      v34 = *v20;
      if ( *(_QWORD *)v22 )
      {
        if ( v34 > 1 )
        {
          if ( *(_QWORD *)v22 < v34 )
            goto LABEL_56;
          v35 = *(__int64 **)(v22 + 8);
          v36 = *v35;
          v37 = &v35[(v34 - 1) >> 6];
          if ( v35 == v37 )
          {
            v38 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v34)) & v36) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v34);
LABEL_52:
            if ( v38 )
LABEL_53:
              *v21 |= 0x8000000000000000uLL;
          }
          else
          {
            for ( i = v36 == -1; i; i = *v35 == -1 )
            {
              if ( ++v35 == v37 )
              {
                v38 = (*v35 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v34 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v34 - 1);
                goto LABEL_52;
              }
            }
          }
        }
        else if ( v34 == 1 && _bittest64(*(const signed __int64 **)(v22 + 8), 0) )
        {
          goto LABEL_53;
        }
      }
    }
LABEL_56:
    v5 = v46;
    v12 += v32;
    v13 = v43;
    v11 = a4;
    v6 = a1;
    a3 -= v32;
    v8 += v32;
    v10 ^= (v12 ^ v10) & 0x3FFFFFFFFFFFFFFFLL;
  }
}
