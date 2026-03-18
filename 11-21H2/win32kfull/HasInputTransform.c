/*
 * XREFs of HasInputTransform @ 0x1C01F0070
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 */

bool __fastcall HasInputTransform(int a1)
{
  __int64 v1; // rcx
  bool result; // al

  v1 = HMValidateHandleNoSecure(a1, 1);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 272) != 0LL;
  return result;
}
