/*
 * XREFs of sub_14022B980 @ 0x14022B980
 * Callers:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_1403AD92C @ 0x1403AD92C (sub_1403AD92C.c)
 * Callees:
 *     sub_14022B9E4 @ 0x14022B9E4 (sub_14022B9E4.c)
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_14022BA6C @ 0x14022BA6C (sub_14022BA6C.c)
 */

__int64 sub_14022B980()
{
  unsigned int v0; // edi
  struct _KPRCB *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx

  v0 = dword_140C2B1C0;
  v1 = (struct _KPRCB *)qword_140D088C0[(unsigned int)dword_140C2B1C0];
  result = sub_14022B9E4((char *)v1 + 13244, 8LL);
  if ( (result & 0xA9) == 0 )
  {
    LOBYTE(v3) = 2;
    if ( KeGetCurrentPrcb() == v1 )
      return sub_14022BA6C(v1, v3);
    else
      return sub_14022BA48(v0, v3);
  }
  return result;
}
