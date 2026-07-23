/*
 * XREFs of sub_1407B81B0 @ 0x1407B81B0
 * Callers:
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_1406BED60 @ 0x1406BED60 (sub_1406BED60.c)
 *     sub_140700200 @ 0x140700200 (sub_140700200.c)
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_1407B6430 @ 0x1407B6430 (sub_1407B6430.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140302C20 @ 0x140302C20 (sub_140302C20.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_1407B81B0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // r12
  __int64 v10; // r13
  _QWORD *i; // rsi
  __int64 v12; // rcx
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h]
  signed __int64 *BugCheckParameter2; // [rsp+88h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v15 = 0LL;
  BugCheckParameter2 = (signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v6 = *(_DWORD *)(a1 + 892);
  v7 = *(_DWORD *)(a1 + 896);
  v8 = *(_DWORD *)(a1 + 900);
  v9 = *(_QWORD *)(a1 + 1000);
  v10 = *(_QWORD *)(a1 + 1008);
  a2[3] = *(_QWORD *)(a1 + 864);
  a2[4] = *(_QWORD *)(a1 + 872);
  a2[5] = *(_QWORD *)(a1 + 1552);
  a2[6] = *(_QWORD *)(a1 + 1560);
  a2[7] = *(_QWORD *)(a1 + 1568);
  a2[8] = *(_QWORD *)(a1 + 1576);
  a2[9] = *(_QWORD *)(a1 + 1584);
  a2[10] = *(_QWORD *)(a1 + 1592);
  for ( i = *(_QWORD **)(a1 + 1504); i != (_QWORD *)(a1 + 1504); v10 += *((_QWORD *)&v15 + 1) )
  {
    v6 += *((_DWORD *)i - 171);
    v7 += *((_DWORD *)i - 151);
    sub_140302C20((__int64)(i - 167), &v14, v4, v5);
    a2[3] += *(i - 158);
    a2[4] += *((unsigned int *)i - 249);
    a2[5] += *(i - 55);
    a2[6] += *(i - 54);
    a2[7] += *(i - 53);
    a2[8] += *(i - 52);
    a2[9] += *(i - 51);
    a2[10] += *(i - 50);
    i = (_QWORD *)*i;
    v8 += DWORD1(v14);
    v9 += v15;
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
  sub_1402AC800((__int64)CurrentThread);
  v12 = DesiredTime;
  *a2 = DesiredTime * (unsigned __int64)v6;
  a2[1] = v12 * v7;
  a2[2] = v12 * v8;
  result = v9 * (unsigned int)v12;
  a2[11] = result;
  a2[12] = v10 * v12;
  return result;
}
