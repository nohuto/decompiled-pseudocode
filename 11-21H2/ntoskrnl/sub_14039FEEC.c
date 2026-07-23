/*
 * XREFs of sub_14039FEEC @ 0x14039FEEC
 * Callers:
 *     sub_14039FE90 @ 0x14039FE90 (sub_14039FE90.c)
 *     sub_14050EA90 @ 0x14050EA90 (sub_14050EA90.c)
 * Callees:
 *     <none>
 */

void sub_14039FEEC()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rax

  if ( !qword_140C4E3E8 || (*(_DWORD *)(qword_140C4E3E8 + 224) & 0x80000) == 0 )
  {
    v0 = qword_140C4C690;
    if ( qword_140C4E3E8 && *(_DWORD *)(qword_140C4E3E8 + 228) == 8 )
      v0 = (unsigned __int64)qword_140C4C690 >> 1;
    if ( v0 <= 0x2FAF0800 )
      v1 = v0 >> 1;
    else
      v1 = v0 - 600000000;
    qword_140C4C6B8 = qword_140C4C6B0 + v1;
  }
}
