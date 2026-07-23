/*
 * XREFs of sub_140A8C69C @ 0x140A8C69C
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140A920D0 @ 0x140A920D0 (sub_140A920D0.c)
 *     sub_140A9235C @ 0x140A9235C (sub_140A9235C.c)
 */

__int64 __fastcall sub_140A8C69C(__int64 a1, __int64 a2)
{
  void *v3; // rax
  void *v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( !a2 )
  {
    v3 = (void *)sub_140A920D0(a1);
    if ( !v3 )
      return 1LL;
    ObfDereferenceObjectWithTag(v3, 0x49667256u);
    return 4LL;
  }
  sub_140A9235C(a1, a2, &v6);
  switch ( v6 )
  {
    case 0:
      return 2LL;
    case 1:
      return 3LL;
    case 2:
      return 2LL;
    case 3:
    case 4:
      return 3LL;
  }
  if ( v6 != 5 )
    return 2LL;
  v5 = (void *)sub_140A920D0(a1);
  if ( !v5 )
    return 5LL;
  ObfDereferenceObjectWithTag(v5, 0x49667256u);
  return 6LL;
}
