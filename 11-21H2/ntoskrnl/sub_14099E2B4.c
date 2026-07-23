/*
 * XREFs of sub_14099E2B4 @ 0x14099E2B4
 * Callers:
 *     sub_14099F5D8 @ 0x14099F5D8 (sub_14099F5D8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405DD5B0 @ 0x1405DD5B0 (sub_1405DD5B0.c)
 *     sub_14099E6B8 @ 0x14099E6B8 (sub_14099E6B8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099E2B4(__int64 a1, char a2, __int64 *a3)
{
  __int64 v6; // rdi
  int v7; // esi
  PVOID *v8; // rax
  __int64 v9; // rbx
  __int64 Pool2; // rax
  __int64 *v11; // rax
  char v12; // al

  *a3 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1CB48, 0LL);
  v6 = *(_QWORD *)(a1 + 776);
  if ( v6 || (v6 = sub_14099E6B8(a1)) != 0 )
  {
    v7 = *(_DWORD *)(v6 + 148);
    if ( v7 == -1 )
    {
      *(_DWORD *)(v6 + 148) = dword_140C1CD84++;
      v7 = *(_DWORD *)(v6 + 148);
    }
    v8 = (PVOID *)qword_140C1CB60;
    if ( qword_140C1CB60 == &qword_140C1CB60 )
      goto LABEL_9;
    do
    {
      v9 = (__int64)v8;
      if ( *((_DWORD *)v8 + 8) == v7 )
        break;
      v8 = (PVOID *)*v8;
      v9 = 0LL;
    }
    while ( v8 != &qword_140C1CB60 );
    if ( !v9 )
    {
LABEL_9:
      Pool2 = ExAllocatePool2(256LL, 232LL, 1734960208LL);
      v9 = Pool2;
      if ( !Pool2 )
        goto LABEL_14;
      *(_DWORD *)(Pool2 + 32) = v7;
      *(_QWORD *)(Pool2 + 16) = v6;
      v11 = (__int64 *)qword_140C1CB68;
      if ( *(PVOID **)qword_140C1CB68 != &qword_140C1CB60 )
        __fastfail(3u);
      *(_QWORD *)v9 = &qword_140C1CB60;
      *(_QWORD *)(v9 + 8) = v11;
      *v11 = v9;
      qword_140C1CB68 = v9;
    }
    *(_QWORD *)(v9 + 48) = sub_1405DD5B0(*(_QWORD *)(a1 + 80));
    *(_DWORD *)(v9 + 36) = dword_140C1CD88;
    v12 = a2 ^ *(_DWORD *)(v9 + 40);
    *a3 = v9;
    *(_DWORD *)(v9 + 40) ^= v12 & 0xF;
    *(_DWORD *)(v6 + 152) |= 0x60000u;
  }
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C1CB48);
  return sub_1402AFC00((ULONG_PTR)&qword_140C1CB48);
}
