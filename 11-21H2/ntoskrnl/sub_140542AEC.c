/*
 * XREFs of sub_140542AEC @ 0x140542AEC
 * Callers:
 *     sub_140256F58 @ 0x140256F58 (sub_140256F58.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14054268C @ 0x14054268C (sub_14054268C.c)
 *     FsRtlCheckUpperOplock @ 0x14092E2F0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 */

void __fastcall sub_140542AEC(_QWORD *a1, int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  char v10; // cl
  __int64 v11; // rax
  int v12; // eax

  v3 = a1[2];
  ObfDereferenceObjectWithTag(*(PVOID *)(v3 + 48), 0x746C6644u);
  *((_BYTE *)a1 - 99) = KeAcquireQueuedSpinLock(7uLL);
  v7 = 0LL;
  _InterlockedExchange64(a1 - 8, 0LL);
  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)a1 - 99));
  v8 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v9 = (_QWORD *)a1[1], (_QWORD *)*v9 != a1) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = *((_BYTE *)a1 - 100);
  if ( *(_DWORD *)(v3 + 24) == 590400 )
  {
    if ( v10 )
    {
      a2 = -1073741536;
    }
    else
    {
      v11 = *(a1 - 18);
      *(_QWORD *)(v11 + 12) = 0LL;
      *(_DWORD *)(v11 + 20) = 0;
      v7 = 24LL;
      *(_DWORD *)v11 = 1572865;
      *(_DWORD *)(v11 + 4) = 1;
      *(_DWORD *)(v11 + 8) = (a3 >> 12) & 7;
    }
  }
  else
  {
    v12 = -1073741536;
    v7 = 8LL;
    if ( !v10 )
      v12 = a2;
    a2 = v12;
  }
  *(a1 - 14) = v7;
  *((_DWORD *)a1 - 30) = a2;
  IofCompleteRequest((PIRP)(a1 - 21), 1);
}
