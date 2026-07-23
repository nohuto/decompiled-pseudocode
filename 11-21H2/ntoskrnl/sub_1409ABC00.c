/*
 * XREFs of sub_1409ABC00 @ 0x1409ABC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_1402237B8 @ 0x1402237B8 (sub_1402237B8.c)
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFEFC @ 0x1406FFEFC (sub_1406FFEFC.c)
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 *     sub_1409ACBA0 @ 0x1409ACBA0 (sub_1409ACBA0.c)
 *     sub_1409B1F54 @ 0x1409B1F54 (sub_1409B1F54.c)
 */

LONG_PTR __fastcall sub_1409ABC00(_QWORD *Object)
{
  void *v2; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rdi

  v2 = sub_140204738((__int64)Object);
  if ( (unsigned int)sub_1402237B8(v3) != 3 )
    __int2c();
  sub_1409ACBA0();
  v4 = (void *)*((_QWORD *)v2 + 110);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)v2 + 110) = 0LL;
  }
  v5 = (void *)*((_QWORD *)v2 + 111);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)v2 + 111) = 0LL;
  }
  sub_1409B1F54(Object);
  sub_1409ABED8(Object);
  v6 = (void *)*((_QWORD *)v2 + 109);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)v2 + 109) = 0LL;
  }
  v7 = *((_DWORD *)v2 + 327);
  CurrentThread = KeGetCurrentThread();
  sub_1406FFEFC((__int64)Object, (__int64)CurrentThread);
  if ( Object[69] && (*((_DWORD *)Object + 267) & 0x2000) != 0 )
    sub_14025863C((__int64)Object, 13LL, v7, 0);
  sub_1406FFE90((__int64)Object, (__int64)CurrentThread);
  return ObfDereferenceObject(Object);
}
