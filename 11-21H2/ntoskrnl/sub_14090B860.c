/*
 * XREFs of sub_14090B860 @ 0x14090B860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlDeleteOwnersRanges @ 0x140839700 (RtlDeleteOwnersRanges.c)
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     sub_140839D70 @ 0x140839D70 (sub_140839D70.c)
 *     RtlCopyRangeList @ 0x14083A400 (RtlCopyRangeList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14090B860(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // r8
  int v5; // edi
  __int64 *i; // rsi
  __int64 *j; // rsi
  _QWORD v9[10]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v10[8]; // [rsp+90h] [rbp-9h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(v10, 0, sizeof(v10));
  v4 = a2[2];
  v9[7] = v10;
  LODWORD(v9[6]) = 1;
  v9[5] = v10;
  LOWORD(v9[8]) = 1;
  if ( v4 )
  {
    v5 = sub_14042A5E0(a1, *((unsigned int *)a2 + 2));
    if ( v5 >= 0 )
      goto LABEL_8;
LABEL_15:
    RtlFreeRangeList(*(_QWORD *)(a1 + 48));
    return (unsigned int)v5;
  }
  v5 = RtlCopyRangeList(*(_QWORD *)(a1 + 48), *(__int64 **)(a1 + 40));
  if ( v5 < 0 )
    goto LABEL_15;
  for ( i = **a2; *a2 != (__int64 **)i; i = (__int64 *)*i )
  {
    v5 = RtlDeleteOwnersRanges(*(__int64 ***)(a1 + 48), i[4]);
    if ( v5 < 0 )
      goto LABEL_15;
  }
LABEL_8:
  for ( j = **a2; *a2 != (__int64 **)j; j = (__int64 *)*j )
  {
    v9[9] = 0LL;
    v9[4] = j;
    v5 = sub_140839D70(a1, j[10], v10);
    if ( *((_DWORD *)j + 22) != 2 )
    {
      sub_14042A5E0(j[9], v9);
      v9[1] = v9[0] - 1LL;
      v5 = sub_14042A5E0(a1, v9);
      if ( v5 < 0 )
        goto LABEL_15;
      if ( (v9[8] & 0x10) != 0 )
      {
        ExFreePoolWithTag((PVOID)v9[9], 0);
        LOWORD(v9[8]) &= ~0x10u;
      }
    }
  }
  return (unsigned int)v5;
}
