/*
 * XREFs of sub_14038D400 @ 0x14038D400
 * Callers:
 *     sub_1403B60E0 @ 0x1403B60E0 (sub_1403B60E0.c)
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     MmUnlockPreChargedPagedPool @ 0x140800560 (MmUnlockPreChargedPagedPool.c)
 */

__int64 __fastcall sub_14038D400(__int64 a1, __int64 a2)
{
  PVOID v2; // rcx
  unsigned int v3; // ebx

  v2 = qword_140C4ABD8;
  v3 = 0;
  if ( qword_140C4ABD8 && byte_140C4ABD0 )
    MmUnlockPreChargedPagedPool(qword_140C4ABD8, (unsigned int)Length);
  if ( qword_140C4ABC8 )
    return (unsigned int)sub_14042A5E0(v2, a2);
  return v3;
}
