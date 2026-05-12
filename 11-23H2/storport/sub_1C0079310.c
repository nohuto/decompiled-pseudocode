/*
 * XREFs of sub_1C0079310 @ 0x1C0079310
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001F11C @ 0x1C001F11C (sub_1C001F11C.c)
 */

void __fastcall sub_1C0079310(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  KIRQL v4; // cl
  PIRP *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  KIRQL Irql; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_BYTE *)(a2 + 69);
  Irql = 0;
  v5 = *(PIRP **)(v2 + 32);
  IoReleaseCancelSpinLock(v4);
  if ( v5 )
  {
    IoCancelIrp(v5[1]);
    IoAcquireCancelSpinLock(&Irql);
    v6 = *(_QWORD *)(a2 + 184);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 32) = 0LL;
    IoReleaseCancelSpinLock(Irql);
    if ( !v7 )
      sub_1C001F11C(a2, v5, v8);
  }
}
