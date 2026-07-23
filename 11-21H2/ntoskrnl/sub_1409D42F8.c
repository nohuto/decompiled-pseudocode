/*
 * XREFs of sub_1409D42F8 @ 0x1409D42F8
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140376B48 @ 0x140376B48 (sub_140376B48.c)
 */

__int64 __fastcall sub_1409D42F8(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // edx
  LARGE_INTEGER v10[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+58h] [rbp-28h] BYREF
  __int64 v13; // [rsp+5Ch] [rbp-24h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+74h] [rbp-Ch]
  int v18; // [rsp+7Ch] [rbp-4h]

  memset(&Event, 0, sizeof(Event));
  *(_OWORD *)&v10[0].LowPart = 0LL;
  if ( a3 != 24 )
    return 3221225990LL;
  if ( a4 )
    return 3221225485LL;
  if ( (unsigned __int8)*(_DWORD *)a2 != 6 )
    return 3221225561LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = 0LL;
  v14 = 0;
  v17 = 0LL;
  v18 = 0;
  v7 = (*(_DWORD *)a2 & 0x100) == 0;
  v12 = 4;
  if ( v7 )
    v8 = 5;
  else
    v8 = 4;
  v9 = *(_DWORD *)(a2 + 4);
  HIDWORD(v13) = v8;
  v16 = *(_DWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16);
  sub_140376B48(a1, v9, (int)&v12, (int)&Event, (__int64)v10);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = v10[0].LowPart;
  *(_DWORD *)(a2 + 8) = v16;
  return result;
}
