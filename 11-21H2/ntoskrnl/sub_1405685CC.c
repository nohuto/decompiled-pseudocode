/*
 * XREFs of sub_1405685CC @ 0x1405685CC
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     sub_1403C1C58 @ 0x1403C1C58 (sub_1403C1C58.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140568AB8 @ 0x140568AB8 (sub_140568AB8.c)
 *     sub_140568CA4 @ 0x140568CA4 (sub_140568CA4.c)
 */

__int64 __fastcall sub_1405685CC(void *Src, size_t Size)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // r14d
  __int64 v5; // rdx
  int v6; // esi
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r9
  int v9; // r14d
  unsigned int v10; // edi
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r10
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v15; // r11
  int v16; // eax
  bool v17; // zf
  struct _KTHREAD *v18; // rdi
  unsigned int v19; // ecx
  __int64 v20; // rbx
  unsigned int v21; // edx
  int v22; // r8d
  _OWORD v24[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v25; // [rsp+70h] [rbp+17h]
  int v26; // [rsp+78h] [rbp+1Fh]

  memset(v24, 0, sizeof(v24));
  v25 = 0LL;
  v26 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = Size;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2BD70, 0LL);
  v6 = sub_140568AB8(Src, v3);
  if ( v6 >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
      *(_DWORD *)(v8 + 20) |= v5;
    }
    v9 = (int)dword_140D0502C;
    v10 = (unsigned int)dword_140D0502C;
    if ( !(_DWORD)dword_140D0502C && (dword_140D05024 || dword_140D05020) )
      v10 = 266240;
    LODWORD(dword_140D0502C) = v10;
    dword_140D0533C = v10 >> 3;
    sub_140568CA4(0LL, v5, 2LL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= v12 && CurrentIrql <= v12 && v13 >= v11 )
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
    sub_1403C1C58((__int64)v24, v9, v10);
    sub_14035BB4C(dword_140D06E40, (__int64)sub_140568AA0, (__int64)v24, 2);
    v6 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2BD70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2BD70);
  v18 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C2BD70 - qword_140C50630 >= 0x8000000000LL )
    v19 = -1;
  else
    v19 = sub_140287F30(*((_QWORD *)v18 + 23));
  _disable();
  v20 = (__int64)v18 + 1696;
  v21 = 0;
  while ( (*(_QWORD *)v20 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C2BD70 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v20 + 18)
       || (*(_DWORD *)v20 & 1) != 0
       || *(_DWORD *)(v20 + 8) != v19 )
  {
    ++v21;
    v20 += 96LL;
    if ( v21 >= 6 )
      goto LABEL_29;
  }
  *(_BYTE *)(v20 + 18) = 0;
  if ( !v20 )
  {
LABEL_29:
    if ( (*((_DWORD *)v18 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&qword_140C2BD70, v19, 0LL);
    _enable();
    goto LABEL_37;
  }
  if ( *(__int64 *)v20 < 0 )
  {
    *(_BYTE *)v20 |= 2u;
    _enable();
    sub_14034EE30(v20);
    _disable();
  }
  v22 = *(_DWORD *)(v20 + 88);
  *(_DWORD *)(v20 + 88) = 0;
  *(_BYTE *)(v20 + 17) = 0;
  *(_QWORD *)v20 = 0LL;
  *((_BYTE *)v18 + 792) |= 1 << *(_BYTE *)(v20 + 16);
  _enable();
  if ( v22 )
    sub_14022B568((ULONG_PTR)v18, (__int64)&qword_140C2BD70, v22);
LABEL_37:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}
