/*
 * XREFs of CcAdjustVacbLevelLockCount @ 0x1402075C0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140207370 (CcAllocateInitializeBcb.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x1403C6848 (CcDeleteBcbs.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1402F3140 (CcSetVacbLargeOffset.c)
 *     VacbLevelReference @ 0x1402F3868 (VacbLevelReference.c)
 */

__int64 __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rbx
  int v8; // r10d
  char v9; // cl
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rcx

  v4 = a2;
  LODWORD(v5) = 0;
  v6 = 25;
  v7 = *(_QWORD *)(a1 + 88);
  do
  {
    v8 = v6;
    v6 += 7;
    LODWORD(v5) = v5 + 1;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v6 );
  do
  {
    v9 = v8;
    v10 = a2 >> v8;
    v8 -= 7;
    v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)v10);
    a2 &= (1LL << v9) - 1;
    v11 = (_DWORD)v5 == 1;
    v5 = (unsigned int)(v5 - 1);
  }
  while ( !v11 );
  v12 = 1024LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v12 = 2048LL;
  *(_DWORD *)(v12 + v7) += a3;
  v13 = (_DWORD *)VacbLevelReference(a1, v7, 0LL, v5);
  result = (unsigned int)(*v13 | v13[1]);
  if ( !(_DWORD)result )
  {
    v19 = VacbLevelReference(v17, v14, v15, v16);
    ++*(_DWORD *)(v19 + 4);
    return CcSetVacbLargeOffset(v20, v4 & 0xFFFFFFFFFE000000uLL, -2LL);
  }
  return result;
}
