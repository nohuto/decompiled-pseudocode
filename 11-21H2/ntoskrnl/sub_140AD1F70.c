/*
 * XREFs of sub_140AD1F70 @ 0x140AD1F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 */

__int64 __fastcall sub_140AD1F70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 2240) )
  {
    *(_QWORD *)(a3 + 2256) = 0LL;
    *(_QWORD *)(a3 + 2272) = a1;
    *(_QWORD *)(a3 + 2248) = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 2264) = 272LL;
    *(_DWORD *)(a3 + 2240) = 1;
    return sub_140AD049C(a3, 0LL);
  }
  return result;
}
