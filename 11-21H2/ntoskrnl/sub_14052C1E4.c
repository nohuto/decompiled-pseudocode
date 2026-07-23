/*
 * XREFs of sub_14052C1E4 @ 0x14052C1E4
 * Callers:
 *     sub_14052C1B0 @ 0x14052C1B0 (sub_14052C1B0.c)
 *     sub_14052C290 @ 0x14052C290 (sub_14052C290.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14052C1E4(unsigned int a1, __int64 a2, bool *a3)
{
  __int64 v4; // rdx
  int LockArray_high; // ecx
  unsigned int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx

  v4 = a1;
  if ( a1 >= dword_140C49FE0 )
    return 3221225711LL;
  _mm_lfence();
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v8 = 0;
  v9 = 0LL;
  if ( off_140C02520 == &off_1400032A0 )
    v10 = qword_140C4D0A8;
  else
    v10 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * LockArray_high);
  v11 = *(_QWORD *)(v10 + 8 * v4);
  v12 = *(_DWORD *)(v11 + 24);
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
        return (unsigned int)-1073740024;
      else
        *a3 = a2 != 0;
      return v8;
    }
  }
  else
  {
    v9 = 0x100000LL;
  }
  *a3 = a2 != (v9 | **(_QWORD **)(v11 + 16) | 0x400000);
  return v8;
}
