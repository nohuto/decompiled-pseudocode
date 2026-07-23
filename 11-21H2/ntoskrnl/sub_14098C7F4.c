/*
 * XREFs of sub_14098C7F4 @ 0x14098C7F4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_14036AAF4 @ 0x14036AAF4 (sub_14036AAF4.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14098C7F4(_QWORD *a1, _DWORD *a2)
{
  PVOID *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 Pool2; // rax
  _QWORD *v8; // r14
  int v9; // ebx
  unsigned __int64 *v10; // rbp
  __int64 v11; // rax
  PVOID *v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  _DWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  sub_140753094(0);
  v4 = (PVOID *)qword_140C242A0;
  v5 = (8LL * (unsigned int)dword_140C24290 + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  while ( v4 != &qword_140C242A0 )
  {
    v6 = (__int64)v4[12];
    v20 = 0LL;
    sub_14036AAF4(v6, 0LL, &v20);
    v5 = (v20 + 39 + v5) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 > 0xFFFFFFFF )
    {
      v9 = -1073741789;
      goto LABEL_17;
    }
    v4 = (PVOID *)*v4;
  }
  Pool2 = ExAllocatePool2(256LL, v5, 544040269LL);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v10 = (unsigned __int64 *)(Pool2 + 8);
    v11 = (unsigned int)dword_140C24290;
    *v8 = (unsigned int)dword_140C24290;
    v12 = (PVOID *)qword_140C242A0;
    v13 = (8 * v11 + 15) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v5 - v13;
    while ( 1 )
    {
      if ( v12 == &qword_140C242A0 )
      {
        *a1 = v8;
        v9 = 0;
        *a2 = v13;
        goto LABEL_17;
      }
      if ( v14 < 0x48 )
        break;
      *(_DWORD *)((char *)v8 + v13) = *((_DWORD *)v12 + 5);
      v15 = (_DWORD *)((char *)v8 + v13 + 4);
      v16 = 6LL;
      do
      {
        *v15 = *(_DWORD *)((char *)v15 + (char *)v12 - ((char *)v8 + v13) + 36);
        ++v15;
        --v16;
      }
      while ( v16 );
      v17 = (__int64)v12[12];
      v20 = v14 - 32;
      v9 = sub_14036AAF4(v17, (_QWORD *)((char *)v8 + v13 + 32), &v20);
      if ( v9 < 0 )
        goto LABEL_19;
      v18 = (v20 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v14 < v18 )
        break;
      *v10 = v13;
      v14 -= v18;
      v12 = (PVOID *)*v12;
      v13 += v18;
      ++v10;
    }
    v9 = -1073741789;
LABEL_19:
    ExFreePoolWithTag(v8, 0x206D654Du);
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_17:
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
  return (unsigned int)v9;
}
