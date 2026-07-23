/*
 * XREFs of MmChangeImageProtection @ 0x1406F5800
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027E128 @ 0x14027E128 (sub_14027E128.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DC164 @ 0x1402DC164 (sub_1402DC164.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_14033FA90 @ 0x14033FA90 (sub_14033FA90.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // ebx
  unsigned __int64 v17; // rcx
  unsigned int v18; // r12d
  _QWORD *v19; // r15
  _QWORD *v20; // r13
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 BugCheckParameter2; // [rsp+30h] [rbp-48h]

  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 10) & 7) != 2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 44) )
    return 3221225485LL;
  v7 = *(_DWORD *)(a1 + 40);
  if ( (v7 & 0xFFF) != 0 )
    return 3221225485LL;
  v8 = v7 >> 12;
  v9 = ((__int64 (*)(void))sub_1406F5B50)();
  --*(_WORD *)(v9 + 484);
  --*(_WORD *)(v9 + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v10 = sub_1402FDA80(*(_QWORD *)(a1 + 32), 0);
  v11 = (__int64)v10;
  if ( v10 )
  {
    v12 = v10[6];
    v13 = a3 + a2;
    v14 = v12 + *((unsigned int *)v10 + 16);
    if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v14
      || a2 < v12
      || v13 > v14
      || v13 - 1 < a2 )
    {
      v16 = -1073741800;
    }
    else
    {
      v15 = *(_DWORD *)(v11 + 104);
      if ( (v15 & 0x80000) != 0 )
      {
        v16 = -1073741757;
      }
      else
      {
        v16 = 0;
        *(_DWORD *)(v11 + 104) = v15 | 0x80000;
        if ( (unsigned int)sub_14027B080(v12) == 1 )
          sub_1402DC164(v12);
        else
          ++*(_WORD *)(v11 + 108);
      }
    }
  }
  else
  {
    v16 = -1073741275;
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  sub_1402AC800(v9);
  sub_1406F5AF0(v9);
  if ( v16 >= 0 )
  {
    if ( (unsigned int)sub_1402FDD20(*(_QWORD *)(v11 + 48)) )
    {
      v16 = -1073741800;
    }
    else
    {
      v18 = 0;
      v19 = (_QWORD *)(a1 + 48);
      if ( v8 )
      {
        v20 = (_QWORD *)(a1 + 48);
        while ( 1 )
        {
          BugCheckParameter2 = 48LL * *v20 - 0x220000000000LL;
          if ( sub_14033FA90(BugCheckParameter2) )
            break;
          if ( (sub_140313B20(BugCheckParameter2, 0, 0LL) & 0x40) != 0 )
          {
            v16 = -1073741755;
            goto LABEL_22;
          }
          ++v18;
          ++v20;
          if ( v18 >= v8 )
            goto LABEL_20;
        }
        v16 = -1073741800;
      }
      else
      {
LABEL_20:
        sub_14027E128(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), 1LL);
        if ( a4 == 1 )
        {
          v22 = *(_QWORD *)(v11 + 112);
          if ( v22
            && (v24 = *(_QWORD *)(*(_QWORD *)(sub_140287970(v22) + 96) + 40LL), (v24 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
          {
            v17 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
          }
          else
          {
            v17 = 0LL;
          }
          if ( qword_140C1B930 )
          {
            v16 = sub_14042A5E0(v17, a1);
            if ( v16 >= 0 )
            {
              v23 = 3LL;
              if ( (dword_140D06880 & 0x8000) != 0 && v16 == 300 )
                v23 = 19LL;
              sub_14027E128(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), v23);
              v16 = 0;
            }
          }
          else
          {
            v16 = -1073741822;
          }
        }
        else if ( (dword_140D06880 & 0x8000) != 0 && v8 )
        {
          v25 = v8;
          do
          {
            sub_14023CC50(48LL * *v19++ - 0x220000000000LL, 24);
            --v25;
          }
          while ( v25 );
        }
      }
    }
LABEL_22:
    sub_1406F5B50(v17);
    --*(_WORD *)(v9 + 484);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    *(_DWORD *)(v11 + 104) &= ~0x80000u;
    ExReleaseResourceLite(&PsLoadedModuleResource);
    sub_1402AC800(v9);
    sub_1406F4FB8(v11, -1);
    sub_1406F5AF0(v9);
  }
  sub_1402F9540(v9);
  return (unsigned int)v16;
}
