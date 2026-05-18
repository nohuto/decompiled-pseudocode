/*
 * XREFs of sub_18007BF80 @ 0x18007BF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall sub_18007BF80(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  bool result; // al

  result = 1;
  if ( a1 != a2 )
  {
    v3 = _RTtypeid(a1);
    v4 = _RTtypeid(a2);
    if ( (unsigned int)_std_type_info_compare(v3 + 8, v4 + 8) )
      return 0;
  }
  return result;
}
