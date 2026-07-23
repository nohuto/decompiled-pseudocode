/*
 * XREFs of sub_1406C7D58 @ 0x1406C7D58
 * Callers:
 *     sub_140779A08 @ 0x140779A08 (sub_140779A08.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1406C7EA0 @ 0x1406C7EA0 (sub_1406C7EA0.c)
 *     sub_14094A4EC @ 0x14094A4EC (sub_14094A4EC.c)
 */

void __fastcall sub_1406C7D58(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // esi
  char v4; // bp
  int v7; // ecx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  v10 = 0LL;
  v4 = 0;
  if ( (v2 & 2) != 0 )
    sub_14094A4EC(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), *(unsigned int *)(*(_QWORD *)(a2 + 8) + 28LL));
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  v7 = *(_DWORD *)(a1 + 228);
  if ( (v7 & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v3 = sub_1406C7EA0(a2, &v10);
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 228) |= 2u;
    }
    else
    {
      v8 = *(_QWORD **)(a1 + 216);
      if ( *v8 != a1 + 208 )
        __fastfail(3u);
      v9 = v10;
      *v10 = a1 + 208;
      v9[1] = v8;
      *v8 = v9;
      *(_QWORD *)(a1 + 216) = v9;
    }
    v7 = *(_DWORD *)(a1 + 228);
  }
  if ( (v7 & 1) == 0 && (*(_QWORD *)(a1 + 208) != a1 + 208 || v3 < 0) )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 228) = v7 | 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
  if ( v4 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
