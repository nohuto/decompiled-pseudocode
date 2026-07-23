/*
 * XREFs of sub_140B0BB6C @ 0x140B0BB6C
 * Callers:
 *     sub_140B0B9A8 @ 0x140B0B9A8 (sub_140B0B9A8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B0BBC4 @ 0x140B0BBC4 (sub_140B0BBC4.c)
 */

void __fastcall sub_140B0BB6C(PVOID P)
{
  PVOID v1; // rbx
  void *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = *(void **)v1;
      if ( *((_BYTE *)v1 + 24) )
      {
        v3 = (void *)*((_QWORD *)v1 + 1);
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
      }
      sub_140B0BBC4(*((PVOID *)v1 + 2));
      ExFreePoolWithTag(v1, 0);
      v1 = v2;
    }
    while ( v2 );
  }
}
