/*
 * XREFs of sub_140A084B0 @ 0x140A084B0
 * Callers:
 *     sub_140A082E4 @ 0x140A082E4 (sub_140A082E4.c)
 * Callees:
 *     sub_14085939C @ 0x14085939C (sub_14085939C.c)
 */

NTSTATUS __fastcall sub_140A084B0(int a1, int a2, int a3, HANDLE *a4)
{
  if ( a1 == 2 || a3 )
    return -1073741772;
  else
    return sub_14085939C(a1, a2, 0LL, (__int64)a4, (unsigned int)(a2 - 2) <= 1, 0, a4);
}
