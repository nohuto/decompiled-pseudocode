/*
 * XREFs of sub_140250B40 @ 0x140250B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140250B40(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 v3; // rcx

  if ( qword_140D06E28 != _byteswap_uint64(BugCheckParameter3 ^ __ROL8__(
                                                                  qword_140D06CC8 ^ *(_QWORD *)(BugCheckParameter3 + 136),
                                                                  qword_140D06CC8)) )
  {
    v3 = qword_140D06E28 ^ _byteswap_uint64(BugCheckParameter3 ^ __ROL8__(
                                                                   qword_140D06CC8 ^ *(_QWORD *)(BugCheckParameter3 + 144),
                                                                   qword_140D06CC8));
    sub_14042A5E0(v3, v3);
  }
  *(_BYTE *)(BugCheckParameter3 + 152) = ~byte_140D06991;
  return sub_140348B40(BugCheckParameter3);
}
