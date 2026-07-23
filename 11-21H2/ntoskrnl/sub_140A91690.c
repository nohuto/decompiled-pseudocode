/*
 * XREFs of sub_140A91690 @ 0x140A91690
 * Callers:
 *     sub_140259BE4 @ 0x140259BE4 (sub_140259BE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A91690(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( *(__int64 (__fastcall **)(PDEVICE_OBJECT, PIRP))(result + 328) == sub_140A9E540 )
  {
    result = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *(_QWORD *)a1 = result;
  }
  return result;
}
