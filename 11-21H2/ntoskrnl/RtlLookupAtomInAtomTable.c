/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x1407A0C90
 * Callers:
 *     NtFindAtom @ 0x1406F68C0 (NtFindAtom.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlGetIntegerAtom @ 0x1407A0DF0 (RtlGetIntegerAtom.c)
 *     sub_1407A0EA0 @ 0x1407A0EA0 (sub_1407A0EA0.c)
 *     sub_1407A0EE0 @ 0x1407A0EE0 (sub_1407A0EE0.c)
 *     sub_1407A1A30 @ 0x1407A1A30 (sub_1407A1A30.c)
 */

NTSTATUS __cdecl RtlLookupAtomInAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  USHORT v8; // ax
  NTSTATUS v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF
  USHORT IntegerAtom; // [rsp+98h] [rbp+20h] BYREF

  v11 = 0LL;
  IntegerAtom = 0;
  if ( !(unsigned __int8)sub_1407A0EA0() )
    return -1073741811;
  if ( RtlGetIntegerAtom(AtomName, &IntegerAtom) )
  {
    v8 = IntegerAtom;
    if ( IntegerAtom >= 0xC000u )
    {
      v8 = 0;
      IntegerAtom = 0;
      v10 = -1073741811;
    }
    else
    {
      v10 = 0;
    }
    if ( !Atom )
      goto LABEL_18;
    goto LABEL_9;
  }
  if ( !*AtomName )
  {
    v10 = -1073741773;
    goto LABEL_18;
  }
  LOBYTE(v6) = 1;
  v10 = sub_1407A0EE0(AtomTableHandle, AtomName, v6, 0LL, 0LL, v12, &v11);
  if ( v10 >= 0 )
  {
    v7 = v11;
    if ( !v11 )
    {
      v10 = -1073741772;
      goto LABEL_18;
    }
    if ( !sub_1407A1A30(AtomTableHandle, *(unsigned __int16 *)(v11 + 8)) )
    {
      v10 = -1073741816;
      goto LABEL_18;
    }
    v10 = 0;
    if ( Atom )
    {
      v8 = *(_WORD *)(v7 + 10);
LABEL_9:
      *Atom = v8;
    }
  }
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)AtomTableHandle + 8);
  sub_1402AFC00((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v10;
}
