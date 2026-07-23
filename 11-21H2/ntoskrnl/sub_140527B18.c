/*
 * XREFs of sub_140527B18 @ 0x140527B18
 * Callers:
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140527B18(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = _InterlockedIncrement(&dword_140D017D0);
  result = sub_14042A5E0(a1, v3);
  if ( (int)result >= 0 )
    *a2 = v3;
  return result;
}
