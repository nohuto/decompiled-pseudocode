/*
 * XREFs of sub_1407B3B60 @ 0x1407B3B60
 * Callers:
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 *     sub_14023B484 @ 0x14023B484 (sub_14023B484.c)
 *     sub_140241C40 @ 0x140241C40 (sub_140241C40.c)
 *     sub_140244198 @ 0x140244198 (sub_140244198.c)
 *     sub_14024429C @ 0x14024429C (sub_14024429C.c)
 *     sub_14025E12C @ 0x14025E12C (sub_14025E12C.c)
 *     sub_1402EF324 @ 0x1402EF324 (sub_1402EF324.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_14066A21C @ 0x14066A21C (sub_14066A21C.c)
 *     sub_14066A57C @ 0x14066A57C (sub_14066A57C.c)
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140695CF8 @ 0x140695CF8 (sub_140695CF8.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall sub_1407B3B60(__int64 a1, ULONG a2, _DWORD *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdi
  unsigned __int64 result; // rax
  void *v13; // r12
  struct _KTHREAD *v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    v11 = *((_QWORD *)CurrentThread + 23);
  else
    v11 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1376) & 8) == 0 )
    goto LABEL_4;
  v15 = *(_QWORD *)(a1 + 544);
  v14 = KeGetCurrentThread();
  --*((_WORD *)v14 + 242);
  ExAcquirePushLockSharedEx(a1 + 1360, 0LL);
  v13 = 0LL;
  if ( (*(_DWORD *)(a1 + 1376) & 8) != 0 )
  {
    v13 = (void *)(*(_QWORD *)(a1 + 1272) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v13, a2);
    *a5 = *(_DWORD *)(a1 + 1272) & 3;
    *a4 = (*(_BYTE *)(a1 + 1272) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v15 + 2170);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1360), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1360));
  sub_1402AFC00(a1 + 1360);
  sub_1402AC800((__int64)v14);
  if ( v13 )
  {
    *a3 = 2;
    return (unsigned __int64)v13;
  }
  else
  {
LABEL_4:
    result = sub_140347920(v11, a2);
    *a3 = 1;
    *a4 = 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v11 + 2170);
  }
  return result;
}
