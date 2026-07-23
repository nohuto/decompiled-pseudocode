/*
 * XREFs of sub_1402DC420 @ 0x1402DC420
 * Callers:
 *     sub_1403B450C @ 0x1403B450C (sub_1403B450C.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 * Callees:
 *     sub_1402DC668 @ 0x1402DC668 (sub_1402DC668.c)
 *     sub_1402DCA4C @ 0x1402DCA4C (sub_1402DCA4C.c)
 *     sub_1402DCA80 @ 0x1402DCA80 (sub_1402DCA80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402DC420(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // r15
  unsigned int v9; // r12d
  void *v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned int v13; // r12d
  unsigned int v14; // esi
  __int64 v15; // r10
  unsigned int v16; // r8d
  _QWORD *v17; // r9
  __int64 v18; // rax
  unsigned int i; // r8d
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v23; // [rsp+60h] [rbp-78h]
  __int64 v24; // [rsp+68h] [rbp-70h] BYREF
  __int64 v25; // [rsp+70h] [rbp-68h]
  __int64 v26; // [rsp+78h] [rbp-60h]
  __int64 Pool2; // [rsp+80h] [rbp-58h]
  unsigned int v28; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+10h]
  int v30; // [rsp+F0h] [rbp+18h]
  unsigned int v31; // [rsp+F8h] [rbp+20h]

  v30 = a3;
  v29 = a2;
  v4 = 0LL;
  v26 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = 1;
  v7 = *(unsigned int *)(v26 + 40);
  v8 = *(unsigned int *)(v26 + 44);
  v25 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  Pool2 = ExAllocatePool2(256LL, 4096LL, 1986350405LL);
  v10 = (void *)Pool2;
  v24 = Pool2;
  if ( Pool2 )
    v9 = 4096;
  v23 = v9;
  v28 = v9;
  if ( !(_DWORD)v7 && !(_DWORD)v8 )
  {
    v31 = 1;
    goto LABEL_9;
  }
  v31 = *(_DWORD *)(a1 + 24) / (unsigned int)(v8 + v7);
  v11 = v31;
  if ( (_DWORD)v7 )
  {
    v4 = sub_1402DCA80(8 * v7, &v24, &v28);
    if ( !v4 )
      goto LABEL_22;
  }
  if ( !(_DWORD)v8 || (v5 = sub_1402DCA80(4 * v8, &v24, &v28)) != 0 )
  {
    if ( !v11 )
    {
LABEL_18:
      if ( v5 )
        sub_1402DCA4C(v5, v10, v9);
      goto LABEL_20;
    }
LABEL_9:
    v12 = v26;
    v13 = v8 + v7;
    v14 = 0;
    do
    {
      v15 = v25;
      v16 = 0;
      if ( (_DWORD)v7 )
      {
        v17 = (_QWORD *)v4;
        do
        {
          v18 = v14 * v13 + v16++;
          *v17++ = *((_QWORD *)qword_140C54D00 + *(unsigned int *)(v15 + 4 * v18));
        }
        while ( v16 < (unsigned int)v7 );
      }
      for ( i = v7; i < v13; *(_DWORD *)(v5 + 4 * v21) = v20 )
      {
        v20 = *(_DWORD *)(v15 + 4LL * (v14 * v13 + i));
        v21 = i - (unsigned int)v7;
        ++i;
      }
      v6 = sub_1402DC668(*(_QWORD *)(v12 + 96), v4, v7, v5, v8, v29, v30, 0LL, 0, v24, v28);
      if ( v6 - 1 <= 1 )
        break;
      ++v14;
    }
    while ( v14 < v31 );
    v10 = (void *)Pool2;
    v9 = v23;
    goto LABEL_18;
  }
LABEL_20:
  if ( v4 )
    sub_1402DCA4C(v4, v10, v9);
LABEL_22:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x76654D45u);
  return v6;
}
