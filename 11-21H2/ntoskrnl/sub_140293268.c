/*
 * XREFs of sub_140293268 @ 0x140293268
 * Callers:
 *     sub_14020EFEC @ 0x14020EFEC (sub_14020EFEC.c)
 *     sub_140293218 @ 0x140293218 (sub_140293218.c)
 *     sub_140572094 @ 0x140572094 (sub_140572094.c)
 *     sub_1406F2278 @ 0x1406F2278 (sub_1406F2278.c)
 *     sub_140852250 @ 0x140852250 (sub_140852250.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_1402944C4 @ 0x1402944C4 (sub_1402944C4.c)
 */

ULONG __fastcall sub_140293268(__int64 a1, _WORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 *v7; // r11
  unsigned int v8; // ecx
  BYTE v9; // al
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  v7 = &qword_140D08390[4 * *(unsigned __int16 *)(a1 + 8)];
  if ( (*(_QWORD *)a1 & ~v7[3]) != 0 )
    v4 = *(_QWORD *)a1 & ~v7[3];
  if ( a3 )
  {
    if ( (dword_140D0507C & 4) != 0 )
    {
      v8 = 0;
      if ( a4 )
      {
        while ( (*a3 & v4) == 0 )
        {
          ++v8;
          ++a3;
          if ( v8 >= a4 )
            goto LABEL_8;
        }
        v4 &= *a3;
      }
    }
  }
LABEL_8:
  v9 = sub_1402944C4(v4, *v7, v7[2], (unsigned __int16)*a2);
  ProcNumber = 0;
  *a2 = v9;
  ProcNumber.Group = *(_WORD *)(a1 + 8);
  ProcNumber.Number = v9;
  return KeGetProcessorIndexFromNumber(&ProcNumber);
}
