/*
 * XREFs of sub_140542834 @ 0x140542834
 * Callers:
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140376950 @ 0x140376950 (sub_140376950.c)
 */

__int64 __fastcall sub_140542834(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        _QWORD **a7,
        _BYTE *a8,
        _BYTE *a9,
        unsigned int a10)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ecx
  char v17; // si
  _QWORD **v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v26; // al
  bool v27; // zf
  __int64 v28; // [rsp+60h] [rbp+20h] BYREF

  v28 = a1;
  v13 = a1;
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 48) + 73LL) && (a4 & 0x2000) != 0 )
  {
    v14 = *(_QWORD *)(a2 + 24);
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    v15 = *(_DWORD *)(v28 + 144);
    *(_DWORD *)(v14 + 12) |= 1u;
    *(_DWORD *)(v14 + 8) = (a4 >> 12) & 5;
    *(_DWORD *)(v14 + 4) = (v15 >> 12) & 7;
    *(_QWORD *)(a2 + 56) = 24LL;
    *(_DWORD *)(a2 + 48) = -2147483602;
    IofCompleteRequest((PIRP)a2, 1);
    return 2147483694LL;
  }
  v17 = a6;
  if ( a6 )
  {
    v18 = a7;
    (*a7)[2] = *(_QWORD *)(a1 + 8);
    v19 = *v18;
    v20 = (_QWORD *)(v28 + 104);
    v21 = *(_QWORD *)(v28 + 104);
    if ( *(_QWORD *)(v21 + 8) != v28 + 104 )
      __fastfail(3u);
    *v19 = v21;
    v19[1] = v20;
    *(_QWORD *)(v21 + 8) = v19;
    *v20 = v19;
    *v18 = 0LL;
    *(_QWORD *)(v28 + 8) = 0LL;
    v13 = v28;
    v22 = a4 & 0x3010;
  }
  else
  {
    *a8 = 1;
    if ( !a4 )
    {
      *a9 = 1;
      goto LABEL_9;
    }
    v23 = a4 & 0x3010;
    v22 = v23;
    if ( (a4 & 0x3010) != 0 && (a4 & 0x4040) == 0 )
    {
      *(_QWORD *)(v13 + 8) = 0LL;
      v13 = v28;
LABEL_15:
      if ( (a4 & 0x4040) == 0 && v23 != 0 )
      {
        v24 = sub_1402A2490(&v28, a3, a2, a4, a5, v17, 1, a10);
      }
      else
      {
        *(_QWORD *)v13 = a2;
        v24 = 259;
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        *(_QWORD *)(a2 + 56) = v28;
        *(_QWORD *)(v28 + 16) = *((_QWORD *)KeGetCurrentThread() + 23);
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(v28 + 24) = CurrentThread;
        ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
        *(_BYTE *)(v28 + 32) = 0;
        if ( v17 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)(a3 + 48), 0x746C6644u);
          *(_QWORD *)(v28 + 8) = *(_QWORD *)(a3 + 48);
        }
        *(_DWORD *)(v28 + 144) = a4 | *(_DWORD *)(v28 + 144) & 0x20 | 0x40;
        v26 = KeAcquireQueuedSpinLock(7uLL);
        v27 = *(_BYTE *)(a2 + 68) == 0;
        *(_BYTE *)(a2 + 69) = v26;
        if ( v27 )
        {
          _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)sub_140376930);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
        }
        else
        {
          sub_140376950(a2, 1, v17 == 0);
        }
      }
      goto LABEL_22;
    }
  }
  v23 = v22;
  if ( a4 )
    goto LABEL_15;
LABEL_9:
  v24 = 0;
  *(_DWORD *)(v13 + 144) = *(_DWORD *)(v13 + 144) & 0x20 | 1;
  *(_DWORD *)(a2 + 48) = 0;
  IofCompleteRequest((PIRP)a2, 1);
LABEL_22:
  if ( v17 )
    *(_DWORD *)(v28 + 144) |= 0x1000000u;
  return v24;
}
