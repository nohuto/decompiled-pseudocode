/*
 * XREFs of sub_14078B5D8 @ 0x14078B5D8
 * Callers:
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 * Callees:
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14078B5D8(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r15
  PVOID *v3; // r14
  void *v4; // rsi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v13; // edx
  int v14; // edx
  int v15; // eax
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  v2 = a1 + 60;
  *(_DWORD *)(a1 + 60) = -1;
  v3 = (PVOID *)(a1 + 48);
  LODWORD(v16) = 0;
  v4 = 0LL;
  LODWORD(v17) = 0;
  v18 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v5 = v1 - 1;
  if ( !v5 )
  {
LABEL_4:
    v8 = a1 + 120;
    goto LABEL_5;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v13 = v7 - 1;
      if ( v13 )
      {
        v14 = v13 - 5;
        if ( v14 )
        {
          if ( (unsigned int)(v14 - 1) >= 2 )
            return 0;
        }
      }
    }
    goto LABEL_4;
  }
  v15 = sub_14077D91C(
          0x59706E50u,
          0xC8u,
          (int)a1 + 136,
          3,
          0LL,
          0LL,
          (__int64)&qword_140010AD8,
          (__int64)&v16,
          (PVOID *)&v18,
          (unsigned int *)&v17,
          0);
  v4 = (void *)v18;
  v10 = v15;
  if ( v15 < 0 )
    goto LABEL_9;
  v8 = v18;
LABEL_5:
  v9 = sub_14077D91C(
         0x59706E50u,
         0x200u,
         v8,
         1,
         0LL,
         0LL,
         (__int64)&qword_140010B08,
         (__int64)&v16,
         v3,
         (unsigned int *)&v17,
         0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (_DWORD)v16 != 19 )
    {
      ExFreePoolWithTag(*v3, 0x59706E50u);
      *v3 = 0LL;
    }
    goto LABEL_7;
  }
  if ( v9 == -1073741772 || v9 == -1073741275 )
  {
LABEL_7:
    v11 = sub_14077DA5C(
            *(__int64 *)&qword_140D00AC0,
            v8,
            1,
            0,
            0LL,
            (__int64)&stru_140010AF0,
            (__int64)&v16,
            v2,
            4,
            (__int64)&v17,
            0);
    v10 = v11;
    if ( v11 == -1073741772 || v11 == -1073741275 )
      v10 = 0;
  }
LABEL_9:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x59706E50u);
  return v10;
}
