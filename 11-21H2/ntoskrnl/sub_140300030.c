/*
 * XREFs of sub_140300030 @ 0x140300030
 * Callers:
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_1402395A0 @ 0x1402395A0 (sub_1402395A0.c)
 *     sub_14023F108 @ 0x14023F108 (sub_14023F108.c)
 *     sub_14023F570 @ 0x14023F570 (sub_14023F570.c)
 *     sub_14024AC78 @ 0x14024AC78 (sub_14024AC78.c)
 *     sub_140255E2C @ 0x140255E2C (sub_140255E2C.c)
 *     KeCopyAffinityEx2 @ 0x140256360 (KeCopyAffinityEx2.c)
 *     sub_14025C33C @ 0x14025C33C (sub_14025C33C.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_140292BA4 @ 0x140292BA4 (sub_140292BA4.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1402EA7E4 @ 0x1402EA7E4 (sub_1402EA7E4.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_1402F411C @ 0x1402F411C (sub_1402F411C.c)
 *     sub_1402FF090 @ 0x1402FF090 (sub_1402FF090.c)
 *     sub_1402FF620 @ 0x1402FF620 (sub_1402FF620.c)
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 *     sub_140300190 @ 0x140300190 (sub_140300190.c)
 *     sub_140302650 @ 0x140302650 (sub_140302650.c)
 *     sub_140303740 @ 0x140303740 (sub_140303740.c)
 *     sub_140304A20 @ 0x140304A20 (sub_140304A20.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1403CF350 (KeQueryActiveProcessorAffinity2.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 *     sub_14051FA44 @ 0x14051FA44 (sub_14051FA44.c)
 *     sub_14051FB70 @ 0x14051FB70 (sub_14051FB70.c)
 *     sub_14052AF40 @ 0x14052AF40 (sub_14052AF40.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     KeCopyAffinityEx @ 0x14056C150 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x14056D780 (KeQueryActiveProcessorAffinity.c)
 *     sub_140577F60 @ 0x140577F60 (sub_140577F60.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 *     sub_14057A2A0 @ 0x14057A2A0 (sub_14057A2A0.c)
 *     PoInitiateProcessorWake @ 0x1405C6DD0 (PoInitiateProcessorWake.c)
 *     sub_1405C87C0 @ 0x1405C87C0 (sub_1405C87C0.c)
 *     sub_1406CC024 @ 0x1406CC024 (sub_1406CC024.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_14095FD08 @ 0x14095FD08 (sub_14095FD08.c)
 *     sub_140962018 @ 0x140962018 (sub_140962018.c)
 *     sub_1409620D4 @ 0x1409620D4 (sub_1409620D4.c)
 *     sub_14098A510 @ 0x14098A510 (sub_14098A510.c)
 *     sub_1409E1514 @ 0x1409E1514 (sub_1409E1514.c)
 *     sub_140A062C8 @ 0x140A062C8 (sub_140A062C8.c)
 *     sub_140AF77F8 @ 0x140AF77F8 (sub_140AF77F8.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall sub_140300030(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  unsigned __int16 v5; // cx
  unsigned __int16 result; // ax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  char *v9; // r10
  __int64 v10; // rcx

  v5 = *a3;
  if ( *a3 > a2 )
    v5 = a2;
  *(_WORD *)a1 = v5;
  *(_WORD *)(a1 + 2) = a2;
  result = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v5 )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = v5;
    v9 = (char *)a3 - a1;
    result = v5;
    do
    {
      *v7 = *(_QWORD *)((char *)v7 + (_QWORD)v9);
      ++v7;
      --v8;
    }
    while ( v8 );
    a2 = *(_WORD *)(a1 + 2);
  }
  if ( result < a2 )
  {
    do
    {
      v10 = result++;
      *(_QWORD *)(a1 + 8 * v10 + 8) = 0LL;
    }
    while ( result < *(_WORD *)(a1 + 2) );
  }
  return result;
}
