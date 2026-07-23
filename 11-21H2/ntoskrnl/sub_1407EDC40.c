/*
 * XREFs of sub_1407EDC40 @ 0x1407EDC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369100 @ 0x140369100 (sub_140369100.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1407EDC40(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = *(_QWORD *)&SettingGuid->Data1 - 0x4344B427786E8A1DLL;
  if ( *(_QWORD *)&SettingGuid->Data1 == 0x4344B427786E8A1DLL )
    v4 = *(_QWORD *)SettingGuid->Data4 + 0x564123F418F6F86ELL;
  if ( !v4 && Value && ValueLength == 4 )
  {
    v5 = *Value;
    sub_140A48330((_DWORD)SettingGuid);
    if ( !v5 )
    {
      sub_140369100(2u);
      qword_140C22818 = 0LL;
      qword_140C22880 = 0LL;
      dword_140C22710 = 0;
    }
    sub_140A47CF8(v7, v6);
  }
  return 0LL;
}
