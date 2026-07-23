/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1406F8010
 * Callers:
 *     sub_1402D89E8 @ 0x1402D89E8 (sub_1402D89E8.c)
 *     sub_140617B10 @ 0x140617B10 (sub_140617B10.c)
 *     sub_1406F60E8 @ 0x1406F60E8 (sub_1406F60E8.c)
 *     sub_1406F6A30 @ 0x1406F6A30 (sub_1406F6A30.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1407A4774 @ 0x1407A4774 (sub_1407A4774.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 *     sub_1407E4374 @ 0x1407E4374 (sub_1407E4374.c)
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 *     sub_140967328 @ 0x140967328 (sub_140967328.c)
 *     sub_1409D9B80 @ 0x1409D9B80 (sub_1409D9B80.c)
 *     sub_1409DA070 @ 0x1409DA070 (sub_1409DA070.c)
 *     sub_1409DA634 @ 0x1409DA634 (sub_1409DA634.c)
 *     sub_140A1A5D0 @ 0x140A1A5D0 (sub_140A1A5D0.c)
 * Callees:
 *     sub_140281480 @ 0x140281480 (sub_140281480.c)
 *     sub_140281620 @ 0x140281620 (sub_140281620.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  _QWORD *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v1 = (_QWORD *)((unsigned __int64)SecureHandle ^ qword_140C50680 ^ *((_QWORD *)KeGetCurrentThread() + 23));
  v2 = sub_140281620((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    sub_140281480(v2, v1);
    sub_14032E700(v3);
  }
}
