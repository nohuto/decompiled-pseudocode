/*
 * XREFs of sub_14090A0D0 @ 0x14090A0D0
 * Callers:
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 *     sub_140909FA0 @ 0x140909FA0 (sub_140909FA0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void __fastcall sub_14090A0D0(int a1, int a2)
{
  __int64 *i; // rax
  bool v5; // zf
  __int64 v6; // rcx
  __int64 **v7; // rdx
  __int64 v8; // rcx

  ExAcquireFastMutex(&stru_140C4B020);
  for ( i = (__int64 *)qword_140C4ADC0; i != &qword_140C4ADC0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a1 )
    {
      v5 = *((_DWORD *)i + 5) == a2;
      *((_DWORD *)i + 5) -= a2;
      if ( v5 )
      {
        *((_DWORD *)i + 6) = 0;
        *((_DWORD *)i + 7) = 0;
        v6 = *i;
        if ( *(__int64 **)(*i + 8) != i
          || (v7 = (__int64 **)i[1], *v7 != i)
          || (*v7 = (__int64 *)v6,
              *(_QWORD *)(v6 + 8) = v7,
              v8 = qword_140C4AFF0,
              *(__int64 **)(qword_140C4AFF0 + 8) != &qword_140C4AFF0) )
        {
          __fastfail(3u);
        }
        *i = qword_140C4AFF0;
        i[1] = (__int64)&qword_140C4AFF0;
        *(_QWORD *)(v8 + 8) = i;
        qword_140C4AFF0 = (__int64)i;
      }
      break;
    }
  }
  KeReleaseGuardedMutex(&stru_140C4B020);
}
