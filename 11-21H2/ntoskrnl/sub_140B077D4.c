/*
 * XREFs of sub_140B077D4 @ 0x140B077D4
 * Callers:
 *     sub_140B071D0 @ 0x140B071D0 (sub_140B071D0.c)
 * Callees:
 *     sub_140B07854 @ 0x140B07854 (sub_140B07854.c)
 */

unsigned __int64 sub_140B077D4()
{
  __int64 v0; // rdx
  __int64 *v1; // r9
  char v2; // al
  int v3; // edx
  __int64 v4; // r8
  _QWORD *v5; // r9
  unsigned __int64 v6; // r11
  __int64 i; // r10
  unsigned __int64 result; // rax

  v0 = 0LL;
  v1 = qword_140C54058;
  do
  {
    v2 = sub_140B07854((unsigned int)v0, v0, (((unsigned __int64)*(v1 - 1) >> 39) & 0x1FF) - 256);
    for ( i = *v5 >> 39; i; --i )
    {
      *(_BYTE *)(v4 + v6 + 20240) = v2;
      v4 = (unsigned int)(v4 + 1);
    }
    v0 = (unsigned int)(v3 + 1);
    v1 = v5 + 2;
  }
  while ( (unsigned int)v0 < 0xE );
  result = ((v6 >> 39) & 0x1FF) - 256;
  *(_BYTE *)((unsigned int)result + v6 + 20240) = 12;
  return result;
}
