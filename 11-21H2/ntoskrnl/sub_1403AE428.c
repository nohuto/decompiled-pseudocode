/*
 * XREFs of sub_1403AE428 @ 0x1403AE428
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     sub_140A70084 @ 0x140A70084 (sub_140A70084.c)
 *     sub_140A70244 @ 0x140A70244 (sub_140A70244.c)
 */

__int64 __fastcall sub_1403AE428(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  int v9; // ecx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1[4];
  v3 = a1[5];
  v11[0] = 56LL;
  v11[1] = a1;
  sub_140A70084(a1, a2);
  a1[6] = 0;
  if ( !a1[2] )
  {
    v6 = *a2;
    v7 = v6;
    if ( v2 < v6 )
      v7 = v2;
    v8 = v6 - v7;
    if ( v3 <= v8 )
      v8 = v3;
    if ( v7 && v8 )
      sub_140A70244(*((_QWORD *)a2 + 1), *((_QWORD *)a2 + 1) + v7, v8);
    a1[4] = v7;
    a1[5] = *a2;
    a1[6] = v8;
    v9 = *a2;
    if ( v8 == v9 || v8 && v8 + v7 == v9 )
      byte_140C31E40 = 1;
    *a2 = v8;
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int16 *, __int128 *))KdSendPacket)(
           2LL,
           v11,
           a2,
           &xmmword_140C31E60);
}
