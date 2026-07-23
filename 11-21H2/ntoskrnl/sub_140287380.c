/*
 * XREFs of sub_140287380 @ 0x140287380
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_140287428 @ 0x140287428 (sub_140287428.c)
 */

__int64 __fastcall sub_140287380(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  __int64 v3; // r9
  ULONG_PTR *v4; // rdx

  if ( (unsigned int)sub_140287428(a1) )
    return 1LL;
  if ( v1 > 1 )
    v4 = v2 == 2
       ? *(ULONG_PTR **)(qword_140C51F48
                       + 8LL
                       * *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 366LL))
       : &StartContext;
  else
    v4 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
  if ( v4 == *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v3 + 62) & 1) == 0 || v2 == 1 || v2 == 4 )
    return 2LL;
  ++dword_140C52950;
  return 0LL;
}
