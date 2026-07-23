/*
 * XREFs of KiTraceSetTimer2 @ 0x14057DA94
 * Callers:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x14031E2A8 (KiUpdateTimer2Flags.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiTraceCancelTimer2 @ 0x140462DE8 (KiTraceCancelTimer2.c)
 */

__int64 __fastcall KiTraceSetTimer2(__int64 a1, char a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  __int64 v7; // r15
  char v8; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  char v13; // cl
  char v14; // dl
  char v15; // cl
  _QWORD *v17; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+38h] [rbp-48h]
  int v19; // [rsp+3Ch] [rbp-44h]
  _QWORD v20[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  unsigned __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 72);
  v25 = 0LL;
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_BYTE *)(a1 + 129);
  v20[0] = v3;
  v20[1] = *(_QWORD *)(a1 + 80);
  v21 = *(_QWORD *)(a1 + 88);
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, a3, 0);
  if ( a3 == 1 )
    KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
  v10 = __ROL8__(v6 ^ KiWaitNever, KiWaitNever);
  v11 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v7 ^ KiWaitNever, KiWaitNever));
  v12 = KiWaitAlways ^ _byteswap_uint64(a1 ^ v10);
  if ( a2 )
    KiTraceCancelTimer2(a1, v12);
  v23 = v12;
  v22 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v12 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
  v24 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v11), KiWaitNever));
  v13 = (2 * (v8 & 2)) | 8;
  if ( (v8 & 4) == 0 )
    v13 = 2 * (v8 & 2);
  v14 = v13;
  v15 = v13 | 0x10;
  if ( (v8 & 8) == 0 )
    v15 = v14;
  LOBYTE(v25) = v15;
  if ( v12 )
  {
    v15 |= 1u;
    LOBYTE(v25) = v15;
  }
  if ( v21 )
    LOBYTE(v25) = v15 | 2;
  v19 = 0;
  v17 = v20;
  v18 = 56;
  return EtwTraceKernelEvent((int)&v17, 1, 0x40020000u, 3944, 6298370);
}
