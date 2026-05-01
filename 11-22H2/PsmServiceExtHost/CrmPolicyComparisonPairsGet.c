/*
 * XREFs of CrmPolicyComparisonPairsGet @ 0x18004B990
 * Callers:
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmPolicyComparisonPairsGet(int *a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 *v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx

  v2 = 0;
  v5 = 0LL;
  v6 = 7LL;
  do
  {
    v7 = v5 + 72LL * *a1;
    if ( *(_DWORD *)((char *)&CrmAcResourceConditionPolicyTable + v7 + 12) )
    {
      v8 = *(unsigned int *)((char *)&CrmAcResourceConditionPolicyTable + v7 + 12);
      v9 = (__int128 *)((char *)&CrmAcResourceConditionPolicyTable + v7 + 16);
      do
      {
        v10 = *v9++;
        v11 = 2LL * v2++;
        *(_OWORD *)(a2 + 8 * v11) = v10;
        --v8;
      }
      while ( v8 );
    }
    ++a1;
    v5 += 224LL;
    --v6;
  }
  while ( v6 );
  return v2;
}
