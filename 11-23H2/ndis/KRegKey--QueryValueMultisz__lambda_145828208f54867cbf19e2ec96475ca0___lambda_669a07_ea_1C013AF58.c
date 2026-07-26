/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C013AF58
 * Callers:
 *     ndisLoadNamedFilterAltitudes @ 0x1C013CDC8 (ndisLoadNamedFilterAltitudes.c)
 * Callees:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C013AD44 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0(
        HANDLE *a1)
{
  __int64 v1; // rdx
  const wchar_t *v2; // rax
  __int64 result; // rax
  _UNICODE_STRING v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v1 = 0x7FFFLL;
  v2 = L"NamedAltitudes";
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v1;
  }
  while ( v1 );
  result = v1 == 0 ? 0xC000000D : 0;
  if ( v1 )
  {
    v4.Buffer = L"NamedAltitudes";
    v4.Length = 2 * (0x7FFF - v1);
    v4.MaximumLength = v4.Length + 2;
    return KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
             a1,
             &v4);
  }
  return result;
}
