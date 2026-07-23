/*
 * XREFs of sub_1409099C0 @ 0x1409099C0
 * Callers:
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 *     sub_14090A064 @ 0x14090A064 (sub_14090A064.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140909D8C @ 0x140909D8C (sub_140909D8C.c)
 */

__int64 __fastcall sub_1409099C0(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v9; // r14d
  int v10; // edi
  __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // rax

  v9 = 0;
  v10 = 0;
  ExAcquireFastMutex(&stru_140C4B020);
  i = qword_140C4B060;
  if ( qword_140C4B060 && (a4 != 3 || dword_140C4B000 == 1) )
  {
LABEL_4:
    *(_DWORD *)(i + 20) += a3;
  }
  else
  {
    while ( 1 )
    {
      for ( i = qword_140C4ADC0; (__int64 *)i != &qword_140C4ADC0; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 24) == a1 && *(_DWORD *)(i + 28) == a2 )
          goto LABEL_4;
      }
      i = qword_140C4AFF0;
      if ( (__int64 *)qword_140C4AFF0 != &qword_140C4AFF0 )
        break;
      KeReleaseGuardedMutex(&stru_140C4B020);
      if ( v9 )
        return (unsigned int)-1073741670;
      v10 = sub_140909D8C();
      if ( v10 < 0 )
        return (unsigned int)v10;
      v9 = 1;
      ExAcquireFastMutex(&stru_140C4B020);
    }
    v12 = *(_QWORD *)qword_140C4AFF0;
    if ( *(__int64 **)(qword_140C4AFF0 + 8) != &qword_140C4AFF0
      || *(_QWORD *)(v12 + 8) != qword_140C4AFF0
      || (qword_140C4AFF0 = *(_QWORD *)qword_140C4AFF0,
          *(_QWORD *)(v12 + 8) = &qword_140C4AFF0,
          *(_DWORD *)(i + 24) = a1,
          *(_DWORD *)(i + 28) = a2,
          *(_DWORD *)(i + 20) = a3,
          v13 = qword_140C4ADC0,
          *(__int64 **)(qword_140C4ADC0 + 8) != &qword_140C4ADC0) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)i = qword_140C4ADC0;
    *(_QWORD *)(i + 8) = &qword_140C4ADC0;
    *(_QWORD *)(v13 + 8) = i;
    qword_140C4ADC0 = i;
  }
  KeReleaseGuardedMutex(&stru_140C4B020);
  *a5 = *(_DWORD *)(i + 16);
  return (unsigned int)v10;
}
