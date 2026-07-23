/*
 * XREFs of sub_1407676B0 @ 0x1407676B0
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char *__fastcall sub_1407676B0(__int64 a1)
{
  unsigned int v1; // edi
  char *v2; // rbx
  __int64 v3; // rax

  v1 = a1;
  v2 = (char *)sub_140767730(a1, 256LL, 24LL, 1299213904LL);
  if ( v2 )
  {
    v3 = sub_140767730(v1, 256LL, 1024LL, 1299213904LL);
    if ( v3 )
    {
      *(_DWORD *)v2 = 0;
      *(_OWORD *)(v2 + 8) = 0LL;
      *((_WORD *)v2 + 5) = 1024;
      *((_QWORD *)v2 + 2) = v3;
    }
    else
    {
      ExFreePoolWithTag(v2, 0x4D706E50u);
      return 0LL;
    }
  }
  return v2;
}
