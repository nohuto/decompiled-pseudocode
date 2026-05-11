/*
 * XREFs of USBHwGetSetShort @ 0x1C0033F80
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetProperty @ 0x1C0033E28 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBHwGetSetShort(__int64 a1, __int16 a2, __int16 a3, __int16 a4, _WORD *a5, UCHAR a6)
{
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int16 v10; // [rsp+60h] [rbp+8h] BYREF

  v7 = a5;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v10 = 0;
  if ( (a6 & 0x80u) == 0 )
    v10 = *a5;
  result = USBHwGetSetProperty(
             a1,
             0x1Bu,
             a6 >> 7,
             a6,
             a4,
             a3,
             a2,
             *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 2LL),
             &v10,
             2u);
  if ( (a6 & 0x80u) != 0 && (int)result >= 0 )
    *v7 = v10;
  return result;
}
