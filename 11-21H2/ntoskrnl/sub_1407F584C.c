/*
 * XREFs of sub_1407F584C @ 0x1407F584C
 * Callers:
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 * Callees:
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     sub_1402A188C @ 0x1402A188C (sub_1402A188C.c)
 *     sub_140373D18 @ 0x140373D18 (sub_140373D18.c)
 *     sub_1406EBF2C @ 0x1406EBF2C (sub_1406EBF2C.c)
 */

int sub_1407F584C()
{
  __int64 v0; // rdi
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v0 = *((_QWORD *)KeGetCurrentThread() + 23);
  v4 = v0;
  v1 = sub_1402A1124((ULONG_PTR)&qword_140D321C8, &v4, 0LL, 0);
  v2 = v1;
  if ( v1 || dword_140D321F0 != -1 )
  {
    LODWORD(v1) = sub_140373D18();
    if ( v2 )
    {
      LODWORD(v1) = sub_1402A188C(v0, &v5);
      if ( (int)v1 >= 0 )
        LODWORD(v1) = sub_1406EBF2C(0);
    }
  }
  return v1;
}
