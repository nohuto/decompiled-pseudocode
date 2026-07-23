/*
 * XREFs of sub_14020A620 @ 0x14020A620
 * Callers:
 *     sub_140688318 @ 0x140688318 (sub_140688318.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_14020A70C @ 0x14020A70C (sub_14020A70C.c)
 *     sub_140688290 @ 0x140688290 (sub_140688290.c)
 *     sub_14079878C @ 0x14079878C (sub_14079878C.c)
 *     sub_14079AE04 @ 0x14079AE04 (sub_14079AE04.c)
 */

__int64 __fastcall sub_14020A620(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _RTL_BITMAP *v6; // rdi
  int v10; // r9d
  __int64 v11; // rbx
  ULONG v12; // ebx
  unsigned int v13; // eax
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  LODWORD(v15) = 0;
  v6 = (_RTL_BITMAP *)(BugCheckParameter2 + 88);
  LODWORD(a6) = 0;
  if ( (unsigned __int8)sub_14079AE04(BugCheckParameter2, (__int64)&v15, (__int64)&a6, 0) )
  {
    v11 = a5;
    do
      sub_14020A70C(0, v15, a2, v10, a4, v11);
    while ( (unsigned __int8)sub_14079AE04(BugCheckParameter2, (__int64)&v15, (__int64)&a6, 0) );
  }
  v12 = RtlNumberOfSetBits(v6);
  v13 = sub_14079878C(v6);
  return sub_140688290(BugCheckParameter2, 2LL, v13, v12);
}
