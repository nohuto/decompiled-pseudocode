/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x14024DD20
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14029E440 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiDetermineModifiedPageListHead @ 0x14024E640 (MiDetermineModifiedPageListHead.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiAcquirePageListLock @ 0x1403277D0 (MiAcquirePageListLock.c)
 *     MiReleasePageListLock @ 0x140338D00 (MiReleasePageListLock.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  void *result; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  signed __int32 v7[8]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v8[112]; // [rsp+20h] [rbp-88h] BYREF

  result = memset(v8, 0, 0x68uLL);
  if ( !*(_WORD *)(a1 + 32) )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = (v3 >> 43) & 0x3FF;
    v5 = *(_QWORD *)(qword_140C51F48 + 8 * v4);
    v6 = *(_QWORD *)(v5 + 8LL * (*(_BYTE *)(a1 + 34) & 7) + 6632);
    if ( (*(_BYTE *)(a1 + 34) & 7) == 2 )
    {
      if ( (v3 & 0x20000000000000LL) != 0 )
      {
        _InterlockedOr(v7, 0);
        return (void *)MiSetPfnTbFlushStamp(a1, (unsigned int)KiTbFlushTimeStamp, 1LL);
      }
      v6 = v5 + 88LL * (unsigned int)MiGetPfnPriority(a1) + 2880;
    }
    else if ( *(_DWORD *)(v6 + 8) == 3 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
        v6 = 88LL * *(unsigned int *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 8)
           + v5
           + 5120;
      else
        v6 = MiDetermineModifiedPageListHead(a1, *(_QWORD *)(qword_140C51F48 + 8 * v4));
    }
    ((void (__fastcall *)(__int64, __int64, __int64, _BYTE *))MiAcquirePageListLock)(v6, a1, 1LL, v8);
    _InterlockedOr(v7, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
    return (void *)MiReleasePageListLock(v6, v8);
  }
  return result;
}
