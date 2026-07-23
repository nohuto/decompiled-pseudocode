/*
 * XREFs of sub_140847F40 @ 0x140847F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 *     sub_1405FCF84 @ 0x1405FCF84 (sub_1405FCF84.c)
 *     sub_140847F98 @ 0x140847F98 (sub_140847F98.c)
 */

void __fastcall sub_140847F40(LPCGUID SourceId, ULONG ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  unsigned int i; // ebx
  ULONG_PTR v5; // rax

  if ( ControlCode <= 1 && (dword_140D3253C = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    sub_140847F98(&qword_140D32530, &unk_140D31A00, Level);
    if ( sub_140261818(3) )
    {
      for ( i = 0; i < 0x400; ++i )
      {
        v5 = sub_14035F5AC((__int64)&unk_140D31A00, i);
        if ( v5 )
          sub_1405FCF84((__int64)&unk_140D31A00, v5);
      }
    }
  }
}
