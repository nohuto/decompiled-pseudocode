/*
 * XREFs of SmpConfigureFileRenames @ 0x140019330
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x14000741C (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureFileRenames(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_14002C668 )
  {
    result = SmpSaveRegistryValue(a6, (const WCHAR *)qword_14002C668, a3, 0, 0LL);
    qword_14002C668 = 0LL;
  }
  else
  {
    qword_14002C668 = (__int64)a3;
    return 0LL;
  }
  return result;
}
