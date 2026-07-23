/*
 * XREFs of sub_1403985E0 @ 0x1403985E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool __fastcall sub_1403985E0(char a1)
{
  __int32 v1; // ebx
  __int64 v2; // r8
  int v3; // eax
  __int64 v5; // r8
  int v6; // [rsp+20h] [rbp-60h]
  int v7; // [rsp+28h] [rbp-58h]
  __int32 v8; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9[2]; // [rsp+48h] [rbp-38h] BYREF
  __int32 *v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]

  v1 = _InterlockedExchange(&dword_140C4E350, 0);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C04538 > 5 && sub_1402A2000((__int64)&dword_140C04538, 0x400000000000LL) )
    {
      v12 = 0;
      v10 = &v8;
      v8 = v1;
      v11 = 4;
      sub_14024A9B0((__int64)&dword_140C04538, (unsigned __int8 *)&byte_140028341, v2, 1u, v6, v7, 3u, v9);
    }
    v3 = 9;
  }
  else
  {
    if ( (unsigned int)dword_140C04538 > 5 && sub_1402A2000((__int64)&dword_140C04538, 0x400000000000LL) )
    {
      v12 = 0;
      v10 = &v8;
      v8 = v1;
      v11 = 4;
      sub_14024A9B0((__int64)&dword_140C04538, (unsigned __int8 *)&word_140028306, v5, 1u, v6, v7, 3u, v9);
    }
    v3 = 31;
  }
  return (v3 & v1) != 0;
}
