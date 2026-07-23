/*
 * XREFs of RtlWalkFrameChain @ 0x140295F90
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     sub_140374FC8 @ 0x140374FC8 (sub_140374FC8.c)
 *     sub_14053E958 @ 0x14053E958 (sub_14053E958.c)
 *     sub_140568930 @ 0x140568930 (sub_140568930.c)
 *     sub_14063130C @ 0x14063130C (sub_14063130C.c)
 *     sub_140631A8C @ 0x140631A8C (sub_140631A8C.c)
 *     sub_140636208 @ 0x140636208 (sub_140636208.c)
 *     sub_1406E8628 @ 0x1406E8628 (sub_1406E8628.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_140883ABA @ 0x140883ABA (sub_140883ABA.c)
 *     sub_1409E7AD4 @ 0x1409E7AD4 (sub_1409E7AD4.c)
 *     sub_1409F92FC @ 0x1409F92FC (sub_1409F92FC.c)
 * Callees:
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140297EF0 @ 0x140297EF0 (sub_140297EF0.c)
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // edi
  ULONG v5; // ebx
  ULONG v6; // esi
  ULONG result; // eax
  int v8; // ebp
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE )
    return 0;
  if ( Count == -1 )
    return 0;
  v8 = (Flags & 2) == 0;
  v5 = v8 + (Flags >> 8);
  v6 = v8 + Count;
  if ( !(unsigned int)sub_140297EF0() && (v4 & 1) != 0 )
    return 0;
  v9[0] = 0LL;
  v10 = 0LL;
  if ( !(unsigned __int8)sub_1402AB970(&v10, v9) || (unsigned __int64)(sub_14041FAB0() - v10) < 0xE30 )
    return 0;
  result = sub_140296110(Callers, v6, v4, v5);
  if ( result )
    result -= v8;
  return result;
}
