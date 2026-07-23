/*
 * XREFs of sub_1409A15B0 @ 0x1409A15B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DB4A4 @ 0x1403DB4A4 (sub_1403DB4A4.c)
 */

__int64 __fastcall sub_1409A15B0(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  char v5; // bl

  v4 = *(_QWORD *)&SettingGuid->Data1 - 0x43CEE09B307BCC77LL;
  if ( *(_QWORD *)&SettingGuid->Data1 == 0x43CEE09B307BCC77LL )
    v4 = *(_QWORD *)SettingGuid->Data4 + 0x58FB04908AB96873LL;
  if ( !v4 )
  {
    v5 = *Value != 0;
    if ( v5 != byte_140C1C378 )
    {
      sub_1403DB4A4((ULONG_PTR)&qword_140C1C840, *Value != 0);
      byte_140C1C378 = v5;
    }
  }
  return 0LL;
}
