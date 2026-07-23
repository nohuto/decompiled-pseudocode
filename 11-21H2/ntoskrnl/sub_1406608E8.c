/*
 * XREFs of sub_1406608E8 @ 0x1406608E8
 * Callers:
 *     sub_14066FCE4 @ 0x14066FCE4 (sub_14066FCE4.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14075A30C @ 0x14075A30C (sub_14075A30C.c)
 */

__int64 __fastcall sub_1406608E8(__int64 a1, unsigned __int64 *a2)
{
  int v3; // r14d
  NTSTATUS v4; // edi
  __int64 v5; // r12
  _QWORD *v6; // rax
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  NTSTATUS v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-28h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v3 = 0;
  v4 = 0;
  v5 = PsAttachSiloToCurrentThread(a1);
  v6 = sub_140347DB0();
  v7 = (char *)(v6 + 114);
  Data = v6[119];
  if ( Data )
    goto LABEL_11;
  v4 = sub_14075A30C(1LL, &KeyHandle);
  if ( v4 < 0 )
    goto LABEL_25;
  v8 = sub_140347C10((__int64)(v7 + 32), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
    sub_14029F120((unsigned __int64 *)v7 + 4, v8, (__int64)(v7 + 32));
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v3 = 1;
  if ( *((_QWORD *)v7 + 5) )
    goto LABEL_11;
  v10 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&stru_140A38308,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x18u,
          &ResultLength);
  v4 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741772 )
      goto LABEL_22;
    do
LABEL_11:
      v11 = _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
    while ( !v11 );
    Data = *((_QWORD *)v7 + 5);
    if ( v11 > Data )
    {
      if ( !KeyHandle )
      {
        v4 = sub_14075A30C(1LL, &KeyHandle);
        if ( v4 < 0 )
          goto LABEL_21;
      }
      if ( !v3 )
      {
        v14 = sub_140347C10((__int64)(v7 + 32), 0LL);
        v15 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
          sub_14029F120((unsigned __int64 *)v7 + 4, v14, (__int64)(v7 + 32));
        if ( v15 )
          *(_BYTE *)(v15 + 18) = 1;
        v3 = 1;
      }
      if ( v11 <= *((_QWORD *)v7 + 5) )
        goto LABEL_20;
      v12 = *((_QWORD *)v7 + 5) + 100LL;
      Data = v12;
      if ( v12 < v11 )
        Data = v12 + 100 * ((v11 - v12 - 1) / 0x64 + 1);
      v4 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38308, 0, 3u, &Data, 8u);
      if ( v4 < 0 )
      {
LABEL_21:
        if ( !v3 )
          goto LABEL_25;
        goto LABEL_22;
      }
      _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    }
LABEL_20:
    *a2 = v11;
    goto LABEL_21;
  }
  if ( *(_DWORD *)&KeyValueInformation[8] == 8 )
  {
    Data = *(_QWORD *)&KeyValueInformation[12];
    _InterlockedExchange64((volatile __int64 *)v7 + 3, *(__int64 *)&KeyValueInformation[12]);
    _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    goto LABEL_11;
  }
  v4 = -1073741823;
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7 + 32);
  sub_1402AFC00((ULONG_PTR)(v7 + 32));
LABEL_25:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)v4;
}
