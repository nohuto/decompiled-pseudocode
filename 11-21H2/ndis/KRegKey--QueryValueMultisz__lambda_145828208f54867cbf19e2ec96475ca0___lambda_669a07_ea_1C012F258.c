/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C012F258
 * Callers:
 *     ndisLoadNamedFilterAltitudes @ 0x1C0130F48 (ndisLoadNamedFilterAltitudes.c)
 * Callees:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C012F068 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0(
        HANDLE *a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  signed int v4; // ecx
  __int16 v5; // dx
  _UNICODE_STRING v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"NamedAltitudes";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = v2 == 0 ? 0xC000000D : 0;
  if ( v2 )
  {
    v5 = 2 * v2;
    v7.Buffer = L"NamedAltitudes";
    v7.Length = -2 - v5;
    v7.MaximumLength = -v5;
  }
  if ( v4 >= 0 )
    return KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
             a1,
             &v7);
  else
    return (unsigned int)v4;
}
