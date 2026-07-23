/*
 * XREFs of IoQueryKsrPersistentMemorySizeEx @ 0x140940A60
 * Callers:
 *     IoQueryKsrPersistentMemorySize @ 0x140940A30 (IoQueryKsrPersistentMemorySize.c)
 * Callees:
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 */

__int64 __fastcall IoQueryKsrPersistentMemorySizeEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rdi
  __int64 v15; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx
  __int64 result; // rax

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v10 || (*(_DWORD *)(v10 + 396) & 0x20000) != 0 )
    {
      sub_1403D99B4(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v11 = *(_QWORD *)(a2 + 8);
      if ( v11 )
      {
        sub_1403D99B4(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
        v12 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v12 )
        {
          sub_1403D99B4((ULONG)v12, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v13 )
      {
        v14 = (unsigned __int16 *)(v13 + 40);
        sub_1403D99B4(v13, (PVOID)0x310);
        if ( *v14 )
        {
          sub_1403D99B4((ULONG)v14, (PVOID)2);
          sub_1403D99B4(*((_QWORD *)v14 + 1), (PVOID)*v14);
        }
        v15 = *(_QWORD *)(a2 + 312);
        v16 = (_WORD *)(*(_QWORD *)(v15 + 40) + 56LL);
        if ( *v16 )
        {
          sub_1403D99B4((ULONG)v16, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
          v15 = *(_QWORD *)(a2 + 312);
        }
        v17 = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL);
        if ( v17 )
        {
          v18 = (_WORD *)(v17 + 56);
          if ( *v18 )
          {
            sub_1403D99B4((ULONG)v18, (PVOID)2);
            v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            sub_1403D99B4(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  *a6 = 0LL;
  if ( !ExIsSoftBoot() )
    return 3221225659LL;
  result = sub_140941654(a1, a2, a3, a4, a5, a6, 0LL, 0);
  if ( (_DWORD)result == -1073741789 && *a6 )
    return 0LL;
  return result;
}
