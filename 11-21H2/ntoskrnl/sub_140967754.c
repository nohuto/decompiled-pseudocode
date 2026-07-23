/*
 * XREFs of sub_140967754 @ 0x140967754
 * Callers:
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140967754()
{
  __int64 Pool2; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  void (__fastcall **i)(__int64, int); // rax
  _QWORD *v5; // rax

  Pool2 = ExAllocatePool2(256LL, 24LL, 1665952833LL);
  v1 = 0;
  v2 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = sub_14062F900;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A080, 0LL);
  for ( i = (void (__fastcall **)(__int64, int))off_140C08E98;
        i != (void (__fastcall **)(__int64, int))&off_140C08E98;
        i = (void (__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == sub_14062F900 )
    {
      ExFreePoolWithTag(v2, 0);
      v1 = -1073740008;
      goto LABEL_11;
    }
  }
  v5 = off_140C08EA0;
  if ( *off_140C08EA0 != (_UNKNOWN *)&off_140C08E98 )
    __fastfail(3u);
  *v2 = &off_140C08E98;
  v2[1] = v5;
  *v5 = v2;
  off_140C08EA0 = (_UNKNOWN **)v2;
  byte_140D01161 = 1;
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A080, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A080);
  sub_1402AFC00((ULONG_PTR)&qword_140C2A080);
  return v1;
}
