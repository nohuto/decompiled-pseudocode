/*
 * XREFs of IopConstructInMemoryDumpHeader @ 0x1405524DC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403B06AC (IopInitializeOfflineCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140551100 (IoUpdateDumpPhysicalRanges.c)
 * Callees:
 *     IoFillDumpHeader @ 0x14054FC68 (IoFillDumpHeader.c)
 */

__int64 IopConstructInMemoryDumpHeader()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(InMemData, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_140C6ACF8 = 0;
    if ( dword_140C6ACC4
      && (result = qword_140C6ACE0 & 1, (v1 = *(_DWORD **)&InMemData[2 * result + 2]) != 0LL)
      && (v2 = *(_QWORD *)&InMemData[2 * (((_BYTE)qword_140C6ACE0 - 1) & 1) + 2]) != 0 )
    {
      IoFillDumpHeader((_DWORD *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_140C6ACE8;
      *(_QWORD *)(v2 + 40) = PsInitialSystemProcess->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      LODWORD(qword_140C6ACE0) = qword_140C6ACE0 + 1;
    }
    else
    {
      dword_140C6ACF8 = -1073741823;
    }
    _InterlockedExchange(InMemData, 0);
  }
  return result;
}
