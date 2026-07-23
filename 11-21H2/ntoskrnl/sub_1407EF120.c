/*
 * XREFs of sub_1407EF120 @ 0x1407EF120
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407ED88C @ 0x1407ED88C (sub_1407ED88C.c)
 *     sub_140809408 @ 0x140809408 (sub_140809408.c)
 *     sub_14080A454 @ 0x14080A454 (sub_14080A454.c)
 *     sub_14080C220 @ 0x14080C220 (sub_14080C220.c)
 *     sub_140819D40 @ 0x140819D40 (sub_140819D40.c)
 *     sub_140828BC0 @ 0x140828BC0 (sub_140828BC0.c)
 *     sub_14099C730 @ 0x14099C730 (sub_14099C730.c)
 *     sub_14099C8F8 @ 0x14099C8F8 (sub_14099C8F8.c)
 *     sub_14099CAD0 @ 0x14099CAD0 (sub_14099CAD0.c)
 *     sub_14099CB50 @ 0x14099CB50 (sub_14099CB50.c)
 *     sub_14099CBC8 @ 0x14099CBC8 (sub_14099CBC8.c)
 *     sub_14099CCC4 @ 0x14099CCC4 (sub_14099CCC4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 *     sub_14099CDDC @ 0x14099CDDC (sub_14099CDDC.c)
 */

void sub_1407EF120()
{
  char v0; // bl
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v0 = byte_140C1F3A0;
  v1 = dword_140C1F3B8;
  qword_140D3B2C0 = 0LL;
  *(_WORD *)((char *)&v5 + 1) = 0;
  BYTE3(v5) = 0;
  ExReleaseResourceLite(&stru_140C1F420);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    v8 = 0;
    v7 = xmmword_1400256E0;
    sub_14099CDDC(v1, v2, v3, &v7);
    v4 = v1;
    v6 = 7LL;
    v5 = 0LL;
    sub_1407FE82C(&v5, &v4);
  }
}
