/*
 * XREFs of sub_140958D9C @ 0x140958D9C
 * Callers:
 *     sub_140947934 @ 0x140947934 (sub_140947934.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_14081FCD8 @ 0x14081FCD8 (sub_14081FCD8.c)
 *     sub_14081FECC @ 0x14081FECC (sub_14081FECC.c)
 *     sub_14081FF24 @ 0x14081FF24 (sub_14081FF24.c)
 *     sub_14082052C @ 0x14082052C (sub_14082052C.c)
 *     sub_140854DB4 @ 0x140854DB4 (sub_140854DB4.c)
 *     sub_140947274 @ 0x140947274 (sub_140947274.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 */

void __fastcall sub_140958D9C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r14d
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // esi
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE vars0[24]; // [rsp+80h] [rbp+0h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+20h] BYREF

  memset(v14, 0, sizeof(v14));
  v16 = 0;
  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  KeWaitForSingleObject(&Semaphore, DelayExecution, 0, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x400) == 0 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 396) & 0x100;
  sub_14076FBEC(a1, 256);
  if ( (*(_DWORD *)(a1 + 396) & 0x800) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v14[3] = 0LL;
    LODWORD(v14[1]) |= 0x280u;
    v14[0] = v4;
    HIDWORD(v14[1]) = 4;
    v5 = sub_1407483B4((unsigned __int64)v14, (unsigned __int64)vars0, (int *)&v16);
    v6 = v16;
    v7 = v5;
    if ( !v16 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 416) )
      sub_14082052C((_QWORD *)a1);
    v7 = sub_14081FF24((__int64)v14, v6, (__int64)&v13);
    if ( v7 < 0 || (v7 = sub_140854DB4((_QWORD **)&v13), v7 < 0) )
    {
      v12 = sub_140958F84(a1);
      if ( v12 < 0 )
      {
        sub_140947274(*(_QWORD *)(a1 + 48), v11, 0x4000LL);
        v9 = v12;
        v10 = 14;
        goto LABEL_12;
      }
    }
    else
    {
      sub_14076FBEC(a1, 3072);
      sub_14081FCD8((unsigned __int64)v14, (unsigned __int64)vars0, 1);
      v8 = sub_140749C4C(a1, 1, 1);
      v7 = v8;
      if ( v8 < 0 )
      {
        v9 = v8;
        v10 = 12;
LABEL_12:
        sub_140765430(a1, 0, v10, v9);
      }
    }
    sub_14081FECC((unsigned __int64)v14, (unsigned __int64)vars0);
    goto LABEL_15;
  }
  v7 = sub_14095A02C(a1, 0LL, 0LL, 0LL);
LABEL_15:
  if ( v7 < 0 )
  {
    sub_14076FBEC(a1, 256);
    sub_14076FB70(a1, v3);
  }
LABEL_17:
  KeReleaseSemaphore(&Semaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
}
