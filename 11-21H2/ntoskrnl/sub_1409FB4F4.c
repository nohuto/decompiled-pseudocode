/*
 * XREFs of sub_1409FB4F4 @ 0x1409FB4F4
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14085A828 @ 0x14085A828 (sub_14085A828.c)
 */

__int64 __fastcall sub_1409FB4F4(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // ebx

  v1 = PsAttachSiloToCurrentThread(a1);
  v2 = sub_14085A828();
  if ( v2 >= 0 )
    *(_QWORD *)(*((_QWORD *)sub_140347DB0() + 132) + 8LL) = 1LL;
  PsDetachSiloFromCurrentThread(v1);
  return (unsigned int)v2;
}
