/*
 * XREFs of RaidBusEnumeratorProcessAtaInformation @ 0x1C003C9E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidAtaIdFormatString @ 0x1C003C88C (RaidAtaIdFormatString.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessAtaInformation(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, _DWORD *a5)
{
  unsigned int v8; // eax
  char *Pool; // rax
  __int64 v10; // rbx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_DWORD *)(a2 + 60);
  else
    v8 = *(_DWORD *)(a2 + 16);
  if ( v8 >= 0x23C )
  {
    Pool = (char *)RaidAllocatePool(64LL, 50LL, 842096978LL, *(_QWORD *)(*a1 + 8LL));
    *(_QWORD *)(a3 + 72) = Pool;
    if ( Pool )
    {
      v10 = a1[5];
      RaidAtaIdFormatString(Pool, v10 + 114, 0x28u);
      RaidAtaIdFormatString((char *)(*(_QWORD *)(a3 + 72) + 41LL), v10 + 106, 8u);
      if ( *(char *)(v10 + 198) < 0 )
        *(_WORD *)(a3 + 56) |= 1u;
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    *a4 = 1;
    *a5 = 572;
    return 3221225507LL;
  }
}
