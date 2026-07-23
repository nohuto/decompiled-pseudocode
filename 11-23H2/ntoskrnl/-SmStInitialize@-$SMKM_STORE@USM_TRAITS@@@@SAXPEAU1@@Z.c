/*
 * XREFs of ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034460C
 * Callers:
 *     SmProcessCreateRequest @ 0x1407B795C (SmProcessCreateRequest.c)
 * Callees:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140344714 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char *__fastcall SMKM_STORE<SM_TRAITS>::SmStInitialize(char *a1)
{
  char *v1; // rbx
  _QWORD *v2; // rax
  char *result; // rax

  v1 = a1;
  memset(a1, 0, 0x1A60uLL);
  v1[6020] = 2;
  ST_STORE<SM_TRAITS>::StInitialize(v1);
  *((_QWORD *)v1 + 757) = v1 + 6048;
  *((_QWORD *)v1 + 756) = 0LL;
  *((_QWORD *)v1 + 759) = v1 + 6064;
  *((_QWORD *)v1 + 758) = 0LL;
  *((_QWORD *)v1 + 761) = v1 + 6080;
  *((_QWORD *)v1 + 760) = 0LL;
  *((_QWORD *)v1 + 755) = 0LL;
  *((_QWORD *)v1 + 771) = v1 + 6160;
  *((_QWORD *)v1 + 770) = v1 + 6160;
  *((_WORD *)v1 + 3076) = 0;
  v1[6154] = 6;
  *((_DWORD *)v1 + 1539) = 0;
  *((_QWORD *)v1 + 768) = v1 + 6136;
  *((_QWORD *)v1 + 767) = v1 + 6136;
  v2 = v1 + 6184;
  *((_WORD *)v1 + 3064) = 0;
  v1[6130] = 6;
  *((_DWORD *)v1 + 1533) = 0;
  *((_WORD *)v1 + 3088) = 1;
  v1[6178] = 6;
  *((_DWORD *)v1 + 1545) = 0;
  v1 += 6608;
  v2[1] = v2;
  *v2 = v2;
  memset(v1, 0, 0x78uLL);
  result = v1 + 16;
  *((_WORD *)v1 + 4) = 1;
  v1[10] = 6;
  *((_DWORD *)v1 + 3) = 0;
  *((_QWORD *)v1 + 3) = v1 + 16;
  *((_QWORD *)v1 + 2) = v1 + 16;
  *((_QWORD *)v1 + 4) = 0LL;
  return result;
}
