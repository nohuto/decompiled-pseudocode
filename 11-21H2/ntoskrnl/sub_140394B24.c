/*
 * XREFs of sub_140394B24 @ 0x140394B24
 * Callers:
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140394B24(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  __int64 v2; // r9
  int v4; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter2 + 88);
  v4 = *(_DWORD *)(BugCheckParameter2 + 80);
  if ( v4 < 0 )
  {
    result = 65537LL;
    if ( v4 == -1073741275 )
    {
      if ( (*(_QWORD *)(48LL * *(_QWORD *)(BugCheckParameter2 + 320) - 0x21FFFFFFFFE8LL) & 0x4000000000000000LL) == 0 )
        KeBugCheckEx(0x1Au, 0x6000uLL, BugCheckParameter2, 0xFFFFFFFFC0000225uLL, 0LL);
    }
    else if ( v4 != -1073741791 )
    {
      result = 65539LL;
      goto LABEL_3;
    }
    *(_DWORD *)(BugCheckParameter2 + 80) = -1073741801;
    goto LABEL_3;
  }
  result = ((_DWORD)v2 << 16) | 1u;
  *(_QWORD *)(BugCheckParameter2 + 88) = (unsigned __int64)(unsigned __int16)v2 << 12;
LABEL_3:
  *a2 = result;
  return result;
}
