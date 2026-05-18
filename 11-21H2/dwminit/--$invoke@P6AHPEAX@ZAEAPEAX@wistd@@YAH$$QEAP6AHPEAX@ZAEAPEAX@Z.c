/*
 * XREFs of ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x180003FFC
 * Callers:
 *     ??1CKstBase@@QEAA@XZ @ 0x180008788 (--1CKstBase@@QEAA@XZ.c)
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18000912C (-Start@CKstBase@@AEAAJPEBG@Z.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180009258 (-Stop@CKstBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::invoke<int (*)(void *),void * &>(__int64 (__fastcall **a1)(_QWORD), _QWORD *a2)
{
  return (*a1)(*a2);
}
