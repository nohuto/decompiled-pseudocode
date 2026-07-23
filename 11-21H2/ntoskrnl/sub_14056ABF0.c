/*
 * XREFs of sub_14056ABF0 @ 0x14056ABF0
 * Callers:
 *     sub_140299840 @ 0x140299840 (sub_140299840.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_14056ABF0(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, _QWORD *a3)
{
  ULONG_PTR v4; // rdx
  ULONG_PTR v5; // r10
  __int64 v6; // rax

  if ( !byte_140D06888 || *(_DWORD *)(BugCheckParameter2 + 24) != 3 )
    KeBugCheckEx(0x12u, 4uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter2 + 32));
  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  v5 = *(_QWORD *)(BugCheckParameter2 + 40);
  v6 = *(_QWORD *)(BugCheckParameter2 + 48);
  if ( a3 )
    *a3 = -1LL;
  if ( !v4 || v4 > 2 && v4 != 4 )
    KeBugCheckEx(0x18Du, v4, v5, BugCheckParameter2, BugCheckParameter3);
  *(_DWORD *)BugCheckParameter2 = 268435460;
  *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 24) = 2;
  if ( v4 == 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = 8LL;
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = v4 != 2;
    if ( a3 )
      *a3 = v6;
  }
  return 0;
}
