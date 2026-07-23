/*
 * XREFs of sub_140597ED0 @ 0x140597ED0
 * Callers:
 *     sub_1405980C8 @ 0x1405980C8 (sub_1405980C8.c)
 * Callees:
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287A8C @ 0x140287A8C (sub_140287A8C.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 *     sub_140598054 @ 0x140598054 (sub_140598054.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG __fastcall sub_140597ED0(__int64 a1, __int64 a2)
{
  struct _MDL *v2; // rbx
  CSHORT MdlFlags; // ax
  __int64 *v6; // rax
  LONG result; // eax
  __int64 v8; // rcx

  v2 = *(struct _MDL **)(a1 + 72);
  MdlFlags = v2->MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
  {
    sub_140584530(*(_QWORD *)(a1 + 72));
    MdlFlags = v2->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v2->MappedSystemVa, v2);
  sub_140334830(v2, (int *)a2);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v6 = (__int64 *)sub_140287A8C(*(_QWORD *)(a1 + 32), 0);
  if ( v6 )
    sub_1402879F8(v6);
  if ( v2 != (struct _MDL *)(a1 + 80) )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v8 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return sub_140598054((PVOID)v8);
  }
  return result;
}
