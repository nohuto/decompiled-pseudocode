/*
 * XREFs of sub_1C0022594 @ 0x1C0022594
 * Callers:
 *     sub_1C00224F4 @ 0x1C00224F4 (sub_1C00224F4.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     sub_1C0018B98 @ 0x1C0018B98 (sub_1C0018B98.c)
 *     sub_1C0019C38 @ 0x1C0019C38 (sub_1C0019C38.c)
 *     sub_1C001DFEC @ 0x1C001DFEC (sub_1C001DFEC.c)
 *     sub_1C0022670 @ 0x1C0022670 (sub_1C0022670.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1C0022594(__int64 a1, IRP *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  char v8; // bl
  struct _DEVICE_OBJECT *v10; // rcx

  v3 = *(_DWORD *)(a1 + 48) - 5;
  *(_DWORD *)(a1 + 48) = 6;
  if ( (v3 & 0xFFFFFFFD) != 0 )
    sub_1C001DFEC(a1);
  sub_1C000729C(a1);
  v5 = sub_1C0019C38(a1);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = v5;
  if ( *(_DWORD *)(v6 + 88) != 5 )
  {
    if ( sub_1C0004890(a1, 9) )
      sub_1C0018524(v6 + 336);
    if ( (*(_BYTE *)(a1 + 448) & 0x20) != 0 )
      sub_1C0022670(v6, a1);
    else
      sub_1C0018B98(v6, a1);
  }
  v8 = *(_BYTE *)(a1 + 448);
  sub_1C0016130(a1);
  if ( (v8 & 0x40) != 0 )
  {
    v10 = *(struct _DEVICE_OBJECT **)(v6 + 32);
    *(_BYTE *)(v6 + 106) = 1;
    IoInvalidateDeviceRelations(v10, BusRelations);
  }
  return sub_1C0003440(a2, 0, v7);
}
