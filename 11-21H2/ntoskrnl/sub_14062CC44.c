/*
 * XREFs of sub_14062CC44 @ 0x14062CC44
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14062CC44(_DWORD *a1, unsigned int *a2)
{
  unsigned int v5; // edi
  _DWORD *Pool2; // rax
  _DWORD *v7; // rsi
  int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // r10d
  __int64 v11; // r9
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx

  if ( !SeSinglePrivilegeCheck(stru_140D3CB00, 1) )
    return 3221225569LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225506LL;
  if ( *a2 < 8 )
    return 3221225507LL;
  if ( *a1 > (unsigned int)dword_140D06884 )
    return 3221225485LL;
  v5 = 16 * *(_DWORD *)((char *)&NlsMbCodePageTag + 5) + 8;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v5, 1953985605LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *a1;
    v8 = sub_14042A5E0(52LL, v5);
    if ( v8 < 0 )
    {
LABEL_29:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    v9 = v7[1];
    if ( v9 <= *(_DWORD *)((char *)&NlsMbCodePageTag + 5) )
    {
      v8 = 0;
      a1[1] = v9;
    }
    else
    {
      a1[1] = *(_DWORD *)((char *)&NlsMbCodePageTag + 5);
      v8 = -2147483643;
      v9 = *(_DWORD *)((char *)&NlsMbCodePageTag + 5);
    }
    v10 = 12 * v9 + 8;
    if ( *a2 < v10 )
    {
      v8 = -1073741789;
      goto LABEL_29;
    }
    v11 = 0LL;
    if ( !v9 )
    {
LABEL_28:
      *a2 = v10;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v12 = v7[4 * (unsigned int)v11 + 2];
      if ( !v12 )
      {
        a1[3 * v11 + 2] = 0;
        goto LABEL_27;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_25:
        a1[3 * v11 + 2] = 3;
        a1[3 * v11 + 4] = v7[4 * (unsigned int)v11 + 5];
        a1[3 * v11 + 3] = v7[4 * (unsigned int)v11 + 4];
        goto LABEL_27;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          a1[3 * v11 + 2] = 2;
          a1[3 * v11 + 4] = v7[4 * (unsigned int)v11 + 4];
          goto LABEL_27;
        }
        if ( v15 == 1 )
          goto LABEL_25;
      }
      a1[3 * v11 + 2] = 1;
LABEL_27:
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= a1[1] )
        goto LABEL_28;
    }
  }
  return (unsigned int)-1073741801;
}
