/*
 * XREFs of sub_140756164 @ 0x140756164
 * Callers:
 *     sub_1407557F0 @ 0x1407557F0 (sub_1407557F0.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140672A7C @ 0x140672A7C (sub_140672A7C.c)
 *     sub_140756AD4 @ 0x140756AD4 (sub_140756AD4.c)
 */

__int64 __fastcall sub_140756164(ULONG_PTR a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v7; // ebp
  int v8; // edi
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( a1 == *((_QWORD *)KeGetCurrentThread() + 23) )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    sub_14030D5C0(a1, 0LL, (__int64)&v12, a4);
  }
  v8 = 0;
  v9 = (__int64 *)off_140D3B180;
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9
      && (!v8 || (*(_DWORD *)(v10 + 8) & 8) != 0 && *(_QWORD *)(a1 + 1408) && v8 == (unsigned int)sub_140672A7C(a1)) )
    {
      v4 = sub_140756AD4(
             a1,
             v10,
             a2,
             0LL,
             v12,
             *((_QWORD *)&v12 + 1),
             v13,
             *((_QWORD *)&v13 + 1),
             v14,
             *((_QWORD *)&v14 + 1));
      if ( v4 < 0 )
        break;
    }
    ++v8;
    ++v9;
    if ( v8 >= 6 )
      goto LABEL_9;
  }
  if ( v8 )
    v4 = -1073741405;
LABEL_9:
  if ( v7 )
    sub_1402D0930((__int64)&v12, 0LL);
  return (unsigned int)v4;
}
