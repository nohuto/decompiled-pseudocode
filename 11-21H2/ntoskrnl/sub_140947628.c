/*
 * XREFs of sub_140947628 @ 0x140947628
 * Callers:
 *     sub_140766834 @ 0x140766834 (sub_140766834.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_1409589A4 @ 0x1409589A4 (sub_1409589A4.c)
 */

__int64 __fastcall sub_140947628(__int64 a1, _DWORD *a2, UNICODE_STRING *a3)
{
  struct _DEVICE_OBJECT *v6; // rbp
  int v7; // esi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x305:
    case 0x306:
    case 0x308:
    case 0x309:
    case 0x30A:
      sub_140767220(a1, 512);
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v7 = sub_1409589A4(v6);
      if ( v7 < 0 )
      {
        sub_140766C3C(v6, 3);
        *a2 = 6;
        RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(a1 + 40));
      }
      else
      {
        sub_1402DE844(a1, 786);
      }
      sub_14074A08C(a1, 512);
      result = (unsigned int)v7;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
