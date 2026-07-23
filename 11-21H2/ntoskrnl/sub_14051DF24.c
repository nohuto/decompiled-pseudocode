/*
 * XREFs of sub_14051DF24 @ 0x14051DF24
 * Callers:
 *     sub_14051DFC0 @ 0x14051DFC0 (sub_14051DFC0.c)
 *     sub_14051DFE0 @ 0x14051DFE0 (sub_14051DFE0.c)
 *     sub_14051E020 @ 0x14051E020 (sub_14051E020.c)
 * Callees:
 *     sub_140396364 @ 0x140396364 (sub_140396364.c)
 *     sub_1403AE924 @ 0x1403AE924 (sub_1403AE924.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14051DF24(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  int v5; // eax

  v2 = *(_DWORD *)(BugCheckParameter3 + 232);
  if ( (_BYTE)a2 )
  {
    result = v2 & 0xFFFFFFFB;
    *(_DWORD *)(BugCheckParameter3 + 232) = result;
    if ( (result & 2) == 0 )
    {
      v5 = sub_1403AE924(BugCheckParameter3, a2);
      if ( v5 < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, dword_140C4ADB0, BugCheckParameter3, v5);
      result = sub_140396364(BugCheckParameter3, 0);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, dword_140C4ADB0, BugCheckParameter3, (int)result);
    }
  }
  else
  {
    result = v2 & 0xFFFFFFFA | 4;
    *(_DWORD *)(BugCheckParameter3 + 232) = result;
  }
  return result;
}
