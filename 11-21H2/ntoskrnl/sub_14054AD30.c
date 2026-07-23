/*
 * XREFs of sub_14054AD30 @ 0x14054AD30
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

BOOLEAN __fastcall sub_14054AD30(PVOID Context, __int64 Handled)
{
  void *v2; // rbx
  __int64 v3; // rdx
  ULONG_PTR v4; // r9
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // rdx
  ULONG v7; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v2 = qword_140C48908;
  if ( qword_140C48908 && (*((_DWORD *)qword_140C48908 + 1) & 1) != 0 )
  {
    dword_140D0689C &= 0x2000u;
    sub_14042A5E0(Context, Handled);
    sub_14042A5E0(1LL, v3);
    byte_140D0194C = 1;
    v4 = *((_QWORD *)v2 + 4);
    v5 = *((_QWORD *)v2 + 3);
    v6 = *((_QWORD *)v2 + 2);
    v7 = *((_DWORD *)v2 + 2);
    BugCheckParameter4 = *((_QWORD *)v2 + 5);
    byte_140C22260 = 1;
    KeBugCheckEx(v7, v6, v5, v4, BugCheckParameter4);
  }
  return 0;
}
