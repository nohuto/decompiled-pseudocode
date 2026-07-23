/*
 * XREFs of sub_1406EA7D0 @ 0x1406EA7D0
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     sub_14025E1EC @ 0x14025E1EC (sub_14025E1EC.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsSetProcessFaultInformation @ 0x1406D40C0 (PsSetProcessFaultInformation.c)
 *     sub_14079FFE8 @ 0x14079FFE8 (sub_14079FFE8.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 *     sub_14092A168 @ 0x14092A168 (sub_14092A168.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 */

bool __fastcall sub_1406EA7D0(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rsi
  void *v8; // rbx
  char v9; // r14
  __int64 v11; // r8
  int v12; // esi
  int v13; // eax
  int v14[4]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v15[17]; // [rsp+30h] [rbp-D0h] BYREF

  *(_QWORD *)v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a3 )
  {
    v14[0] = 1;
    PsSetProcessFaultInformation(*((_QWORD *)KeGetCurrentThread() + 23), v14);
  }
  DWORD2(v15[2]) = 0;
  *(_QWORD *)&v15[0] = 0x800D000A8LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD *)*((_QWORD *)CurrentThread + 23);
  if ( a2 )
  {
    if ( (*((_DWORD *)KeGetCurrentThread() + 344) & 4) != 0 )
      v8 = 0LL;
    else
      v8 = (void *)v7[175];
    v9 = 0;
  }
  else
  {
    v8 = (void *)sub_14079FFE8(*((_QWORD *)CurrentThread + 23));
    DWORD1(v15[0]) = 7;
    v9 = 1;
  }
  if ( !v8 && a2 )
    return 0;
  sub_14025E1EC(&v15[3], a1);
  DWORD2(v15[12]) = a3 == 0;
  if ( v9 )
  {
    if ( v8 )
    {
      LOBYTE(v11) = a2;
      v12 = sub_14092A168(v15, v8, v11);
      ObfDereferenceObject(v8);
    }
    else
    {
      v12 = 0;
      HIDWORD(v15[2]) = -2147418111;
    }
  }
  else
  {
    v12 = sub_14092A070(v7);
  }
  if ( v12 < 0 )
    return 0;
  v13 = HIDWORD(v15[2]);
  if ( HIDWORD(v15[2]) == -2147418111 )
  {
    if ( a2 )
      return 0;
    v13 = sub_14092A29C(a1, 2LL, v15);
  }
  return v13 >= 0;
}
