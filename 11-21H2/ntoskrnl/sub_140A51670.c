/*
 * XREFs of sub_140A51670 @ 0x140A51670
 * Callers:
 *     sub_140524190 @ 0x140524190 (sub_140524190.c)
 *     sub_140524390 @ 0x140524390 (sub_140524390.c)
 *     sub_140A62BC0 @ 0x140A62BC0 (sub_140A62BC0.c)
 * Callees:
 *     sub_140396364 @ 0x140396364 (sub_140396364.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void sub_140A51670()
{
  ULONG_PTR *v0; // rbx
  __int64 v1; // rcx
  int v2; // eax

  v0 = (ULONG_PTR *)qword_140C4DE70;
  while ( v0 != &qword_140C4DE70 )
  {
    v1 = (__int64)v0;
    v0 = (ULONG_PTR *)*v0;
    v2 = sub_140396364(v1, 0);
    if ( v2 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, 3uLL, v2);
  }
  byte_140C547D0 = 1;
}
