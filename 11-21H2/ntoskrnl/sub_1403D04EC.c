/*
 * XREFs of sub_1403D04EC @ 0x1403D04EC
 * Callers:
 *     sub_1403D0428 @ 0x1403D0428 (sub_1403D0428.c)
 * Callees:
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403D04EC()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset(&unk_140CF7100, 0, 0x1C0uLL);
  v0 = &unk_140CF714E;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140CF7144 );
  dword_140CF72A0 = 0x8000000;
  dword_140CF7128 = 2048;
  word_140CF713C = 0;
  qword_140CF72A8 = (__int64)sub_1403A54E0;
  qword_140CF72B0 = (__int64)sub_1403A5440;
  qword_140CF72B8 = (__int64)sub_1403A3520;
  v1 = sub_1403A3520(0, 0);
  byte_140E01844 = 1;
  v2 = 256LL;
  v1[320] = 207;
  result = 1280LL;
  while ( v2 )
  {
    *v1++ = 1280;
    --v2;
  }
  return result;
}
