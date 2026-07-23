/*
 * XREFs of sub_14054AB60 @ 0x14054AB60
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

BOOLEAN __fastcall sub_14054AB60(PVOID Context, __int64 Handled)
{
  ULONG_PTR *v2; // rbx

  v2 = (ULONG_PTR *)qword_140C48908;
  if ( qword_140C48908 && (*((_DWORD *)qword_140C48908 + 1) & 1) != 0 )
  {
    sub_14042A5E0(1LL, Handled);
    byte_140D0194C = 1;
    KeBugCheckEx(0x20001u, v2[23], v2[24], v2[25], v2[26]);
  }
  return 0;
}
