/*
 * XREFs of sub_14080E030 @ 0x14080E030
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     sub_14080DBCC @ 0x14080DBCC (sub_14080DBCC.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 */

__int64 __fastcall sub_14080E030(ULONG_PTR MaxDataSize, int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _WORD *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rdi
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx

  if ( !MaxDataSize )
    goto LABEL_18;
  result = *(_QWORD *)(MaxDataSize + 312);
  v4 = *(_QWORD *)(result + 40);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    sub_1403D99B4(MaxDataSize, (PVOID)*(unsigned __int16 *)(MaxDataSize + 2));
    v5 = *(_QWORD *)(MaxDataSize + 8);
    if ( v5 )
    {
      sub_1403D99B4(v5, (PVOID)(unsigned int)*(__int16 *)(v5 + 2));
      v6 = (_WORD *)(*(_QWORD *)(MaxDataSize + 8) + 56LL);
      if ( *v6 )
      {
        sub_1403D99B4((ULONG)v6, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 8) + 56LL));
      }
    }
    v7 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
    if ( v7 )
    {
      v8 = (unsigned __int16 *)(v7 + 40);
      sub_1403D99B4(v7, (PVOID)0x310);
      if ( *v8 )
      {
        sub_1403D99B4((ULONG)v8, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v8 + 1), (PVOID)*v8);
      }
      v9 = *(_QWORD *)(MaxDataSize + 312);
      v10 = (_WORD *)(*(_QWORD *)(v9 + 40) + 56LL);
      if ( *v10 )
      {
        sub_1403D99B4((ULONG)v10, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL));
        v9 = *(_QWORD *)(MaxDataSize + 312);
      }
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 16LL);
      if ( v11 )
      {
        v12 = (_WORD *)(v11 + 56);
        if ( *v12 )
        {
          sub_1403D99B4((ULONG)v12, (PVOID)2);
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
          sub_1403D99B4(*(_QWORD *)(v13 + 64), (PVOID)*(unsigned __int16 *)(v13 + 56));
        }
      }
    }
LABEL_18:
    KeBugCheckEx(0xCAu, 2uLL, MaxDataSize, 0LL, 0LL);
  }
  if ( v4 != -40 )
    return sub_140772044(v4, *(_QWORD *)(v4 + 48), a2);
  return result;
}
