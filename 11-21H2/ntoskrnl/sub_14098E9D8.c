/*
 * XREFs of sub_14098E9D8 @ 0x14098E9D8
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14098E9D8(PPROCESSOR_NUMBER ProcNumber)
{
  void *v2; // rdi
  __int64 i; // rcx
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebx
  ULONG ProcessorIndexFromNumber; // eax

  v2 = 0LL;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  if ( *(_DWORD *)ProcNumber < 0 )
  {
    for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
    {
      v4 = *(_DWORD *)(i + 296);
      v5 = 0;
      if ( v4 )
      {
        v6 = *(_QWORD *)(i + 312);
        while ( 1 )
        {
          v7 = 136LL * v5;
          if ( *(_DWORD *)(v7 + v6 + 16) == 1 && *(_DWORD *)(v7 + v6 + 20) == (*(_DWORD *)ProcNumber & 0x7FFFFFFF) )
            break;
          if ( ++v5 >= v4 )
            goto LABEL_10;
        }
        v8 = *(_QWORD *)(v7 + v6);
        if ( v8 )
          goto LABEL_16;
      }
LABEL_10:
      ;
    }
    goto LABEL_12;
  }
  if ( ProcNumber->Reserved
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
  {
LABEL_12:
    v9 = -1073741811;
    goto LABEL_17;
  }
  v8 = sub_140348800(ProcessorIndexFromNumber) + 33968;
LABEL_16:
  v2 = *(void **)(v8 + 24);
  *(_QWORD *)(v8 + 24) = 0LL;
  v9 = 0;
LABEL_17:
  sub_140224C00(&qword_140C22FE0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x704D5050u);
  return v9;
}
