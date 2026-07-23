/*
 * XREFs of sub_1406030C8 @ 0x1406030C8
 * Callers:
 *     sub_140603390 @ 0x140603390 (sub_140603390.c)
 * Callees:
 *     sub_140603264 @ 0x140603264 (sub_140603264.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1406030C8()
{
  __int64 result; // rax
  REGHANDLE v1; // rcx

  result = (unsigned int)dword_140C1A8D0;
  if ( dword_140C1A8D0 )
  {
    v1 = qword_140C090E0;
    qword_140C090E0 = 0LL;
    dword_140C090C0 = 0;
    EtwUnregister(v1);
    if ( qword_140D049B0 )
    {
      ExFreePoolWithTag(qword_140D049B0, 0);
      qword_140D049B0 = 0LL;
    }
    _InterlockedExchange(&dword_140C1A8D0, 0);
    return sub_140603264();
  }
  return result;
}
