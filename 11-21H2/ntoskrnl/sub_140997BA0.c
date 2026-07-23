/*
 * XREFs of sub_140997BA0 @ 0x140997BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 */

__int64 __fastcall sub_140997BA0(LPCGUID SettingGuid, unsigned int *Value, ULONG ValueLength, PVOID Context)
{
  unsigned int v4; // r14d
  __int64 v7; // r9
  BOOL v8; // esi
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  int v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h]

  v4 = SettingGuid->Data4[7];
  v15 = xmmword_140025E90;
  HIBYTE(v15) = v4;
  v7 = -*(_QWORD *)&SettingGuid->Data1;
  if ( !*(_QWORD *)&SettingGuid->Data1 )
    v7 = *((_QWORD *)&v15 + 1) - *(_QWORD *)SettingGuid->Data4;
  v8 = v7 == 0;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  if ( ValueLength != 4 || !Value )
    goto LABEL_13;
  v9 = *Value;
  if ( v9 > 0x64 )
    v9 = 100;
  v10 = sub_140348800(v4);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 33976);
    if ( v11 )
    {
      if ( v8 )
        *(_DWORD *)(v11 + 48) = v9;
      else
        *(_DWORD *)(v11 + 52) = v9;
    }
    v12 = 0;
  }
  else
  {
LABEL_13:
    v12 = -1073741811;
  }
  v14 = 14;
  sub_140849940(&v14);
  return v12;
}
