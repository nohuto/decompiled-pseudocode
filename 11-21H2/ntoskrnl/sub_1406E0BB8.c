/*
 * XREFs of sub_1406E0BB8 @ 0x1406E0BB8
 * Callers:
 *     sub_1406E0A70 @ 0x1406E0A70 (sub_1406E0A70.c)
 *     sub_1407ECFCC @ 0x1407ECFCC (sub_1407ECFCC.c)
 *     sub_140A136D8 @ 0x140A136D8 (sub_140A136D8.c)
 *     sub_140A14498 @ 0x140A14498 (sub_140A14498.c)
 * Callees:
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_140A1556C @ 0x140A1556C (sub_140A1556C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406E0BB8(_QWORD *P)
{
  __int64 v2; // rcx
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = P[170];
  if ( v2 && *(_DWORD *)(v2 + 16) == 1 )
  {
    if ( !*(_QWORD *)(v2 + 8) || (ExFreePoolWithTag(*(PVOID *)(v2 + 8), 0x74705041u), (v2 = P[170]) != 0) )
      ExFreePoolWithTag((PVOID)v2, 0x74705041u);
    P[170] = 0LL;
    v4 = (void *)P[171];
    if ( v4 )
    {
      sub_140A1556C(v4);
      P[171] = 0LL;
    }
  }
  v3 = *((_DWORD *)P + 6);
  if ( (v3 & 8) != 0 && (v3 & 1) != 0 )
  {
    v5 = (void *)P[1];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x74705041u);
      P[1] = 0LL;
      *((_DWORD *)P + 5) = 0;
    }
  }
  sub_14075E448((PVOID)*P);
  ExFreePoolWithTag(P, 0x74705041u);
}
