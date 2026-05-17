/*
 * XREFs of RtlExpandEnvironmentStrings_U @ 0x180059AD0
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x180009260 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E97D0 (RtlpLookupSafeCurDirList.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800E9BBC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x180059B50 (RtlExpandEnvironmentStrings.c)
 */

__int64 __fastcall RtlExpandEnvironmentStrings_U(int a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r8
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a3 + 2);
  v6 = *a2;
  v8 = *((_QWORD *)a2 + 1);
  v13 = 0LL;
  v9 = RtlExpandEnvironmentStrings(a1, v8, v6 >> 1, *(_QWORD *)(a3 + 8), v4 >> 1, (__int64)&v13);
  v10 = v13;
  v11 = v9;
  if ( v13 > 0x7FFF )
  {
    v11 = -1073741823;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    if ( v9 >= 0 )
      *(_WORD *)a3 = 2 * (v13 - 1);
    if ( a4 )
      *a4 = 2 * v10;
  }
  return v11;
}
