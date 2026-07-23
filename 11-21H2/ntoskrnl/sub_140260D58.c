/*
 * XREFs of sub_140260D58 @ 0x140260D58
 * Callers:
 *     sub_140260C4C @ 0x140260C4C (sub_140260C4C.c)
 * Callees:
 *     sub_140260EFC @ 0x140260EFC (sub_140260EFC.c)
 *     sub_1402612BC @ 0x1402612BC (sub_1402612BC.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406ED4E0 @ 0x1406ED4E0 (sub_1406ED4E0.c)
 */

__int64 __fastcall sub_140260D58(__int64 a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rcx
  _QWORD *i; // rax
  unsigned int v5; // eax
  __int64 result; // rax

  memset((void *)(a1 + 1), 0, 0x177FuLL);
  *(_BYTE *)a1 = 2;
  sub_140260EFC(a1 + 80, a1 + 2016);
  sub_140260EFC(a1 + 2016, 0LL);
  *(_OWORD *)(a1 + 3960) = 0LL;
  *(_OWORD *)(a1 + 3976) = 0LL;
  *(_OWORD *)(a1 + 3992) = 0LL;
  *(_QWORD *)(a1 + 4008) = 0LL;
  sub_1406ED4E0(a1 + 4064);
  v2 = *(_DWORD *)(a1 + 4216) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 4224) = 3;
  *(_DWORD *)(a1 + 4216) = v2 | 6;
  memset((void *)(a1 + 4288), 0, 0x510uLL);
  *(_QWORD *)(a1 + 4280) = a1 + 4304;
  *(_QWORD *)(a1 + 4296) = MEMORY[0xFFFFF78000000008] + 600000000LL;
  *(_QWORD *)(a1 + 5608) = 500LL;
  *(_QWORD *)(a1 + 5624) = 1000LL;
  *(_QWORD *)(a1 + 5640) = 3000LL;
  *(_QWORD *)(a1 + 5656) = 5000LL;
  *(_QWORD *)(a1 + 5672) = 10000LL;
  *(_QWORD *)(a1 + 5688) = 20000LL;
  *(_QWORD *)(a1 + 5704) = 50000LL;
  *(_QWORD *)(a1 + 5720) = 100000LL;
  sub_1402612BC(a1 + 5584);
  memset((void *)(a1 + 5744), 0, 0xE8uLL);
  v3 = (_QWORD *)(a1 + 5912);
  for ( i = (_QWORD *)(a1 + 5744); i < v3; i += 3 )
  {
    *i = -1LL;
    i[1] = -1LL;
  }
  v5 = *(_DWORD *)(a1 + 5936) & 0xFFFFFFFE;
  *v3 = -1LL;
  *(_DWORD *)(a1 + 5944) = 5;
  *(_DWORD *)(a1 + 5936) = v5 | 6;
  InitializeSListHead((PSLIST_HEADER)(a1 + 4048));
  result = *(_DWORD *)(a1 + 5976) & 0xFFFFFFF8 | 6;
  *(_DWORD *)(a1 + 5984) = 6;
  *(_DWORD *)(a1 + 5976) = result;
  return result;
}
