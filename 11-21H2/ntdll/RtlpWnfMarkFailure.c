/*
 * XREFs of RtlpWnfMarkFailure @ 0x180093088
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005A9B4 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWnfMarkFailure(__int64 a1, int a2, unsigned int a3)
{
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edx

  if ( *(_DWORD *)(a1 + 148) >= a3 )
  {
    v4 = *(_DWORD *)(a1 + 136);
  }
  else
  {
    *(_DWORD *)(a1 + 136) = 0;
    v4 = 0;
    *(_DWORD *)(a1 + 148) = a3;
  }
  if ( a2 == -1073741801 )
  {
    v5 = v4 == 0;
    v6 = qword_18017AAE0;
    if ( v5 )
    {
      v7 = *(_DWORD *)(qword_18017AAE0 + 60);
LABEL_6:
      *(_DWORD *)(a1 + 140) = v7;
      goto LABEL_7;
    }
    v12 = 2 * *(_DWORD *)(a1 + 140);
    *(_DWORD *)(a1 + 140) = v12;
    v13 = *(_DWORD *)(v6 + 68);
    if ( v12 > v13 )
      *(_DWORD *)(a1 + 140) = v13;
  }
  else if ( a2 == -1073741267 && !v4 )
  {
    v7 = *(_DWORD *)(qword_18017AAE0 + 64);
    goto LABEL_6;
  }
LABEL_7:
  v8 = RtlpFreezeTimeBias;
  v9 = MEMORY[0x7FFE0008];
  v10 = MEMORY[0x7FFE03B0];
  result = *(unsigned int *)(a1 + 140);
  ++*(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 120) = 1;
  *(_QWORD *)(a1 + 128) = v9 - v10 - v8 + 10000 * result;
  return result;
}
