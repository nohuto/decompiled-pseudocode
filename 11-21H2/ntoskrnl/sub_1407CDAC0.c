/*
 * XREFs of sub_1407CDAC0 @ 0x1407CDAC0
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1406A1000 @ 0x1406A1000 (sub_1406A1000.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407CDBA0 @ 0x1407CDBA0 (sub_1407CDBA0.c)
 */

__int64 __fastcall sub_1407CDAC0(__int64 a1, __int64 a2)
{
  char v3; // si
  _QWORD *v4; // rdi

  v3 = a2;
  v4 = (_QWORD *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( v4 == qword_140C246D8 )
    KeBugCheckEx(0xF4u, (ULONG_PTR)v4, a1 + 48, 0LL, 0LL);
  if ( *(_QWORD *)(a1 + 40) )
    sub_14042A5E0(a1 + 48, 2LL);
  if ( v4[17] )
  {
    if ( !v3 )
      *(_BYTE *)(a1 + 27) |= 0x80u;
    sub_14042A5E0(a1 + 48, a2);
  }
  return sub_1407CDBA0(a1);
}
