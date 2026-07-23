/*
 * XREFs of sub_1405A605C @ 0x1405A605C
 * Callers:
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1405A6204 @ 0x1405A6204 (sub_1405A6204.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405A605C(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, _QWORD *P)
{
  struct _MDL *v10; // rax
  struct _MDL *v11; // rbx
  _QWORD *MappedSystemVa; // rsi
  int v13; // edi

  *P = 0LL;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v10 = (struct _MDL *)sub_1402828F0(
                         64,
                         8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                         0x20206D4Du);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  v10->Next = 0LL;
  v10->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
  v10->MdlFlags = 0;
  v10->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v10->ByteOffset = a3 & 0xFFF;
  v10->ByteCount = a4;
  sub_14029C5B0(v10, *((_BYTE *)KeGetCurrentThread() + 562) != 0, 1);
  if ( (v11->MdlFlags & 5) != 0 )
    MappedSystemVa = v11->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( MappedSystemVa )
  {
    v13 = sub_1405A6204(a1 + 1664, a2 | 0x80000000, MappedSystemVa, a4);
    if ( v13 >= 0 )
      *P = *MappedSystemVa;
  }
  else
  {
    v13 = -1073741670;
  }
  MmUnlockPages(v11);
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)v13;
}
