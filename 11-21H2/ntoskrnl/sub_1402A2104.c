/*
 * XREFs of sub_1402A2104 @ 0x1402A2104
 * Callers:
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_14065CFD4 @ 0x14065CFD4 (sub_14065CFD4.c)
 *     sub_140715D90 @ 0x140715D90 (sub_140715D90.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 *     sub_140923C08 @ 0x140923C08 (sub_140923C08.c)
 *     sub_1409242A4 @ 0x1409242A4 (sub_1409242A4.c)
 * Callees:
 *     sub_1402555BC @ 0x1402555BC (sub_1402555BC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1402A2104(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = BugCheckParameter4;
  sub_1407C97FC(&v6);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    result = sub_1406BF400(BugCheckParameter3, v3);
  else
    result = sub_1407C9820(BugCheckParameter3);
  if ( (*(_DWORD *)(result + 12))-- == 1 )
  {
    sub_1402555BC(BugCheckParameter3, v3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v6);
    else
      sub_1407C97C0(BugCheckParameter3, &v6);
    return sub_14079BD98(BugCheckParameter3, v3);
  }
  else if ( result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return sub_1406BF450(BugCheckParameter3, &v6);
    else
      return sub_1407C97C0(BugCheckParameter3, &v6);
  }
  return result;
}
