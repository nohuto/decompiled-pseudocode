/*
 * XREFs of RtlStringExHandleOtherFlagsW @ 0x180082E7C
 * Callers:
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180082CB4 (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall RtlStringExHandleOtherFlagsW(_WORD *a1, size_t a2, __int64 a3, _QWORD *a4, size_t *a5, __int16 a6)
{
  size_t v7; // rdi
  _WORD *v10; // rax

  v7 = a2 >> 1;
  if ( a2 >> 1 && (a6 & 0x1000) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  if ( (a6 & 0x400) == 0 )
  {
LABEL_7:
    if ( !v7 )
      return 0LL;
    goto LABEL_8;
  }
  memset_0(a1, (unsigned __int8)a6, a2);
  if ( !(_BYTE)a6 )
  {
    *a4 = a1;
    *a5 = v7;
    goto LABEL_7;
  }
  if ( !v7 )
    return 0LL;
  *a5 = 1LL;
  v10 = &a1[v7 - 1];
  *a4 = v10;
  *v10 = 0;
LABEL_8:
  if ( (a6 & 0x800) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  return 0LL;
}
