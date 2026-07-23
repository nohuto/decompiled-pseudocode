/*
 * XREFs of sub_1409E54B0 @ 0x1409E54B0
 * Callers:
 *     sub_1406D435C @ 0x1406D435C (sub_1406D435C.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_14024F548 @ 0x14024F548 (sub_14024F548.c)
 *     sub_14024F59C @ 0x14024F59C (sub_14024F59C.c)
 *     sub_14024F664 @ 0x14024F664 (sub_14024F664.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E7E90 @ 0x1406E7E90 (sub_1406E7E90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409E54B0(__int64 a1, __int64 a2)
{
  _DWORD *Pool2; // r14
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r11d
  _QWORD *v8; // rsi
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbp
  _BYTE *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  _DWORD *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int i; // esi
  unsigned int *v23; // rax
  unsigned int v24; // r11d
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *v27; // [rsp+78h] [rbp+20h]

  v25 = 0;
  Pool2 = 0LL;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140C0916C < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C09168 )
      dword_140C09168 = sub_14024F664(off_140C09160, &v26);
    EtwTelemetryCoverageReport((__int64 *)&off_140C09160);
  }
  if ( (unsigned int)sub_14024F59C((__int64 *)a2, &v25) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
    qword_140C547C0 = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v27 = sub_14024F548(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *v27 == v7 )
    {
      sub_1406E7E90((int **)a1);
      Pool2 = (_DWORD *)ExAllocatePool2(
                          256LL,
                          (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                          1450669125LL);
      if ( Pool2 )
      {
        v8 = *(_QWORD **)(a1 + 48);
        if ( v8 != (_QWORD *)(a1 + 48) )
        {
          v9 = v25;
          while ( 1 )
          {
            v10 = v8[3];
            v11 = v8 + 5;
            if ( (unsigned __int64)(v8 + 5) < v10 )
              break;
LABEL_18:
            v8 = (_QWORD *)*v8;
            if ( v8 == (_QWORD *)(a1 + 48) )
              goto LABEL_19;
          }
          v12 = v25;
          while ( 1 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v11[v13] );
            if ( v13 == v12 )
            {
              if ( !strcmp(v11, *(const char **)a2) )
              {
                memmove(v11, &v11[v25 + 1], v10 - (_QWORD)&v11[v25 + 1]);
                v8[3] -= v9 + 1;
                v15 = 0;
                v16 = 0;
                v8[4] = v8[3];
                ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
                *v27 = 0;
                --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
                v17 = *(_DWORD **)(a1 + 16);
                if ( v17[1] )
                {
                  v18 = *(_DWORD **)(a1 + 16);
                  do
                  {
                    v19 = v18[v16 + 13];
                    if ( v19 )
                    {
                      v20 = v15++;
                      Pool2[v20] = v19;
                      v17 = *(_DWORD **)(a1 + 16);
                      v18 = v17;
                      if ( v15 >= v17[8] )
                        break;
                    }
                    ++v16;
                    v17 = v18;
                  }
                  while ( v16 < v18[1] );
                }
                memset(v17 + 13, 0, 4LL * (unsigned int)v17[1]);
                v21 = *(_QWORD *)(a1 + 16);
                for ( i = 0; i < *(_DWORD *)(v21 + 32); v21 = *(_QWORD *)(a1 + 16) )
                {
                  v23 = sub_14024F548(*(unsigned int **)(a1 + 16), Pool2[i++]);
                  *v23 = v24;
                }
                v4 = 1;
                *(_DWORD *)(a2 + 12) = *(_DWORD *)(v21 + 24);
                break;
              }
              v12 = v25;
            }
            v11 += v13 + 1;
            if ( (unsigned __int64)v11 >= v10 )
              goto LABEL_18;
          }
        }
      }
    }
  }
LABEL_19:
  if ( (struct _KTHREAD *)qword_140C547C0 == KeGetCurrentThread() )
  {
    qword_140C547C0 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C15D90);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v4;
}
