/*
 * XREFs of RtlpWnfMarkFailure @ 0x1800E9230
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DF68 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWnfMarkFailure(__int64 a1, int a2, unsigned int a3)
{
  int v4; // eax
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 result; // rax

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
    v6 = v4 == 0;
    v7 = qword_180184D10;
    if ( v6 )
    {
      v5 = *(_DWORD *)(qword_180184D10 + 60);
      goto LABEL_12;
    }
    v8 = 2 * *(_DWORD *)(a1 + 140);
    *(_DWORD *)(a1 + 140) = v8;
    v9 = *(_DWORD *)(v7 + 68);
    if ( v8 > v9 )
      *(_DWORD *)(a1 + 140) = v9;
  }
  else if ( a2 == -1073741267 && !v4 )
  {
    v5 = *(_DWORD *)(qword_180184D10 + 64);
LABEL_12:
    *(_DWORD *)(a1 + 140) = v5;
  }
  v10 = RtlpFreezeTimeBias;
  v11 = MEMORY[0x7FFE0008];
  v12 = MEMORY[0x7FFE03B0];
  result = *(unsigned int *)(a1 + 140);
  ++*(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 120) = 1;
  *(_QWORD *)(a1 + 128) = v11 - v12 - v10 + 10000 * result;
  return result;
}
