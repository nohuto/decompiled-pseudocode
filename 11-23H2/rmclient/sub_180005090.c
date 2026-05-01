/*
 * XREFs of sub_180005090 @ 0x180005090
 * Callers:
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 * Callees:
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 */

__int64 __fastcall sub_180005090(__int64 a1)
{
  void *(__fastcall **v2)(__int64, __int64); // rbx
  int v3; // esi

  RtlAcquireSRWLockExclusive(a1 + 96);
  *(_DWORD *)(a1 + 104) = GetCurrentThreadId();
  v2 = (void *(__fastcall **)(__int64, __int64))(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) || *v2 )
  {
    v3 = -2147483635;
    goto LABEL_7;
  }
  *(_QWORD *)(a1 + 24) = sub_180003740;
  *v2 = sub_1800037A0;
  v3 = sub_1800056F0(a1);
  if ( v3 < 0 )
  {
LABEL_7:
    *(_QWORD *)(a1 + 24) = 0LL;
    *v2 = 0LL;
    goto LABEL_5;
  }
  v3 = 0;
LABEL_5:
  *(_DWORD *)(a1 + 104) = 0;
  RtlReleaseSRWLockExclusive(a1 + 96);
  return (unsigned int)v3;
}
