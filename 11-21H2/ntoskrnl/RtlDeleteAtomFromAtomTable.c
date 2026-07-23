/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x1406AB320
 * Callers:
 *     NtDeleteAtom @ 0x1406AB2D0 (NtDeleteAtom.c)
 * Callees:
 *     sub_140232FC4 @ 0x140232FC4 (sub_140232FC4.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F349C @ 0x1402F349C (sub_1402F349C.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407A0EA0 @ 0x1407A0EA0 (sub_1407A0EA0.c)
 *     sub_1407A1A30 @ 0x1407A1A30 (sub_1407A1A30.c)
 */

NTSTATUS __cdecl RtlDeleteAtomFromAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

  if ( !(unsigned __int8)sub_1407A0EA0() )
    return -1073741811;
  v4 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
  }
  else
  {
    v5 = sub_1407A1A30(AtomTableHandle, Atom & 0x3FFF);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v7 = sub_1402F349C((__int64)AtomTableHandle, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*((_BYTE *)v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            sub_140232FC4(v6, v7, (__int64)AtomTableHandle);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)AtomTableHandle + 8);
  sub_1402AFC00((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v4;
}
