/*
 * XREFs of sub_140967470 @ 0x140967470
 * Callers:
 *     sub_140966F60 @ 0x140966F60 (sub_140966F60.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140967584 @ 0x140967584 (sub_140967584.c)
 */

__int64 __fastcall sub_140967470(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  __int64 *v5; // rdi
  unsigned int v6; // r14d
  __int64 *i; // rsi
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v6 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A0A0, 0LL);
  for ( i = (__int64 *)qword_140C2A090; i != &qword_140C2A090; i = (__int64 *)*i )
  {
    if ( ObReferenceObjectSafe((__int64)i) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A0A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C2A0A0);
      sub_1402AFC00((ULONG_PTR)&qword_140C2A0A0);
      if ( v5 )
        ObfDereferenceObject(v5);
      v5 = i;
      v4 = sub_140967584(a1, i);
      if ( v4 )
      {
        v6 = 0;
        goto LABEL_14;
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A0A0, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A0A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A0A0);
  sub_1402AFC00((ULONG_PTR)&qword_140C2A0A0);
LABEL_14:
  if ( v5 )
    ObfDereferenceObject(v5);
  result = v6;
  *a2 = v4;
  return result;
}
