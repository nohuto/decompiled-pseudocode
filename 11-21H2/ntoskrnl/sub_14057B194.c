/*
 * XREFs of sub_14057B194 @ 0x14057B194
 * Callers:
 *     sub_14057AEEC @ 0x14057AEEC (sub_14057AEEC.c)
 *     sub_14057B170 @ 0x14057B170 (sub_14057B170.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 */

void __fastcall sub_14057B194(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v4; // rax
  char v5; // di
  signed __int32 v6; // edx
  __int64 v7; // rcx
  __int64 **v8; // rax
  int v9; // eax
  BOOLEAN v10; // bl
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  unsigned __int64 v13; // [rsp+30h] [rbp-20h]
  __int16 v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+3Ah] [rbp-16h]
  char v16; // [rsp+3Bh] [rbp-15h]
  int v17; // [rsp+3Ch] [rbp-14h]
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v16 = 0;
  _InterlockedIncrement(&dword_140C2A8A0);
  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v13 = a1;
  v18[1] = v18;
  v18[0] = v18;
  v14 = 263;
  v15 = 6;
  v2 = qword_140C2A880 + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 16));
  if ( *(int *)(v2 + 24) > 0 )
    goto LABEL_5;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !qword_140C2A828 )
  {
    v4 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v4 )
      *(_BYTE *)(v4 + 16) = 1;
    goto LABEL_5;
  }
  if ( CurrentThread == *((struct _KTHREAD **)CurrentPrcb + 3) )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    if ( v7 )
      *(_BYTE *)(v7 + 16) = 1;
    goto LABEL_5;
  }
  if ( (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
  {
LABEL_5:
    --*(_DWORD *)(v2 + 24);
    v5 = 0;
    goto LABEL_6;
  }
  v8 = *(__int64 ***)(v2 + 8);
  v5 = 1;
  if ( *v8 != (__int64 *)v2 )
    __fastfail(3u);
  v12 = *(_QWORD *)(v2 + 8);
  v11 = v2;
  *v8 = &v11;
  *(_QWORD *)(v2 + 8) = &v11;
LABEL_6:
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_140C2A8B0);
    v6 = _InterlockedIncrement(&dword_140C2A8B4);
    do
      v9 = dword_140C2A8B8;
    while ( dword_140C2A8B8 < v6 && v9 != _InterlockedCompareExchange(&dword_140C2A8B8, v6, dword_140C2A8B8) );
    v10 = KeSetKernelStackSwapEnable(0);
    sub_140217454((__int64)&v14, 0x27u);
    KeSetKernelStackSwapEnable(v10);
    _InterlockedDecrement(&dword_140C2A8B4);
  }
}
