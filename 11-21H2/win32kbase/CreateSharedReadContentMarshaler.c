/*
 * XREFs of CreateSharedReadContentMarshaler @ 0x1C0238AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadContentMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C02388F4 (-Create@CSharedReadContentMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 */

__int64 __fastcall CreateSharedReadContentMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedReadContentMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadContentMarshaler *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  result = DirectComposition::CSharedReadContentMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
