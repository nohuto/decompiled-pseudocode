/*
 * XREFs of sub_140A7C248 @ 0x140A7C248
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A7F132 @ 0x140A7F132 (sub_140A7F132.c)
 *     sub_140A7F844 @ 0x140A7F844 (sub_140A7F844.c)
 *     sub_140A94248 @ 0x140A94248 (sub_140A94248.c)
 *     sub_140A9ACE0 @ 0x140A9ACE0 (sub_140A9ACE0.c)
 *     sub_140A9CAB4 @ 0x140A9CAB4 (sub_140A9CAB4.c)
 */

char __fastcall sub_140A7C248(__int64 a1)
{
  __int64 *v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  PVOID *v5; // rdi
  PVOID *v6; // rax
  PVOID *v7; // rdx
  PVOID *v8; // rcx

  if ( (unsigned int)sub_1402DA4B0() )
  {
    v3 = *(_DWORD *)(a1 + 64);
    v4 = *(_QWORD *)(a1 + 48);
    sub_140A7F844(v4, v3);
    sub_140A7F132(v4, v3);
  }
  if ( dword_140C1AFA8 )
  {
    sub_140A94248(&xmmword_140C1B2B0, a1);
    v5 = (PVOID *)xmmword_140C1B1F0;
    while ( v5 != &xmmword_140C1B1F0 )
    {
      sub_140A94248(v5 + 3, a1);
      v6 = (PVOID *)*v5;
      if ( v5[3] == v5 + 3 )
      {
        if ( v6[1] != v5 || (v7 = (PVOID *)v5[1], *v7 != v5) )
          __fastfail(3u);
        *v7 = v6;
        v8 = v5;
        v6[1] = v7;
        v5 = (PVOID *)*v5;
        ExFreePoolWithTag(v8, 0);
        --dword_140C1AFA4;
      }
      else
      {
        v5 = (PVOID *)*v5;
      }
    }
  }
  LOBYTE(v2) = sub_1402DB738(a1);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000000) != 0 )
    LOBYTE(v2) = sub_140A9ACE0(a1);
  if ( byte_140C1AD98 )
  {
    v2 = &qword_140C1B2C0;
    if ( (__int64 *)qword_140C1B2C0 == &qword_140C1B2C0 )
      LOBYTE(v2) = sub_140A9CAB4();
  }
  return (char)v2;
}
