/*
 * XREFs of sub_140550D9C @ 0x140550D9C
 * Callers:
 *     sub_140550FDC @ 0x140550FDC (sub_140550FDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140550D9C(unsigned __int8 a1)
{
  signed __int64 v1; // r9
  int v2; // r11d
  __int64 v3; // rbx
  signed __int64 v4; // r10
  char *v5; // r8
  unsigned int v6; // ecx
  __int64 result; // rax

  v1 = &unk_140C0CBA0 - off_140C08E78;
  v2 = a1;
  v3 = 16LL;
  v4 = &unk_140C0CBA1 - off_140C08E78;
  v5 = (char *)off_140C08E78 + 2;
  do
  {
    *(v5 - 2) = v2 * (unsigned int)(unsigned __int8)v5[v1 - 2] / 0x14;
    *(v5 - 1) = v2 * (unsigned int)(unsigned __int8)v5[v4 - 2] / 0x14;
    v6 = v2 * (unsigned __int8)v5[v1];
    v5[1] = 0;
    result = -858993459 * v6;
    *v5 = v6 / 0x14;
    v5 += 4;
    --v3;
  }
  while ( v3 );
  return result;
}
