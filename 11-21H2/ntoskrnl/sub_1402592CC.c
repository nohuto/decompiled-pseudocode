/*
 * XREFs of sub_1402592CC @ 0x1402592CC
 * Callers:
 *     sub_140303240 @ 0x140303240 (sub_140303240.c)
 *     sub_140521AC0 @ 0x140521AC0 (sub_140521AC0.c)
 * Callees:
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402592CC(char a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v4; // rcx

  if ( a1 )
  {
    result = qword_140D016E0;
    if ( qword_140D016E0 )
      result = sub_14042A5E0(1496727831LL, 1LL);
  }
  if ( a2 )
  {
    result = qword_140D088C0[0];
    v4 = *(_QWORD *)(qword_140D088C0[0] + 128);
    if ( v4 )
    {
      *(_QWORD *)(qword_140D088C0[0] + 128) = 0LL;
      return sub_140345190(v4, 0);
    }
  }
  return result;
}
