/*
 * XREFs of sub_1407F5D6C @ 0x1407F5D6C
 * Callers:
 *     sub_1407F5914 @ 0x1407F5914 (sub_1407F5914.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1407F5D6C(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 **v3; // rax
  unsigned int v4; // ebx
  unsigned __int64 v6; // rcx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A0C0, 0LL);
  v2 = (__int64 *)qword_140C2A0D0;
  if ( (__int64 *)qword_140C2A0D0 != &qword_140C2A0D0 )
  {
    v6 = (unsigned __int64)a1[2];
    while ( v2[2] <= v6 )
    {
      if ( v2[2] == v6 )
      {
        if ( v2[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v2[6] > (unsigned __int64)a1[5] )
        {
          v4 = 0;
          goto LABEL_4;
        }
      }
      v2 = (__int64 *)*v2;
      if ( v2 == &qword_140C2A0D0 )
        break;
    }
  }
  v3 = (__int64 **)v2[1];
  if ( *v3 != v2 )
    __fastfail(3u);
  *a1 = v2;
  a1[1] = (__int64 *)v3;
  *v3 = (__int64 *)a1;
  v2[1] = (__int64)a1;
  v4 = 1;
  ++dword_140C2A0C8;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A0C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A0C0);
  sub_1402AFC00((ULONG_PTR)&qword_140C2A0C0);
  return v4;
}
