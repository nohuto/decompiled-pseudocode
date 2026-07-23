/*
 * XREFs of DbgkLkmdUnregisterCallback @ 0x14092B080
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdUnregisterCallback(__int64 a1)
{
  unsigned int v2; // edi
  signed __int64 *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  v2 = 0;
  while ( 1 )
  {
    v3 = (signed __int64 *)(&stru_140C5A870 + 2 * v2);
    v4 = sub_140281870(v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    if ( ++v2 >= 8 )
      return 3221226021LL;
  }
  if ( a1 != v4[1].Count || !sub_1403C7678(v3, 0LL, (__int64)v4) )
  {
    sub_140281930(v3, (__int64)v5);
    goto LABEL_6;
  }
  sub_140281930(v3, (__int64)v5);
  ExWaitForRundownProtectionRelease(v5);
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
