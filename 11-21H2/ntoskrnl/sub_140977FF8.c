/*
 * XREFs of sub_140977FF8 @ 0x140977FF8
 * Callers:
 *     sub_14057D2A8 @ 0x14057D2A8 (sub_14057D2A8.c)
 * Callees:
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_14096ECCC @ 0x14096ECCC (sub_14096ECCC.c)
 */

bool __fastcall sub_140977FF8(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v9; // di
  __int64 v10; // r14
  __int64 **v11; // rax
  __int64 v12; // r10
  __int64 **v13; // rax

  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  v10 = *((_QWORD *)CurrentThread + 23);
  sub_14030EB30((__int64)CurrentThread, v10);
  if ( !a4
    && ((sub_1403126F0(a1), v11 = sub_1403126F0(a2), !v12)
     || !v11
     || (__int64 **)v12 == v11
     || (*(_DWORD *)(v12 + 48) & 0x70) == 0x20)
    || (v13 = sub_1403126F0(a3)) == 0LL
    || ((_DWORD)v13[6] & 0x70) != 0x20 )
  {
    v9 = 0;
  }
  sub_14030EA00((__int64)CurrentThread, v10);
  if ( v9 )
    return (unsigned int)sub_14096ECCC(a3, 1) != 0;
  return v9;
}
