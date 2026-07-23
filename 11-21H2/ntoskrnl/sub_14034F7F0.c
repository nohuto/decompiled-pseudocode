/*
 * XREFs of sub_14034F7F0 @ 0x14034F7F0
 * Callers:
 *     sub_140232528 @ 0x140232528 (sub_140232528.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_14036E0E4 @ 0x14036E0E4 (sub_14036E0E4.c)
 *     sub_14036E174 @ 0x14036E174 (sub_14036E174.c)
 *     sub_14036E388 @ 0x14036E388 (sub_14036E388.c)
 *     sub_14037193C @ 0x14037193C (sub_14037193C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

char __fastcall sub_14034F7F0(int a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  _DWORD *v4; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  ULONG_PTR v8; // rbp
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v10; // edx
  __int64 v11; // rsi
  unsigned int i; // r8d
  int v13; // r8d
  struct _KTHREAD *v14; // rcx
  bool v15; // zf
  int v16; // eax
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a1 )
  {
    v3 = *(unsigned __int8 *)(a2 + 16);
    v4 = *(_DWORD **)(a2 + 8);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      sub_14063D8B0(v4, retaddr);
    else
      *v4 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v6 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v16 = *(_DWORD *)(v6 + 24) - 1;
        *(_DWORD *)(v6 + 24) = v16;
        if ( !v16 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    LOBYTE(v7) = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v7) = KeGetCurrentIrql();
        if ( (unsigned __int8)v7 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v7 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v7 = -1LL << ((unsigned __int8)v3 + 1);
          v18 = *((_QWORD *)v17 + 4375);
          v19 = ~(unsigned __int16)v7;
          v15 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v15 )
            LOBYTE(v7) = sub_140418E4C(v17);
        }
      }
    }
    __writecr8(v3);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    CurrentThread = KeGetCurrentThread();
    if ( v8 - qword_140C50630 < 0x8000000000LL )
      v10 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v10 = -1;
    _disable();
    v11 = (__int64)CurrentThread + 1696;
    for ( i = 0; i < 6; ++i )
    {
      if ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v11 + 18)
        && (*(_DWORD *)v11 & 1) == 0
        && *(_DWORD *)(v11 + 8) == v10 )
      {
        *(_BYTE *)(v11 + 18) = 0;
        if ( *(__int64 *)v11 < 0 )
        {
          *(_BYTE *)v11 |= 2u;
          _enable();
          sub_14034EE30(v11);
          _disable();
        }
        v13 = *(_DWORD *)(v11 + 88);
        *(_DWORD *)(v11 + 88) = 0;
        *(_BYTE *)(v11 + 17) = 0;
        *(_QWORD *)v11 = 0LL;
        LOBYTE(v7) = *(_BYTE *)(v11 + 16);
        *((_BYTE *)CurrentThread + 792) |= 1 << v7;
        _enable();
        if ( v13 )
          LOBYTE(v7) = sub_14022B568((ULONG_PTR)CurrentThread, v8, v13);
        goto LABEL_20;
      }
      v11 += 96LL;
    }
    LODWORD(v7) = *((_DWORD *)CurrentThread + 30);
    if ( (v7 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8, v10, 0LL);
    _enable();
LABEL_20:
    v14 = KeGetCurrentThread();
    v15 = (*((_WORD *)v14 + 243))++ == 0xFFFF;
    if ( v15 )
    {
      v7 = (__int64)v14 + 152;
      if ( *(_QWORD *)v7 != v7 )
        LOBYTE(v7) = KiCheckForKernelApcDelivery();
    }
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return v7;
}
