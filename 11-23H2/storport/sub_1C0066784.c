/*
 * XREFs of sub_1C0066784 @ 0x1C0066784
 * Callers:
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0066C28 @ 0x1C0066C28 (sub_1C0066C28.c)
 */

__int64 __fastcall sub_1C0066784(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  unsigned int v4; // r8d
  int v5; // eax
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rbx

  v2 = 1;
  if ( (unsigned __int8)sub_1C0066C28() )
  {
    v4 = dword_1C0093AD8;
    v5 = dword_1C0093AE0 - 1;
    *(_DWORD *)(v3 + 912) = dword_1C0093AD8;
    v2 = v4 * ((v4 + v5) / v4) / v4;
  }
  v6 = sub_1C0007CF4(72LL, 320LL * v2, 1095197010LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 896) = v6;
  if ( !v6 )
    return 3221225626LL;
  v8 = 0;
  if ( v2 )
  {
    v9 = 0LL;
    do
    {
      v10 = v9 + *(_QWORD *)(a1 + 896);
      *(_DWORD *)(v10 + 28) = 1000;
      *(_DWORD *)(v10 + 32) = 1000;
      KeInitializeSpinLock((PKSPIN_LOCK)v10);
      *(_DWORD *)(v10 + 128) = 0;
      *(_DWORD *)(v10 + 284) = v8;
      v9 += 320LL;
      *(_QWORD *)(v10 + 16) = v10 + 8;
      ++v8;
      *(_QWORD *)(v10 + 8) = v10 + 8;
      *(_QWORD *)(v10 + 272) = v10 + 264;
      *(_QWORD *)(v10 + 264) = v10 + 264;
      *(_QWORD *)(v10 + 48) = a1;
    }
    while ( v8 < v2 );
  }
  *(_DWORD *)(a1 + 920) = 1000;
  result = 0LL;
  *(_DWORD *)(a1 + 908) = v2;
  return result;
}
