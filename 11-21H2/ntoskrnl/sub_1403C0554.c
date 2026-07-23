/*
 * XREFs of sub_1403C0554 @ 0x1403C0554
 * Callers:
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B1F300 @ 0x140B1F300 (sub_140B1F300.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403C0554(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // si
  int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  char v13; // bl
  struct _KTHREAD *v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // rbx
  unsigned int v17; // edx
  int v18; // r9d

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1B568, 0LL);
  v6 = dword_140C5AFD4;
  v7 = 0LL;
  if ( !dword_140C5AFD4 )
    goto LABEL_7;
  v8 = dword_140C1B580;
  while ( a1 != *v8 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 += 3;
    if ( (unsigned int)v7 >= dword_140C5AFD4 )
      goto LABEL_5;
  }
  v3 = 1;
LABEL_5:
  if ( (unsigned int)v7 < 0x20 )
  {
    if ( v3 )
    {
      v9 = (unsigned int)v7;
      goto LABEL_8;
    }
LABEL_7:
    v9 = (unsigned int)v7;
    v10 = 3 * v7;
    dword_140C1B580[2 * v10 + 4] = 0;
    dword_140C1B580[2 * v10 + 2] = 0;
    *(_QWORD *)&dword_140C1B580[2 * v10] = a1;
    dword_140C5AFD4 = v6 + 1;
LABEL_8:
    v11 = 3 * v9;
    dword_140C1B580[2 * v11 + 2] |= 1u;
    dword_140C1B580[2 * v11 + 3] = a2;
    if ( (a2 & 1) != 0 )
      dword_140C1B580[6 * v9 + 4] |= 0x100u;
    if ( (a2 & 2) != 0 )
      dword_140C1B580[6 * v9 + 4] |= 0x200u;
    if ( (a2 & 4) != 0 )
      dword_140C1B580[6 * v9 + 4] |= 0x400u;
    v12 = 0;
    goto LABEL_15;
  }
  v12 = -1073741823;
LABEL_15:
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1B568, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C1B568);
  v14 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C1B568 - qword_140C50630 < 0x8000000000LL )
    v15 = sub_140287F30(*((_QWORD *)v14 + 23));
  else
    v15 = -1;
  _disable();
  v16 = (__int64)v14 + 1696;
  v17 = 0;
  while ( (*(_QWORD *)v16 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C1B568 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v16 + 18)
       || (*(_DWORD *)v16 & 1) != 0
       || *(_DWORD *)(v16 + 8) != v15 )
  {
    ++v17;
    v16 += 96LL;
    if ( v17 >= 6 )
      goto LABEL_30;
  }
  *(_BYTE *)(v16 + 18) = 0;
  if ( v16 )
  {
    if ( *(__int64 *)v16 < 0 )
    {
      *(_BYTE *)v16 |= 2u;
      _enable();
      sub_14034EE30(v16);
      _disable();
    }
    v18 = *(_DWORD *)(v16 + 88);
    *(_DWORD *)(v16 + 88) = 0;
    *(_BYTE *)(v16 + 17) = 0;
    *(_QWORD *)v16 = 0LL;
    *((_BYTE *)v14 + 792) |= 1 << *(_BYTE *)(v16 + 16);
    _enable();
    if ( v18 )
      sub_14022B568((ULONG_PTR)v14, (__int64)&qword_140C1B568, v18);
    goto LABEL_28;
  }
LABEL_30:
  if ( (*((_DWORD *)v14 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&qword_140C1B568, v15, 0LL);
  _enable();
LABEL_28:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v12;
}
