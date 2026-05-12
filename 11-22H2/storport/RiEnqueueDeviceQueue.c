/*
 * XREFs of RiEnqueueDeviceQueue @ 0x1C0007158
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C0006270 (RaidInsertDeviceQueue.c)
 * Callees:
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00207F4 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 __fastcall RiEnqueueDeviceQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 *v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rcx

  v3 = a2;
  if ( (*(_BYTE *)(a2 + 22) & 6) != 0 )
  {
    result = a1 + 144;
    v6 = *(__int64 **)(a1 + 152);
    if ( *v6 != result )
      goto LABEL_14;
    *(_QWORD *)a2 = result;
    *(_QWORD *)(a2 + 8) = v6;
    *v6 = a2;
    *(_QWORD *)(result + 8) = a2;
    ++*(_DWORD *)(a1 + 16);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 0x100000000uLL);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), (PSLIST_ENTRY)((a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_BYTE *)(v3 + 20) |= 2u;
    if ( *(_BYTE *)(v3 + 22) )
      ++*(_DWORD *)(a1 + 32);
    result = *(_QWORD *)(a1 + 88) / 0x100000000LL;
    a2 = *(_QWORD *)(a1 + 88) % 0x100000000LL;
    if ( (int)result > *(_DWORD *)(a1 + 180) )
      *(_DWORD *)(a1 + 180) = result;
  }
  if ( (*(_BYTE *)(v3 + 22) & 8) != 0 )
    ++*(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(v3 + 22) & 0x20) != 0 )
  {
    result = RaidGetQosEntryForDeviceEntry(v3, a2, a3);
    v7 = a1 + 160;
    v8 = *(__int64 **)(v7 + 8);
    if ( *v8 == v7 )
    {
      *(_QWORD *)result = v7;
      *(_QWORD *)(result + 8) = v8;
      *v8 = result;
      *(_QWORD *)(v7 + 8) = result;
      return result;
    }
LABEL_14:
    __fastfail(3u);
  }
  return result;
}
