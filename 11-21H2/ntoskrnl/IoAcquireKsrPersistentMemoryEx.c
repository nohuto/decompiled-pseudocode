/*
 * XREFs of IoAcquireKsrPersistentMemoryEx @ 0x1409407A0
 * Callers:
 *     IoAcquireKsrPersistentMemory @ 0x140940770 (IoAcquireKsrPersistentMemory.c)
 * Callees:
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 */

__int64 __fastcall IoAcquireKsrPersistentMemoryEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rdi
  __int64 v16; // rdx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // rcx

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v11 || (*(_DWORD *)(v11 + 396) & 0x20000) != 0 )
    {
      sub_1403D99B4(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v12 = *(_QWORD *)(a2 + 8);
      if ( v12 )
      {
        sub_1403D99B4(v12, (PVOID)(unsigned int)*(__int16 *)(v12 + 2));
        v13 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v13 )
        {
          sub_1403D99B4((ULONG)v13, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v14 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v14 )
      {
        v15 = (unsigned __int16 *)(v14 + 40);
        sub_1403D99B4(v14, (PVOID)0x310);
        if ( *v15 )
        {
          sub_1403D99B4((ULONG)v15, (PVOID)2);
          sub_1403D99B4(*((_QWORD *)v15 + 1), (PVOID)*v15);
        }
        v16 = *(_QWORD *)(a2 + 312);
        v17 = (_WORD *)(*(_QWORD *)(v16 + 40) + 56LL);
        if ( *v17 )
        {
          sub_1403D99B4((ULONG)v17, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
          v16 = *(_QWORD *)(a2 + 312);
        }
        v18 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 16LL);
        if ( v18 )
        {
          v19 = (_WORD *)(v18 + 56);
          if ( *v19 )
          {
            sub_1403D99B4((ULONG)v19, (PVOID)2);
            v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            sub_1403D99B4(*(_QWORD *)(v20 + 64), (PVOID)*(unsigned __int16 *)(v20 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  if ( ExIsSoftBoot() )
    return sub_140941654(a1, a2, a3, a4, a5, a7, a6, 1);
  else
    return 3221225659LL;
}
