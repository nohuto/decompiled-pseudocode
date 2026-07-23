/*
 * XREFs of sub_14084CB58 @ 0x14084CB58
 * Callers:
 *     sub_14084CA10 @ 0x14084CA10 (sub_14084CA10.c)
 *     sub_140B22004 @ 0x140B22004 (sub_140B22004.c)
 * Callees:
 *     sub_1406958D0 @ 0x1406958D0 (sub_1406958D0.c)
 */

__int64 sub_14084CB58()
{
  unsigned int v0; // edx
  __int64 result; // rax
  char v2; // al
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0;
  if ( !qword_140D3B098 )
    goto LABEL_4;
  result = sub_1406958D0(qword_140D3B098, L"CrashOnAuditFail", 4, 4u, &v3);
  v0 = result;
  if ( v3 > 2 )
    return result;
  v2 = 1;
  if ( v3 != 1 )
LABEL_4:
    v2 = 0;
  byte_140C5B0D8 = v2;
  return v0;
}
