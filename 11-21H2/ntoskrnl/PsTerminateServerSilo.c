/*
 * XREFs of PsTerminateServerSilo @ 0x1409AB9B0
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     sub_1409B1558 @ 0x1409B1558 (sub_1409B1558.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     sub_1406D78E0 @ 0x1406D78E0 (sub_1406D78E0.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  struct _KEVENT *v2; // rcx

  if ( a1 )
  {
    if ( sub_14020A400(a1) )
      sub_1406D78E0(v2, v1, 0);
  }
}
