/*
 * XREFs of sub_140AF4308 @ 0x140AF4308
 * Callers:
 *     sub_140235AAC @ 0x140235AAC (sub_140235AAC.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140AF3FFC @ 0x140AF3FFC (sub_140AF3FFC.c)
 *     sub_140B51C0C @ 0x140B51C0C (sub_140B51C0C.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 sub_140AF4308()
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx

  if ( qword_140D686F0 )
    return qword_140D686F0 << 25 >> 16;
  v1 = (((unsigned __int64)qword_140D686D0 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( (*(_BYTE *)v1 & 1) == 0 )
  {
LABEL_9:
    v1 += 8LL;
    if ( (v1 & 0xFFF) == 0 )
      return 0LL;
  }
  v2 = (__int64)(v1 << 25) >> 16;
  while ( sub_140317A10(v2) )
  {
    v2 += 8LL;
    if ( (v2 & 0xFFF) == 0 )
      goto LABEL_9;
  }
  qword_140D686F0 = v2;
  return (__int64)(v2 << 25) >> 16;
}
