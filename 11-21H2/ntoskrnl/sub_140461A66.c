/*
 * XREFs of sub_140461A66 @ 0x140461A66
 * Callers:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140281480 @ 0x140281480 (sub_140281480.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1402E4D70 @ 0x1402E4D70 (sub_1402E4D70.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_14030E280 @ 0x14030E280 (sub_14030E280.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_14030FEC0 @ 0x14030FEC0 (sub_14030FEC0.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     sub_140332110 @ 0x140332110 (sub_140332110.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 *     sub_140350B40 @ 0x140350B40 (sub_140350B40.c)
 *     sub_14036E550 @ 0x14036E550 (sub_14036E550.c)
 *     sub_14036E5F0 @ 0x14036E5F0 (sub_14036E5F0.c)
 * Callees:
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_140632C48 @ 0x140632C48 (sub_140632C48.c)
 */

__int64 __fastcall sub_140461A66(int *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // ebp
  int v6; // r14d
  char v7; // di
  unsigned __int64 v8; // rax
  int v9; // esi
  __int64 result; // rax
  int v11; // r9d
  unsigned __int64 v12; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  LOBYTE(a3) = a2;
  v6 = (int)a1;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    v7 = 1;
    v8 = __rdtsc();
    v9 = *((_DWORD *)CurrentPrcb + 8272);
    v5 = v8;
  }
  else
  {
    v7 = 0;
    v9 = 0;
  }
  ++*((_DWORD *)CurrentPrcb + 8752);
  result = sub_14030F870(a1, a2, a3, a4);
  v11 = result;
  if ( (_DWORD)result )
  {
    ++*((_DWORD *)CurrentPrcb + 8753);
    *((_DWORD *)CurrentPrcb + 8754) += result;
  }
  if ( v7 )
  {
    v12 = __rdtsc();
    return sub_140632C48(v6, v12, (int)v12 - v5, v11, v9, 3);
  }
  return result;
}
