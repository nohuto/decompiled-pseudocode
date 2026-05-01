/*
 * XREFs of ?Reset@CPinnedListEnum@@UEAAJXZ @ 0x18075AF40
 * Callers:
 *     <none>
 * Callees:
 *     ??$SafeRelease@UIStream@@@@YAXPEAPEAUIStream@@@Z @ 0x180749D68 (--$SafeRelease@UIStream@@@@YAXPEAPEAUIStream@@@Z.c)
 */

__int64 __fastcall CPinnedListEnum::Reset(CPinnedListEnum *this)
{
  *((_DWORD *)this + 6) = 0;
  SafeRelease<IStream>((__int64 *)this + 4);
  return 0LL;
}
