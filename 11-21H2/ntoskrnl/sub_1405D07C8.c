/*
 * XREFs of sub_1405D07C8 @ 0x1405D07C8
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1405D3804 @ 0x1405D3804 (sub_1405D3804.c)
 */

void sub_1405D07C8()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // r8d
  PVOID *i; // rbx
  char v3; // r10

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
  for ( i = (PVOID *)qword_140C23140; i != &qword_140C23140; i = (PVOID *)*i )
  {
    LOBYTE(v1) = *((_BYTE *)i + 65);
    if ( (v1 & 2) != 0 )
    {
      v3 = v1 & 1;
      LOBYTE(v1) = (v1 & 4) != 0;
      sub_1405D3804(
        (unsigned int)i[6],
        (_DWORD)i + 1040,
        v1,
        *((unsigned __int8 *)i + 69),
        v3,
        *((_DWORD *)i + 20),
        *((_BYTE *)i + 72),
        *((_BYTE *)i + 73));
    }
  }
  sub_1402935D0((ULONG_PTR)&qword_140C222D0);
}
