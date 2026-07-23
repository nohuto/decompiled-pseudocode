/*
 * XREFs of sub_1409331A0 @ 0x1409331A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409331A0(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  char v9; // al
  _DWORD v11[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v11, 0, 0x68uLL);
  v6 = *(_QWORD *)&SettingGuid->Data1;
  v7 = 0x470FEAA4E1233993LL - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == 0x470FEAA4E1233993LL )
    v7 = 0x71FBB6C151A3E79DLL - *(_QWORD *)SettingGuid->Data4;
  if ( v7 )
  {
    v8 = 0x43CEE09B307BCC77LL - v6;
    if ( v6 == 0x43CEE09B307BCC77LL )
      v8 = 0xA704FB6F7546978DuLL - *(_QWORD *)SettingGuid->Data4;
    if ( v8 )
      return 3221225659LL;
    v11[6] = 2;
  }
  else
  {
    v11[6] = 1;
  }
  v9 = v11[2];
  if ( *Value )
    v9 = 1;
  LOBYTE(v11[2]) = v9;
  return sub_140358A20(2u, 62, 0, (__int64)v11);
}
