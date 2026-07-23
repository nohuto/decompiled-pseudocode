/*
 * XREFs of sub_140810CB4 @ 0x140810CB4
 * Callers:
 *     sub_140810C28 @ 0x140810C28 (sub_140810C28.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_1407668C8 @ 0x1407668C8 (sub_1407668C8.c)
 *     sub_140767538 @ 0x140767538 (sub_140767538.c)
 *     sub_140767600 @ 0x140767600 (sub_140767600.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_1409581A0 @ 0x1409581A0 (sub_1409581A0.c)
 *     sub_1409582C4 @ 0x1409582C4 (sub_1409582C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_140810CB4(PVOID a1, unsigned int ***a2, int a3, int a4)
{
  __int64 v4; // rbx
  unsigned int **v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int **v10; // rsi
  PVOID *v11; // r14
  __int64 *v12; // rax
  char v13; // r9
  __int64 v14; // r11
  __int64 v15; // r11
  PVOID *v17; // rdi
  __int64 v18; // r8
  unsigned int **v19; // rax
  PVOID *v20; // rax
  PVOID **v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v23 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  v6 = *a2;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v10 = v6;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C46040, 1u);
  sub_1407756F4(1);
  v11 = (PVOID *)qword_140C46130;
  while ( v11 != &qword_140C46130 )
  {
    v17 = v11;
    v11 = (PVOID *)*v11;
    if ( v17[7] == a1 )
    {
      v4 = (__int64)v17;
      v10 = (unsigned int **)v17[8];
      break;
    }
    if ( (unsigned __int8)sub_1409581A0(v17[8], v10) )
    {
      if ( v10 == v6 )
      {
        v4 = (__int64)v17;
        v19 = (unsigned int **)sub_140767538(3LL);
        v10 = v19;
        if ( !v19 )
        {
          v10 = v6;
          break;
        }
        sub_1409582C4(v19, v6, 0LL);
      }
      LOBYTE(v18) = 1;
      sub_1409582C4(v10, v17[8], v18);
      sub_140767600(v17[8]);
      if ( (PVOID *)v4 == v17 )
      {
        *(_QWORD *)(v4 + 64) = 0LL;
      }
      else
      {
        v20 = (PVOID *)*v17;
        if ( *((PVOID **)*v17 + 1) != v17 )
          goto LABEL_28;
        v21 = (PVOID **)v17[1];
        if ( *v21 != v17 )
          goto LABEL_28;
        *v21 = v20;
        v20[1] = v21;
        ExFreePoolWithTag(v17, 0);
      }
    }
  }
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0);
  if ( v6 == v10 )
  {
    v4 = sub_140767730(3, 64LL, 112LL, 0x54706E50u);
    v12 = (__int64 *)qword_140C46138;
    if ( *(PVOID **)qword_140C46138 != &qword_140C46130 )
LABEL_28:
      __fastfail(3u);
    *(_QWORD *)v4 = &qword_140C46130;
    *(_QWORD *)(v4 + 8) = v12;
    *v12 = v4;
    qword_140C46138 = v4;
  }
  else
  {
    sub_140767600(v6);
  }
  while ( sub_1407667B0(v10, (int *)&v22, &v23, 0LL, 0LL) )
  {
    if ( v23 )
      v14 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
    else
      v14 = 0LL;
    if ( (*(_BYTE *)(v14 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)sub_1407668C8(v10, v23) )
      {
        *(_QWORD *)(v15 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v15 + 648) + 656LL);
      }
    }
  }
  *(_QWORD *)(v4 + 56) = a1;
  *(_DWORD *)(v4 + 84) = a3;
  *(_BYTE *)(v4 + 88) = v13;
  *(_QWORD *)(v4 + 64) = v10;
  *(_DWORD *)(v4 + 108) = a4;
  *(_BYTE *)(v4 + 104) = v13;
  ExReleaseResourceLite(&stru_140C46040);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
