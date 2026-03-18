/*
 * XREFs of CreateSharedReadPrimitiveColorMarshaler @ 0x1C0239AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadPrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C02396A8 (-Create@CSharedReadPrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEA.c)
 */

__int64 __fastcall CreateSharedReadPrimitiveColorMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedReadPrimitiveColorMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadPrimitiveColorMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedReadPrimitiveColorMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
