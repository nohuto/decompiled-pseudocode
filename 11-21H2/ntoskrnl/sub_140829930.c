/*
 * XREFs of sub_140829930 @ 0x140829930
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403C1E10 @ 0x1403C1E10 (sub_1403C1E10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14098B290 @ 0x14098B290 (sub_14098B290.c)
 */

__int64 __fastcall sub_140829930(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // edi
  __int64 v3; // r9
  void *v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _DWORD v9[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(v9, 0, 0x108uLL);
  sub_1402D66A8((ULONG_PTR)&qword_140C23010);
  if ( !a1
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4)),
        ProcessorIndexFromNumber == -1) )
  {
    v7 = -1073741811;
    goto LABEL_10;
  }
  if ( !sub_1403C1E10() )
  {
    v6 = sub_14098B290(ProcessorIndexFromNumber, a1);
    goto LABEL_9;
  }
  v9[0] = 2097153;
  memset(&v9[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v9, ProcessorIndexFromNumber);
  if ( *(_BYTE *)(a1 + 17) )
  {
    v3 = 0LL;
    v4 = sub_1405C9200;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 116) )
    {
      v3 = 0LL;
      v4 = sub_1405C8980;
      v5 = 0LL;
      goto LABEL_8;
    }
    v3 = 3LL;
    v4 = sub_1403D1870;
  }
  v5 = a1;
LABEL_8:
  v6 = sub_140293A88((__int64)v9, (__int64)v4, v5, v3);
LABEL_9:
  v7 = v6;
LABEL_10:
  sub_1402935D0((ULONG_PTR)&qword_140C23010);
  return v7;
}
