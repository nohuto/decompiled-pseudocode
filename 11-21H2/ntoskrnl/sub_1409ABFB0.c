/*
 * XREFs of sub_1409ABFB0 @ 0x1409ABFB0
 * Callers:
 *     sub_1407F8C6C @ 0x1407F8C6C (sub_1407F8C6C.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140639B54 @ 0x140639B54 (sub_140639B54.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140983EC0 @ 0x140983EC0 (sub_140983EC0.c)
 *     sub_1409DEDF8 @ 0x1409DEDF8 (sub_1409DEDF8.c)
 *     sub_140A08260 @ 0x140A08260 (sub_140A08260.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409ABFB0(char *P)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  void *v4; // rcx
  void *v5; // rcx
  ULONG_PTR v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  struct _KEVENT *v11; // rcx
  void *v12; // rcx

  v2 = (void *)*((_QWORD *)P + 124);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6B676244u);
    *((_QWORD *)P + 124) = 0LL;
  }
  sub_140983EC0((volatile __int64 *)P);
  v3 = P + 784;
  if ( *((_QWORD *)P + 99) || *((_QWORD *)P + 101) || *v3 )
    KeBugCheckEx(0x29u, (ULONG_PTR)v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x6D1uLL, 0LL);
  sub_140A08260(P + 912);
  v4 = (void *)*((_QWORD *)P + 108);
  if ( v4 )
  {
    sub_1409DEDF8(v4);
    *((_QWORD *)P + 108) = 0LL;
  }
  if ( *((_QWORD *)P + 161) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)P + 80);
    *((_QWORD *)P + 161) = 0LL;
  }
  v5 = (void *)*((_QWORD *)P + 129);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)P + 129) = 0LL;
  }
  v6 = *((_QWORD *)P + 130);
  if ( v6 )
  {
    sub_14026D048(v6, 1);
    *((_QWORD *)P + 130) = 0LL;
  }
  v7 = (void *)*((_QWORD *)P + 128);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x6C537350u);
    *((_QWORD *)P + 128) = 0LL;
  }
  if ( *((_QWORD *)P + 166) )
  {
    sub_14026D048(*((_QWORD *)P + 165), 1);
    v8 = (void *)*((_QWORD *)P + 166);
    *((_QWORD *)P + 165) = 0LL;
    ObfDereferenceObject(v8);
    *((_QWORD *)P + 166) = 0LL;
  }
  v9 = (void *)*((_QWORD *)P + 113);
  if ( v9 )
  {
    sub_140639B54(v9);
    *((_QWORD *)P + 113) = 0LL;
  }
  v10 = (void *)*((_QWORD *)P + 156);
  if ( v10 )
  {
    ZwClose(v10);
    *((_QWORD *)P + 156) = 0LL;
  }
  v11 = (struct _KEVENT *)*((_QWORD *)P + 164);
  if ( v11 )
  {
    KeSetEvent(v11, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 164), 0x65446953u);
    *((_QWORD *)P + 164) = 0LL;
  }
  v12 = (void *)*((_QWORD *)P + 157);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  ExFreePoolWithTag(P, 0x476C6953u);
}
