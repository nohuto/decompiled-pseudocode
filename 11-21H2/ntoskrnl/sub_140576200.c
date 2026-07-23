/*
 * XREFs of sub_140576200 @ 0x140576200
 * Callers:
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_140223B10 @ 0x140223B10 (sub_140223B10.c)
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

bool __fastcall sub_140576200(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  unsigned __int64 v6; // rsi
  char v7; // r14
  bool v8; // r12
  __int64 v9; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r14
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  char v19; // [rsp+31h] [rbp-CFh]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h]
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+64h] [rbp-9Ch]
  int v24; // [rsp+6Ch] [rbp-94h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  void *v26; // [rsp+78h] [rbp-88h]
  __int128 *p_Object; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  struct _KTIMER v31; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v32[2]; // [rsp+E0h] [rbp-20h] BYREF

  v23 = 0LL;
  v24 = 0;
  v28 = 0LL;
  v29 = 0LL;
  memset(v32, 0, sizeof(v32));
  Object = 0LL;
  v21 = 0LL;
  memset(&v31, 0, sizeof(v31));
  v6 = *(unsigned __int8 *)(a1 + 93);
  v19 = 0;
  v7 = 1;
  v8 = 0;
  if ( (_BYTE)v6 )
  {
    if ( CurrentIrql != (_BYTE)v6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v6);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v6 - 2) <= 0xDu )
        {
          v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v9 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v6 + 1)) - 1) & 0xFFFFFFFC;
        }
      }
    }
    if ( ((*(_QWORD *)(a1 + 72) + 3LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      v7 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v8 = (WORD2(xmmword_140D06900) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && dword_140C0C6E0 )
    {
      *((_QWORD *)&v21 + 1) = a1;
      *(_QWORD *)&v21 = (char *)&Object + 8;
      LOWORD(Object) = 1;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      v31.Header.WaitListHead.Blink = &v31.Header.WaitListHead;
      DWORD1(Object) = 0;
      v31.Header.WaitListHead.Flink = &v31.Header.WaitListHead;
      v26 = &sub_140576540;
      p_Object = &Object;
      v31.Header.Type = 8;
      v31.Header.SignalState = 0;
      v31.DueTime.QuadPart = 0LL;
      v31.Period = 0;
      LOWORD(v31.Processor) = 0;
      v22 = 275;
      v30 = 0LL;
      v25 = 0LL;
      sub_1402E2D20((unsigned __int64)&v31, -10000000LL * dword_140C0C6E0, 0, 0, (__int64)&v22);
      v19 = 1;
    }
    v7 = 1;
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    sub_140223A20((unsigned __int64)v32, 0x20004000uLL);
  v11 = sub_140294110(a1, v7);
  v12 = v11;
  if ( v8 )
    sub_140223B10(a1, (a3 << 8) | v11, (__int64)v32);
  if ( v19 && !KeCancelTimer(&v31) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( (_BYTE)v6 )
  {
    if ( CurrentIrql != (_BYTE)v6 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return v12 == 1;
}
