/*
 * XREFs of IoDisconnectInterrupt @ 0x140816AA0
 * Callers:
 *     sub_14060EBB0 @ 0x14060EBB0 (sub_14060EBB0.c)
 *     sub_140816798 @ 0x140816798 (sub_140816798.c)
 *     IoDisconnectInterruptEx @ 0x140816A20 (IoDisconnectInterruptEx.c)
 *     sub_140816C88 @ 0x140816C88 (sub_140816C88.c)
 * Callees:
 *     KeRemoveQueueDpc @ 0x14024E180 (KeRemoveQueueDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403AEB30 @ 0x1403AEB30 (sub_1403AEB30.c)
 *     sub_1403AEB58 @ 0x1403AEB58 (sub_1403AEB58.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408176BC @ 0x1408176BC (sub_1408176BC.c)
 *     sub_1408177B8 @ 0x1408177B8 (sub_1408177B8.c)
 *     sub_14081788C @ 0x14081788C (sub_14081788C.c)
 *     sub_1408178F8 @ 0x1408178F8 (sub_1408178F8.c)
 *     sub_1409467F8 @ 0x1409467F8 (sub_1409467F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  __int64 *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char i; // bp
  __int64 v8; // r14
  ULONG_PTR v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _KTHREAD *v12; // r9
  char v13; // dl
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdi
  __int64 v20; // rdx
  _WORD *v21; // rcx
  __int64 v22; // rcx
  _WORD *v23; // rcx
  __int64 v24; // rcx
  _QWORD v25[10]; // [rsp+30h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  KeRemoveQueueDpc((PRKDPC)InterruptObject + 5);
  sub_1408177B8((char *)InterruptObject - 96, v25);
  v2 = *((_QWORD *)InterruptObject - 13) - ((*((_QWORD *)InterruptObject - 13) >> 1) & 0x5555555555555555LL);
  v3 = v2 & 0x3333333333333333LL;
  v4 = (0x101010101010101LL
      * (((v2 & 0x3333333333333333LL)
        + ((v2 >> 2) & 0x3333333333333333LL)
        + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( v25[3] )
  {
    LOBYTE(v3) = 1;
    sub_14081788C(v25, v3, 0LL);
  }
  v5 = (__int64 *)((char *)InterruptObject + 384);
  LOBYTE(v3) = v4;
  sub_1403AEB58((__int64 *)InterruptObject + 48, v3, (__int64)InterruptObject - 96);
  if ( v25[3] )
    sub_14081788C(v25, 0LL, 0LL);
  if ( *((_BYTE *)InterruptObject + 288) )
    sub_1409467F8(*((unsigned int *)InterruptObject - 21));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( *((_BYTE *)InterruptObject + 288) )
  {
    v12 = KeGetCurrentThread();
    v13 = 0;
    if ( (char)v4 <= 0 )
      goto LABEL_21;
    v14 = v4;
    do
    {
      v15 = *v5++;
      if ( *(struct _KTHREAD **)(v15 + 152) == v12 )
        v13 = 1;
      --v14;
    }
    while ( v14 );
    if ( !v13 )
LABEL_21:
      KeWaitForSingleObject((char *)InterruptObject + 296, Executive, 0, 0, 0LL);
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  for ( i = 0; i < (char)v4; ++i )
  {
    v8 = *((_QWORD *)InterruptObject + (unsigned __int8)i + 48);
    v9 = *(_QWORD *)(v8 + 280);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 312);
      v11 = *(_QWORD *)(v10 + 40);
      if ( !v11 || (*(_DWORD *)(v11 + 396) & 0x20000) != 0 )
      {
        sub_1403D99B4(*(_QWORD *)(v8 + 280), (PVOID)*(unsigned __int16 *)(v9 + 2));
        v16 = *(_QWORD *)(v9 + 8);
        if ( v16 )
        {
          sub_1403D99B4(v16, (PVOID)(unsigned int)*(__int16 *)(v16 + 2));
          v17 = (_WORD *)(*(_QWORD *)(v9 + 8) + 56LL);
          if ( *v17 )
          {
            sub_1403D99B4((ULONG)v17, (PVOID)2);
            sub_1403D99B4(
              *(_QWORD *)(*(_QWORD *)(v9 + 8) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v9 + 8) + 56LL));
          }
        }
        v18 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
        if ( v18 )
        {
          v19 = (unsigned __int16 *)(v18 + 40);
          sub_1403D99B4(v18, (PVOID)0x310);
          if ( *v19 )
          {
            sub_1403D99B4((ULONG)v19, (PVOID)2);
            sub_1403D99B4(*((_QWORD *)v19 + 1), (PVOID)*v19);
          }
          v20 = *(_QWORD *)(v9 + 312);
          v21 = (_WORD *)(*(_QWORD *)(v20 + 40) + 56LL);
          if ( *v21 )
          {
            sub_1403D99B4((ULONG)v21, (PVOID)2);
            sub_1403D99B4(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 56LL));
            v20 = *(_QWORD *)(v9 + 312);
          }
          v22 = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 16LL);
          if ( v22 )
          {
            v23 = (_WORD *)(v22 + 56);
            if ( *v23 )
            {
              sub_1403D99B4((ULONG)v23, (PVOID)2);
              v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 16LL);
              sub_1403D99B4(*(_QWORD *)(v24 + 64), (PVOID)*(unsigned __int16 *)(v24 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, v9, 0LL, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 96));
      ObfDereferenceObjectWithTag((PVOID)v9, 0x54706E50u);
      *(_QWORD *)(v8 + 280) = 0LL;
    }
    sub_1403AEB30((PSLIST_ENTRY)v8);
  }
  sub_1408176BC(v25);
  ExFreePoolWithTag((char *)InterruptObject - 112, 0);
  sub_1408178F8(0LL);
}
