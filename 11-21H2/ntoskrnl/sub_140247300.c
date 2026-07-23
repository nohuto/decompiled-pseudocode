/*
 * XREFs of sub_140247300 @ 0x140247300
 * Callers:
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_1402477A4 @ 0x1402477A4 (sub_1402477A4.c)
 *     sub_140247800 @ 0x140247800 (sub_140247800.c)
 *     sub_140247840 @ 0x140247840 (sub_140247840.c)
 *     sub_140247874 @ 0x140247874 (sub_140247874.c)
 *     sub_140247914 @ 0x140247914 (sub_140247914.c)
 *     sub_1402479B8 @ 0x1402479B8 (sub_1402479B8.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_14028D920 @ 0x14028D920 (sub_14028D920.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140247300(__int64 a1, __int64 a2)
{
  BOOL v2; // r15d
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // r12d
  char *v12; // r14
  __int64 v14; // rax
  char *v15; // rdx
  char *v16; // r8
  __int64 v17; // r9
  char **v18; // rcx
  char **v19; // r8
  char *j; // rcx
  char *v21; // r9
  unsigned int v22; // esi
  int v23; // ecx
  unsigned int v24; // ebp
  char **i; // rcx
  char *v26; // r8
  KIRQL v27; // al
  __int64 v28; // r14
  _QWORD *v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 *v33; // rax
  _QWORD v34[3]; // [rsp+20h] [rbp-58h] BYREF
  int v35; // [rsp+38h] [rbp-40h]
  int v36; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v37; // [rsp+88h] [rbp+10h]
  char *PoolWithTag; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v36 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v2 = a2 > 0x200000;
  v34[2] = 0LL;
  v35 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v34[1] = v34;
  v34[0] = v34;
  if ( a2 <= v5 )
    goto LABEL_31;
  v6 = v5;
  if ( v5 >= 0x2000000 )
    goto LABEL_30;
  v5 = a2;
  if ( a2 >= 0x2000000 )
    v5 = 0x2000000LL;
  v7 = -1;
  v6 = v5;
  if ( HIDWORD(v5) )
  {
    v8 = -1;
  }
  else if ( (unsigned int)v5 <= 0x100000 )
  {
    v8 = 32;
  }
  else
  {
    v8 = 8 * ((unsigned int)v5 >> 18);
  }
  v37 = v8;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v9 = *(_DWORD *)(a1 + 32);
    if ( v9 <= 0x100000 )
      v7 = 32;
    else
      v7 = 8 * (v9 >> 18);
  }
  if ( v8 <= v7 )
  {
LABEL_29:
    *(_QWORD *)(a1 + 32) = v5;
LABEL_30:
    if ( a2 <= v5 )
    {
LABEL_31:
      sub_1402477A4(v34);
      return 0LL;
    }
    v22 = 1;
    v23 = 25;
    if ( v5 > 0x2000000 )
    {
      do
      {
        v23 += 7;
        ++v22;
      }
      while ( v6 > 1LL << v23 );
    }
    v24 = v22;
    if ( !((a2 - 1) >> v23) )
      goto LABEL_48;
    do
    {
      v23 += 7;
      ++v24;
    }
    while ( (a2 - 1) >> v23 );
    if ( v24 <= v22 )
    {
LABEL_48:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_31;
    }
    v27 = KeAcquireQueuedSpinLock(4uLL);
    if ( v24 >= dword_140C09594 )
      dword_140C09594 = v24 + 1;
    KeReleaseQueuedSpinLock(4uLL, v27);
    if ( (unsigned __int8)sub_140247914(v24 - v22, 0LL, v34) )
    {
      sub_140247840(v2, a1);
      if ( v22 == 1 )
        sub_140247874(a1, *(_QWORD *)(a1 + 88));
      v28 = *(_QWORD *)(a1 + 88);
      if ( *(_QWORD *)sub_14028D920(a1, v28, v22 - 1) )
      {
        do
        {
          ++v22;
          v29 = (_QWORD *)sub_1402479B8(v34, 0LL);
          *v29 = *(_QWORD *)(a1 + 88);
          v30 = (_DWORD *)sub_14028D920(a1, v29, v22);
          ++*v30;
          *(_QWORD *)(a1 + 88) = v31;
        }
        while ( v22 < v24 );
      }
      else if ( v22 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = sub_1402479B8(v34, 0LL);
        v32 = *(_QWORD *)(v28 + 1024);
        v33 = *(__int64 **)(v28 + 2040);
        *(_QWORD *)(v32 + 8) = v33;
        *v33 = v32;
        sub_140203D88((__int64)&unk_140CE22C0, (_SLIST_ENTRY *)v28, v32);
      }
      *(_QWORD *)(a1 + 32) = a2;
      sub_140247800(v2, a1);
      goto LABEL_48;
    }
    return 3221225626LL;
  }
  if ( v2 )
    v8 += (v8 + 15) & 0xFFFFFFF0;
  v10 = v8 + 8;
  if ( a2 < 0x2000000 )
    v10 = v8;
  v11 = v10;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x70566343u);
  if ( PoolWithTag )
  {
    sub_140247840(v2, a1);
    v12 = *(char **)(a1 + 88);
    if ( v12 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v7);
    else
      v7 = 0;
    memset(&PoolWithTag[v7], 0, v37 - v7);
    if ( a2 >= 0x2000000 )
      *(_QWORD *)&PoolWithTag[v11 - 8] = 0LL;
    if ( v2 )
    {
      v14 = 0LL;
      v15 = &PoolWithTag[v37];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v12 )
      {
        v16 = &v12[v7];
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = (char **)*((_QWORD *)v16 + 1);
          if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
            goto LABEL_74;
          if ( *v18 != v16 )
            goto LABEL_74;
          *v18 = (char *)v17;
          *(_QWORD *)(v17 + 8) = v18;
          if ( *v18 != (char *)v17 )
            goto LABEL_74;
          *(_QWORD *)v15 = v17;
          v14 += 0x80000LL;
          *(_QWORD *)&PoolWithTag[v37 - (unsigned __int64)v7 - (_QWORD)v12 + 8 + (_QWORD)v16] = v18;
          v16 += 16;
          *v18 = v15;
          *(_QWORD *)(v17 + 8) = v15;
          v15 += 16;
          if ( v14 >= *(_QWORD *)(a1 + 32) )
            goto LABEL_40;
        }
      }
      for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
      {
        if ( v14 <= (__int64)*(i - 1) )
        {
          v26 = *i;
          while ( *((char ***)v26 + 1) == i )
          {
            *(_QWORD *)v15 = v26;
            v14 += 0x80000LL;
            *((_QWORD *)v15 + 1) = i;
            *((_QWORD *)v26 + 1) = v15;
            v26 = v15;
            *i = v15;
            v15 += 16;
            if ( v14 > (__int64)*(i - 1) )
              goto LABEL_53;
          }
LABEL_74:
          __fastfail(3u);
        }
LABEL_53:
        ;
      }
LABEL_40:
      if ( v14 < v5 )
      {
        v19 = (char **)(a1 + 16);
        for ( j = *(char **)(a1 + 16); ; j = v21 )
        {
          v21 = v15;
          if ( *((char ***)j + 1) != v19 )
            break;
          *(_QWORD *)v15 = j;
          v14 += 0x80000LL;
          *((_QWORD *)v15 + 1) = v19;
          *((_QWORD *)j + 1) = v15;
          *v19 = v15;
          v15 += 16;
          if ( v14 >= v5 )
            goto LABEL_25;
        }
        goto LABEL_74;
      }
    }
LABEL_25:
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v5;
    sub_140247800(v2, a1);
    if ( v12 != (char *)(a1 + 56) && v12 )
      ExFreePoolWithTag(v12, 0);
    v6 = v5;
    goto LABEL_29;
  }
  return 3221225626LL;
}
