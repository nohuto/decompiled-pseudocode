/*
 * XREFs of RtlLookupFunctionTable @ 0x18009F3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlLookupFunctionTable(void *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int64)a1 < *((_QWORD *)&xmmword_18019C530 + 1)
    || (unsigned __int64)a1 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64 *)&v6);
  }
  else
  {
    result = xmmword_18019C530;
    v6 = xmmword_18019C530;
    v7 = qword_18019C540;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
