/*
 * XREFs of sub_1402D72FC @ 0x1402D72FC
 * Callers:
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 *     sub_1402D75FC @ 0x1402D75FC (sub_1402D75FC.c)
 *     sub_1406E3AE0 @ 0x1406E3AE0 (sub_1406E3AE0.c)
 * Callees:
 *     sub_14025C690 @ 0x14025C690 (sub_14025C690.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D749C @ 0x1402D749C (sub_1402D749C.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 */

_DWORD *__fastcall sub_1402D72FC(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  PIMAGE_NT_HEADERS v9; // r15
  int i; // r8d
  __int64 v11; // rcx
  char v13; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v13 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v9 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v9 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  sub_1402D749C();
  KeWaitForSingleObject(&Mutant, Executive, 0, 0, 0LL);
  for ( i = dword_140C1BC58 - 1; i >= 0; --i )
  {
    v11 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)P + v11 + 8) == a1 )
    {
      if ( *(_DWORD *)((char *)P + v11 + 24) != v9->OptionalHeader.CheckSum )
      {
        v13 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)((char *)P + v11 + 16) )
        {
          _mm_lfence();
          v8 = (_DWORD *)*((_QWORD *)P + 8 * (__int64)i + 2);
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v13 = 1;
            v8 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)((char *)P + v11) == a2 )
      {
        v8 = *(_DWORD **)((char *)P + v11 + 32);
        if ( a3 )
          *a3 = *(_QWORD *)((char *)P + v11 + 48);
        break;
      }
    }
  }
  KeReleaseMutant(&Mutant, 1, 0, 0);
  if ( v13 )
    sub_14025C690(a1);
  return v8;
}
