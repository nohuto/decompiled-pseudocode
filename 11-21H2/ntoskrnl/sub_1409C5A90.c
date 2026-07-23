/*
 * XREFs of sub_1409C5A90 @ 0x1409C5A90
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14066B900 @ 0x14066B900 (sub_14066B900.c)
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 *     sub_1406BBC4C @ 0x1406BBC4C (sub_1406BBC4C.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 */

__int64 __fastcall sub_1409C5A90(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbp
  signed int v5; // ebx

  if ( PsIsHostSilo(a1) )
    KeBugCheckEx(0x33u, 0LL, 0LL, 0LL, 0LL);
  v2 = (__int64 *)sub_140204738(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  v5 = sub_1406BBC4C((__int64)&qword_140A37C38);
  if ( v5 >= 0 )
  {
    v5 = sub_14066B900(&qword_140A37C38, a1, v2 + 92);
    if ( v5 >= 0 )
    {
      v5 = sub_1406BBC4C((__int64)&qword_140A37C20);
      if ( v5 < 0 )
        goto LABEL_9;
      v5 = sub_14066B900(&qword_140A37C20, a1, v2 + 93);
      if ( v5 >= 0 )
      {
        v5 = sub_140847FF0() == 0 ? 0xC0000001 : 0;
        goto LABEL_9;
      }
    }
    sub_14069BDD0(&qword_140A37C38, 0);
  }
LABEL_9:
  PsDetachSiloFromCurrentThread(v4);
  return (unsigned int)v5;
}
