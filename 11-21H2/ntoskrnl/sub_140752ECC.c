/*
 * XREFs of sub_140752ECC @ 0x140752ECC
 * Callers:
 *     sub_140752DA8 @ 0x140752DA8 (sub_140752DA8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407EE888 @ 0x1407EE888 (sub_1407EE888.c)
 *     sub_14086318C @ 0x14086318C (sub_14086318C.c)
 */

__int64 __fastcall sub_140752ECC(__int64 a1)
{
  char v1; // di
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = a1;
  LOBYTE(a1) = 1;
  sub_140753094(a1);
  v2 = 0;
  if ( byte_140C23414 && byte_140C24513 != v1 )
  {
    byte_140C24513 = v1;
    if ( v1 )
    {
      qword_140C24518 = MEMORY[0xFFFFF78000000008];
      sub_14086318C();
    }
    else
    {
      qword_140C24518 = 0LL;
      KeCancelTimer2((__int64)&unk_140C242C0);
    }
    sub_1407EE888();
  }
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
  if ( qword_140C5AD80 )
  {
    LOBYTE(v4) = v1;
    return (unsigned int)sub_14042A5E0(v4, v3);
  }
  return v2;
}
