/*
 * XREFs of sub_18003F0C8 @ 0x18003F0C8
 * Callers:
 *     sub_18003F4EC @ 0x18003F4EC (sub_18003F4EC.c)
 *     sub_18003F614 @ 0x18003F614 (sub_18003F614.c)
 * Callees:
 *     sub_18001EE0C @ 0x18001EE0C (sub_18001EE0C.c)
 */

__int64 __fastcall sub_18003F0C8(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rax
  unsigned int v4; // eax

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v3 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  LOBYTE(v4) = sub_18001EE0C((__int64)a1, v3, (__int64)a2, v2);
  return v4 >> 31;
}
