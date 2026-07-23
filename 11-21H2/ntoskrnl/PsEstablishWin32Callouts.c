/*
 * XREFs of PsEstablishWin32Callouts @ 0x140832590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_140832A20 @ 0x140832A20 (sub_140832A20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PsEstablishWin32Callouts(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx

  v1 = (struct _EX_RUNDOWN_REF *)sub_140832A20(a1, 0LL);
  v2 = v1;
  if ( v1 )
  {
    if ( sub_1403C7678((signed __int64 *)&stru_140C1BDC8, v1, 0LL) )
      byte_140C5AE3C = 1;
    else
      ExFreePoolWithTag(v2, 0);
  }
}
