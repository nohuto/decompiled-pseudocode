/*
 * XREFs of sub_14024D740 @ 0x14024D740
 * Callers:
 *     sub_1402FF4D0 @ 0x1402FF4D0 (sub_1402FF4D0.c)
 *     sub_1403AFA58 @ 0x1403AFA58 (sub_1403AFA58.c)
 * Callees:
 *     sub_14024D7B8 @ 0x14024D7B8 (sub_14024D7B8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14024D740(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR BugCheckParameter4; // rdx
  int v3; // ecx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( (int)sub_14024D7B8() < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, BugCheckParameter3, BugCheckParameter4);
  v3 = *(_DWORD *)(BugCheckParameter3 + 128);
  if ( ((v3 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 == 2 )
    {
      v4 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_WORD *)(v4 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
      result = *(_QWORD *)BugCheckParameter4;
      *(_QWORD *)v4 = *(_QWORD *)BugCheckParameter4;
      return result;
    }
    LODWORD(result) = -1073741637;
LABEL_10:
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x102uLL, BugCheckParameter3, (int)result);
  }
  result = sub_14042A5E0(BugCheckParameter3 + 40, BugCheckParameter4);
  if ( (int)result < 0 )
    goto LABEL_10;
  return result;
}
