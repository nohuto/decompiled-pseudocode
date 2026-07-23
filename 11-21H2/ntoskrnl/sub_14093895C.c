/*
 * XREFs of sub_14093895C @ 0x14093895C
 * Callers:
 *     sub_140938198 @ 0x140938198 (sub_140938198.c)
 *     sub_140938314 @ 0x140938314 (sub_140938314.c)
 *     sub_1409386B8 @ 0x1409386B8 (sub_1409386B8.c)
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_14093895C(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v12; // r9

  *a4 = 0LL;
  *a5 = 0;
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    v8 = *(unsigned int *)(a2 + 24);
    v9 = *(unsigned int *)(a2 + 28);
    v10 = v9 + *(unsigned int *)(a2 + 32);
    if ( v9 > v10 )
      return 3221225485LL;
    if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 176) )
      return 3221226705LL;
    v12 = *(_QWORD *)(a1 + 184);
    if ( v10 > *(unsigned int *)(v12 + 16 * v8 + 8) )
      return 3221225990LL;
    *a4 = v9 + *(_QWORD *)(v12 + 16 * v8);
  }
  else
  {
    if ( a3 )
      ProbeForWrite(*(volatile void **)(a2 + 24), *(unsigned int *)(a2 + 32), 1u);
    *a4 = *(_QWORD *)(a2 + 24);
  }
  *a5 = *(_DWORD *)(a2 + 32);
  return 0LL;
}
