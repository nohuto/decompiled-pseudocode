/*
 * XREFs of USBParseMIDIElement @ 0x1C0035740
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildMIDIFunctionUnit @ 0x1C0030DD0 (BusApiBuildMIDIFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1C003559C (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v6; // eax
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // r15d
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  int v16; // edx
  int UnitString; // esi
  int v18; // ebp
  int *Pool2; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int *v22; // r14
  unsigned int v23; // ecx
  __int64 v24; // rdx
  const WCHAR *v26; // [rsp+70h] [rbp+8h] BYREF

  v6 = *a3;
  if ( (unsigned __int8)v6 < 5u )
    return 3221225858LL;
  v8 = a3[4];
  v9 = v6;
  if ( v6 < (unsigned __int64)(2 * v8 + 5) )
    return 3221225858LL;
  v10 = (unsigned __int64)&a3[2 * v8 + 5];
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  v11 = v7 + *(unsigned __int16 *)(v7 + 2);
  if ( v10 > v11 )
    return 3221225858LL;
  v12 = 0;
  v26 = 0LL;
  v13 = 0;
  if ( v6 < (unsigned __int64)(2 * v8 + 9) )
    return 3221225858LL;
  v14 = *(unsigned __int8 *)(v10 + 3);
  v15 = v14 + 2 * (v8 + 5);
  if ( v9 < v15 || (unsigned __int64)&a3[v15] > v11 )
    return 3221225858LL;
  v16 = *(unsigned __int8 *)(v10 + 3);
  if ( (_BYTE)v14 )
  {
    do
    {
      v13 = *(unsigned __int8 *)((unsigned int)(v16 * v14 - 1) + v10 + 4) | (v13 << 8);
      --v16;
    }
    while ( v16 );
  }
  UnitString = USBParseGetUnitString(a1, a3, &v26);
  if ( UnitString >= 0 )
  {
    UnitString = -1073741670;
    v18 = *(unsigned __int8 *)(a2 + 2) << 8;
    Pool2 = (int *)ExAllocatePool2(256LL, 4LL * a3[4], 1096972357LL);
    v22 = Pool2;
    if ( Pool2 )
    {
      LOBYTE(v23) = a3[4];
      if ( (_BYTE)v23 )
      {
        do
        {
          v24 = v12++;
          Pool2[v24] = v18 | a3[2 * v24 + 5];
          v23 = a3[4];
        }
        while ( v12 < v23 );
      }
      UnitString = BusApiBuildMIDIFunctionUnit(
                     a1,
                     v18 | (unsigned int)a3[3],
                     v20,
                     v21,
                     (unsigned __int8)v23,
                     Pool2,
                     v26,
                     v13);
      ExFreePool(v22);
    }
  }
  return (unsigned int)UnitString;
}
