/*
 * XREFs of sub_140967848 @ 0x140967848
 * Callers:
 *     sub_1406D56D0 @ 0x1406D56D0 (sub_1406D56D0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140967848()
{
  unsigned int v0; // ebx
  void (__fastcall **v1)(__int64, int); // rcx
  void (__fastcall *v2)(__int64, int); // rax
  PVOID *v4; // rdx

  v0 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A080, 0LL);
  v1 = (void (__fastcall **)(__int64, int))off_140C08E98;
  if ( off_140C08E98 != &off_140C08E98 )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( v1[2] == sub_14062F900 )
        break;
      v1 = (void (__fastcall **)(__int64, int))*v1;
      if ( (char *)v2 == (char *)&off_140C08E98 )
        goto LABEL_4;
    }
    if ( *((void (__fastcall ***)(__int64, int))v2 + 1) != v1 || (v4 = (PVOID *)v1[1], *v4 != v1) )
      __fastfail(3u);
    *v4 = v2;
    *((_QWORD *)v2 + 1) = v4;
    ExFreePoolWithTag(v1, 0);
    v0 = 0;
  }
LABEL_4:
  byte_140D01161 = off_140C08E98 != &off_140C08E98;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A080, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A080);
  sub_1402AFC00((ULONG_PTR)&qword_140C2A080);
  return v0;
}
