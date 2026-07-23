/*
 * XREFs of sub_14039AD24 @ 0x14039AD24
 * Callers:
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14039AD24(unsigned int a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  *a2 = 0LL;
  *a3 = 0LL;
  result = a1;
  if ( qword_140D068A8 )
  {
    if ( a1 < *(_DWORD *)qword_140D068A8 )
    {
      v4 = *(_QWORD *)(qword_140D068A8 + 48);
      *a2 = *(_QWORD *)(1008 * result + v4 + 88);
      result = *(_QWORD *)(1008 * result + v4 + 80);
      *a3 = result;
    }
  }
  return result;
}
