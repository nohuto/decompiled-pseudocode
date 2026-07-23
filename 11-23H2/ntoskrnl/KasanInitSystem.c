/*
 * XREFs of KasanInitSystem @ 0x1403B6300
 * Callers:
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KasanInitSystem(__int64 a1)
{
  __int64 result; // rax

  KasanDriverUnloadInfosLock = 0LL;
  result = *(_QWORD *)(a1 + 240);
  KasaniEnabled = (*(_DWORD *)(result + 3856) & 1) != 0;
  return result;
}
