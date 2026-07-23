/*
 * XREFs of sub_1409EF4C4 @ 0x1409EF4C4
 * Callers:
 *     sub_14088399A @ 0x14088399A (sub_14088399A.c)
 *     sub_1409EF3C8 @ 0x1409EF3C8 (sub_1409EF3C8.c)
 *     sub_1409F209C @ 0x1409F209C (sub_1409F209C.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140460AEA @ 0x140460AEA (sub_140460AEA.c)
 *     sub_140883B44 @ 0x140883B44 (sub_140883B44.c)
 *     sub_1409EEA10 @ 0x1409EEA10 (sub_1409EEA10.c)
 *     sub_1409F12F0 @ 0x1409F12F0 (sub_1409F12F0.c)
 *     sub_1409F2898 @ 0x1409F2898 (sub_1409F2898.c)
 */

__int64 __fastcall sub_1409EF4C4(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // r12
  unsigned __int8 *v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // r9d
  unsigned int i; // r10d
  _QWORD *v17; // r13
  __int64 *v19; // [rsp+30h] [rbp-78h]
  _QWORD *v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int64 *v22; // [rsp+50h] [rbp-58h] BYREF
  PVOID P; // [rsp+58h] [rbp-50h]
  ULONG_PTR v24; // [rsp+60h] [rbp-48h]
  ULONG_PTR v25; // [rsp+68h] [rbp-40h]
  unsigned int v27; // [rsp+C8h] [rbp+20h]

  v4 = a2;
  v24 = BugCheckParameter2;
  v25 = BugCheckParameter2;
  v7 = 0;
  v22 = 0LL;
  v8 = 0;
  P = 0LL;
  v9 = qword_140C15D88;
  v10 = sub_1409F12F0(BugCheckParameter2);
  v27 = v10;
  if ( v10 < a3 )
  {
    sub_1409EEA10(BugCheckParameter2, v9, 1);
    v10 = v27;
  }
  v11 = 0LL;
  while ( v10 && (unsigned int)v11 < a3 )
  {
    v12 = (unsigned __int8 *)(v4 + 8 * v11);
    v19 = (__int64 *)v12;
    v13 = *(_QWORD *)(BugCheckParameter2 + 1192);
    if ( !v13 )
      goto LABEL_14;
    LODWORD(v21) = *(_DWORD *)(v24 + 28);
    HIDWORD(v21) = v21;
    v14 = sub_140460AEA(__PAIR64__(*(_DWORD *)v12, *((_DWORD *)v12 + 1)), v21);
    v15 = 1;
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 1208); ++i )
    {
      if ( (*(_BYTE *)(((*(_DWORD *)(BugCheckParameter2 + 1204) & ((unsigned int)v14 + i * HIDWORD(v14))) >> 3) + v13) & (unsigned __int8)(1 << (*(_BYTE *)(BugCheckParameter2 + 1204) & (v14 + i * BYTE4(v14)) & 7))) == 0 )
      {
        v15 = 0;
        break;
      }
    }
    if ( !v15 )
    {
      v12 = (unsigned __int8 *)v19;
LABEL_14:
      v17 = *(_QWORD **)(BugCheckParameter2 + 1168);
      while ( 1 )
      {
        v20 = v17;
        if ( (unsigned int)sub_140883B44((__int64)v17, v12, &v22) )
          break;
        v17 = (_QWORD *)*v17;
        v12 = (unsigned __int8 *)v19;
        if ( v17 == (_QWORD *)(BugCheckParameter2 + 1168) )
        {
          *v22 = *v19;
          ++*((_DWORD *)v20 + 4);
          ++v7;
          v10 = --v27;
          goto LABEL_19;
        }
      }
    }
    ++v8;
    v10 = v27;
LABEL_19:
    v11 = (unsigned int)(v11 + 1);
    v4 = a2;
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( P )
    sub_1409F2898(P);
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 616), v7);
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 620), v8);
  if ( a3 > v8 + v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 624), a3 - v8 - v7);
  return v7;
}
