/*
 * XREFs of sub_14080A01C @ 0x14080A01C
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_14098D0C0 @ 0x14098D0C0 (sub_14098D0C0.c)
 *     sub_14098D49C @ 0x14098D49C (sub_14098D49C.c)
 *     sub_14098D650 @ 0x14098D650 (sub_14098D650.c)
 *     sub_14098E0AC @ 0x14098E0AC (sub_14098E0AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14080A01C(int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = qword_140C23CA0;
  result = 0LL;
  while ( (__int64 *)v1 != &qword_140C23CA0 )
  {
    result = v1;
    if ( !v1 || *(_DWORD *)(v1 + 16) == a1 )
      break;
    v1 = *(_QWORD *)v1;
  }
  return result;
}
