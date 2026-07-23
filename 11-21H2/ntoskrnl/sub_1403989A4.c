/*
 * XREFs of sub_1403989A4 @ 0x1403989A4
 * Callers:
 *     sub_1403B60E0 @ 0x1403B60E0 (sub_1403B60E0.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     MmLockPreChargedPagedPool @ 0x140808190 (MmLockPreChargedPagedPool.c)
 */

__int64 __fastcall sub_1403989A4(__int64 a1, __int64 a2)
{
  PVOID v2; // rcx
  unsigned int v3; // ebx

  v2 = qword_140C4ABD8;
  v3 = 0;
  if ( qword_140C4ABD8 && byte_140C4ABD0 )
    MmLockPreChargedPagedPool(qword_140C4ABD8, (unsigned int)Length);
  if ( qword_140C4AB98 )
  {
    LOBYTE(v2) = 1;
    LOBYTE(a2) = qword_140C4ABD8 == 0LL;
    return (unsigned int)sub_14042A5E0(v2, a2);
  }
  return v3;
}
