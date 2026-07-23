/*
 * XREFs of sub_140927240 @ 0x140927240
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_14084ED2C @ 0x14084ED2C (sub_14084ED2C.c)
 */

__int64 __fastcall sub_140927240(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  int v4; // ebx

  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = sub_140204738(a1);
  v3[121] = 0LL;
  v4 = sub_14084ED2C((__int64)(v3 + 121));
  if ( v4 >= 0 )
    v4 = 0;
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v4;
}
