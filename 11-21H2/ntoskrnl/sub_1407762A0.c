/*
 * XREFs of sub_1407762A0 @ 0x1407762A0
 * Callers:
 *     sub_140776650 @ 0x140776650 (sub_140776650.c)
 *     sub_140777D40 @ 0x140777D40 (sub_140777D40.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall sub_1407762A0(__int64 a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL) )
  {
    case 1:
      return &stru_140C44A60;
    case 2:
      return &stru_140C44E60;
    case 3:
      return &stru_140C44B60;
    case 4:
      return &stru_140C44F60;
    case 7:
      return &stru_140C44D60;
    case 0xB:
      return &stru_140C44C60;
  }
  return (struct _ERESOURCE *)v1;
}
