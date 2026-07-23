/*
 * XREFs of sub_1409AC6C0 @ 0x1409AC6C0
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_140861984 @ 0x140861984 (sub_140861984.c)
 */

__int64 __fastcall sub_1409AC6C0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 1464);
  v5 = 0;
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = sub_140861984(&v5);
  PsDetachSiloFromCurrentThread(v2);
  if ( v3 >= 0 )
    *(_BYTE *)(*(_QWORD *)(v1 + 1320) + 28LL) = v5;
  return (unsigned int)v3;
}
