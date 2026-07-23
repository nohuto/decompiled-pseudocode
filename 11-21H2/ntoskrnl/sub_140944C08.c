/*
 * XREFs of sub_140944C08 @ 0x140944C08
 * Callers:
 *     sub_14094FBA0 @ 0x14094FBA0 (sub_14094FBA0.c)
 *     sub_14094FC28 @ 0x14094FC28 (sub_14094FC28.c)
 *     sub_14094FCD4 @ 0x14094FCD4 (sub_14094FCD4.c)
 *     sub_14094FF34 @ 0x14094FF34 (sub_14094FF34.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14094488C @ 0x14094488C (sub_14094488C.c)
 *     sub_140950AE4 @ 0x140950AE4 (sub_140950AE4.c)
 */

__int64 __fastcall sub_140944C08(__int128 *Source1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( Source1 == (__int128 *)sub_14003A3A0 )
    goto LABEL_10;
  if ( RtlCompareMemory(Source1, sub_14003A3A0, 0x10uLL) != 16
    && Source1 != &xmmword_140014AB0
    && RtlCompareMemory(Source1, &xmmword_140014AB0, 0x10uLL) != 16
    && Source1 != (__int128 *)sub_140014AC0
    && RtlCompareMemory(Source1, sub_140014AC0, 0x10uLL) != 16 )
  {
    return 3221225488LL;
  }
  if ( RtlCompareMemory(Source1, sub_14003A3A0, 0x10uLL) != 16 )
    return sub_140950AE4((_DWORD)Source1, 0, 0, 0, 0LL);
LABEL_10:
  if ( a2 != 1 )
    return sub_14094488C((__int64 (__fastcall __far *)())Source1, a3, a4);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = sub_140950AE4((_DWORD)Source1, (unsigned int)&Event, (unsigned int)&v10, (_DWORD)a3, (__int64)a4);
  if ( (int)result >= 0 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return v10;
  }
  return result;
}
