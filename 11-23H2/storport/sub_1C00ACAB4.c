/*
 * XREFs of sub_1C00ACAB4 @ 0x1C00ACAB4
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     sub_1C00A0400 @ 0x1C00A0400 (sub_1C00A0400.c)
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008510 @ 0x1C0008510 (sub_1C0008510.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0010124 @ 0x1C0010124 (sub_1C0010124.c)
 *     sub_1C001AA84 @ 0x1C001AA84 (sub_1C001AA84.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 */

__int64 __fastcall sub_1C00ACAB4(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, char a7, void *Dst)
{
  __int64 v8; // r14
  char v9; // r13
  __int64 v10; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rbp
  int v20; // esi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 LockArray_high; // rdx
  __int64 v24; // r8
  int v25; // eax

  v8 = 0LL;
  v9 = a4;
  v10 = a1;
  if ( !Dst )
    return 3221225485LL;
  if ( !a1 )
    v10 = *(_QWORD *)(a2 + 24);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 568) + 184LL) & 0x4000) == 0 )
    return 3221225659LL;
  v12 = (*(_DWORD *)(v10 + 484) + 7) & 0xFFFFFFF8;
  if ( a4 )
  {
    if ( a4 != 1 && a4 != 2 && a4 != 3 && a4 != 5 )
      return 3221225488LL;
    memset_0(Dst, 0, 0x1000uLL);
  }
  v13 = sub_1C0007BA4(*(_QWORD *)(v10 + 8), 0xAu, *(_BYTE *)(v10 + 442), 0);
  v15 = sub_1C0008424(v12 + 1104, v14, v10);
  v18 = v15;
  if ( v13 && v15 )
  {
    v19 = v15 + 48;
    sub_1C0004C64(v15 + 48, v16, 0, 0LL);
    v20 = sub_1C0008510(v19, Dst, 0x1000u);
    if ( v20 >= 0 )
    {
      sub_1C0008870(v10, v13, v18 + 1104);
      *(_BYTE *)(v19 + 17) |= 8u;
      if ( *(_BYTE *)(v10 + 442) == 1 )
      {
        v8 = v13;
        v21 = v13 + *(unsigned int *)(v13 + 120);
        *(_DWORD *)(v13 + 20) = 10;
        *(_DWORD *)(v13 + 24) = 322;
        *(_BYTE *)(v13 + 3) = 0;
        if ( (unsigned int)sub_1C00230AC() && sub_1C0023100(v10) )
        {
          LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
          _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v10 + 6080) + 8 * LockArray_high));
          v22 = **(_QWORD **)(*(_QWORD *)(v10 + 6080) + 8 * LockArray_high);
          *(_DWORD *)(v13 + 44) = HIDWORD(v22);
        }
        else
        {
          LODWORD(v22) = -1;
        }
        *(_DWORD *)(v13 + 32) = v22;
        *(_QWORD *)(v13 + 64) = Dst;
        *(_DWORD *)(v13 + 60) = 4096;
        *(_DWORD *)(v13 + 40) = *(_DWORD *)(v10 + 4060);
        *(_QWORD *)(v13 + 96) = v19;
        *(_QWORD *)(v19 + 168) = v13;
        *(_QWORD *)(v19 + 184) = *(_QWORD *)(v13 + 64);
        *(_QWORD *)(v19 + 176) = *(_QWORD *)(v13 + 96);
        *(_DWORD *)(v21 + 12) = a3;
        *(_BYTE *)(v21 + 48) = v9;
        *(_BYTE *)(v21 + 55) = a7;
        *(_WORD *)(v21 + 72) = 513;
        *(_BYTE *)(v21 + 8) = 6;
        *(_DWORD *)(v21 + 50) = 0;
        if ( *(_BYTE *)(v13 + 2) == 40 )
          *(_WORD *)(v13 + 38) = 32;
        else
          *(_BYTE *)(v13 + 9) = 32;
        KeInitializeEvent((PRKEVENT)(v19 + 664), NotificationEvent, 0);
        sub_1C0010124(v19, (__int64)sub_1C00100B0);
        if ( *(_QWORD *)(v10 + 4896) )
          sub_1C0008BF0(v10, 0LL, 1LL);
        if ( *(_BYTE *)(v10 + 4306) )
          v25 = sub_1C0008DB8(v10, v19);
        else
          v25 = sub_1C0008E14(v10, (_QWORD *)v19, v24);
        v20 = v25;
        if ( v25 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v19 + 664), Executive, 0, 0, 0LL);
          v20 = sub_1C0008570(*(_BYTE *)(v13 + 3));
        }
        if ( (*(_BYTE *)(v19 + 17) & 1) != 0 )
        {
          sub_1C0037008(v10, *(unsigned int *)(v19 + 748));
          *(_BYTE *)(v19 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(v10 + 4896) )
          sub_1C0008BB4(v10, 0LL, 0LL);
      }
      else
      {
        v20 = -1073741637;
      }
    }
  }
  else
  {
    v20 = -1073741801;
    v19 = 0LL;
    if ( !v15 )
      goto LABEL_37;
  }
  sub_1C0008C44(v19, 0, v17);
  sub_1C00084E4(v10, v18);
LABEL_37:
  if ( v13 )
  {
    if ( (*(_BYTE *)(v10 + 442) & 1) != 0 )
    {
      if ( !v8 )
        v8 = v13;
      *(_QWORD *)(v8 + 80) = 0LL;
      *(_QWORD *)(v8 + 104) = 0LL;
    }
    sub_1C001AA84((void *)v13);
  }
  return (unsigned int)v20;
}
