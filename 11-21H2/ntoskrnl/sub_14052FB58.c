/*
 * XREFs of sub_14052FB58 @ 0x14052FB58
 * Callers:
 *     sub_14052FCD0 @ 0x14052FCD0 (sub_14052FCD0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14052FB58(unsigned __int64 *BugCheckParameter3, _DWORD *BugCheckParameter4)
{
  __int64 result; // rax

  if ( *BugCheckParameter4 == 1 )
  {
    *BugCheckParameter3 |= 0xFFFFFFFF00000000uLL;
    goto LABEL_8;
  }
  if ( *BugCheckParameter4 == 4 )
  {
    *BugCheckParameter3 = ((unsigned __int64)(unsigned int)BugCheckParameter4[2] << 32) | (unsigned int)*BugCheckParameter3;
LABEL_8:
    result = *BugCheckParameter3 & 0xFFFFFFFFFFFFFFFBuLL;
    goto LABEL_9;
  }
  if ( *BugCheckParameter4 != 6 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 0x20uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  *BugCheckParameter3 = (((unsigned int)BugCheckParameter4[3] | (unsigned __int64)(unsigned int)(BugCheckParameter4[2] << 16)) << 32) | (unsigned int)*BugCheckParameter3;
  result = *BugCheckParameter3 | 4;
LABEL_9:
  *BugCheckParameter3 = result;
  return result;
}
