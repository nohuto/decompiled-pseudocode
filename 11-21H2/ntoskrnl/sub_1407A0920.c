/*
 * XREFs of sub_1407A0920 @ 0x1407A0920
 * Callers:
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_14028AE3C @ 0x14028AE3C (sub_14028AE3C.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 */

char __fastcall sub_1407A0920(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  volatile unsigned __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // edi
  volatile signed __int64 *v8; // rax
  volatile __int64 *v9; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+20h] [rbp-18h]

  --*(_WORD *)(a1 + 486);
  v8 = (volatile signed __int64 *)sub_1407A1AC0(qword_140D06A60, a2);
  v13 = 0LL;
  v5 = *v8;
  *(_QWORD *)&v13 = *v8 & 0xFFFFFFFFFFFE0001uLL;
  *v8 = v13;
  v6 = qword_140D06A60;
  v7 = (unsigned __int16)(v5 >> 1);
  LOBYTE(v8) = _InterlockedExchangeAdd64(v8, 1uLL);
  v9 = (volatile __int64 *)(v6 + 48);
  _InterlockedOr(v12, 0);
  if ( *v9 )
    LOBYTE(v8) = ExfUnblockPushLock(v9, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v8 = (volatile signed __int64 *)(a1 + 152);
    if ( *(volatile signed __int64 **)v8 != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery();
  }
  if ( v7 )
    LOBYTE(v8) = sub_14028AE3C(a3);
  return (char)v8;
}
