/*
 * XREFs of WheaConfigureErrorSource @ 0x140A55520
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x14084E340 (WheaAddErrorSourceDeviceDriver.c)
 *     sub_140AF9508 @ 0x140AF9508 (sub_140AF9508.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140643344 @ 0x140643344 (sub_140643344.c)
 */

__int64 __fastcall WheaConfigureErrorSource(signed int a1, __int64 a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rax
  char v14; // cl
  signed __int32 v16[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1;
  if ( (unsigned int)a1 > 0x10 )
    return (unsigned int)-1073741811;
  v4 = (volatile signed __int32 *)((char *)&unk_140D00C50 + 64 * (__int64)a1);
  v5 = -1073741823;
  v6 = sub_140347C10((__int64)&qword_140C10BC0, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C10BC0, 17LL, 0LL) )
    sub_14029F350((signed __int64 *)&qword_140C10BC0, 0, v6, (__int64)&qword_140C10BC0);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = sub_140347C10((__int64)&unk_140D00C50 + 64 * v2, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64(v4, 0LL) )
    sub_14029F120((unsigned __int64 *)&unk_140D00C50 + 8 * v2, v7, (__int64)&unk_140D00C50 + 64 * v2);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  if ( !*((_BYTE *)v4 + 8) )
  {
    *((_DWORD *)v4 + 3) = *(_DWORD *)a2;
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 )
      *((_QWORD *)v4 + 2) = v9;
    v10 = *(_QWORD *)(a2 + 16);
    if ( v10 )
      *((_QWORD *)v4 + 3) = v10;
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 )
      *((_QWORD *)v4 + 4) = v11;
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(a2 + 32);
    if ( !v12 )
    {
      if ( (int)v2 <= 11 || (_DWORD)v2 == 14 )
        goto LABEL_22;
      v12 = sub_140645A90;
    }
    *((_QWORD *)v4 + 5) = v12;
LABEL_22:
    v13 = *(_QWORD *)(a2 + 40);
    if ( v13 )
      *((_QWORD *)v4 + 6) = v13;
    _InterlockedOr(v16, 0);
    *((_BYTE *)v4 + 8) = 1;
    if ( byte_140CE1A88 )
      v5 = sub_140643344(v2);
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((char *)&unk_140D00C50 + 64 * v2);
  sub_1402AFC00((ULONG_PTR)&unk_140D00C50 + 64 * v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C10BC0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C10BC0);
  sub_1402AFC00((ULONG_PTR)&qword_140C10BC0);
  return v5;
}
