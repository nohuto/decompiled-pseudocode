/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1406C7C90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F349C @ 0x1402F349C (sub_1402F349C.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407A0EA0 @ 0x1407A0EA0 (sub_1407A0EA0.c)
 *     sub_1407A1A30 @ 0x1407A1A30 (sub_1407A1A30.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  int v4; // eax
  __int64 v5; // rax
  _QWORD *v6; // rax
  NTSTATUS v8; // [rsp+20h] [rbp-28h]

  if ( !(unsigned __int8)sub_1407A0EA0() )
    return -1073741811;
  v4 = -1073741816;
  v8 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
    v8 = v4;
  }
  else
  {
    v5 = sub_1407A1A30(AtomTableHandle, Atom & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v6 = sub_1402F349C((__int64)AtomTableHandle, v5, 0);
        if ( v6 )
        {
          v8 = 0;
          *((_WORD *)v6 + 11) |= 1u;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)AtomTableHandle + 8);
  sub_1402AFC00((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v8;
}
