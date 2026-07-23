/*
 * XREFs of sub_140945654 @ 0x140945654
 * Callers:
 *     sub_1409457D0 @ 0x1409457D0 (sub_1409457D0.c)
 *     sub_140945A9C @ 0x140945A9C (sub_140945A9C.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14074A0F8 @ 0x14074A0F8 (sub_14074A0F8.c)
 */

__int64 __fastcall sub_140945654(ULONG_PTR MaxDataSize)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  _WORD *v5; // rcx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rdi
  __int64 v8; // rdx
  _WORD *v9; // rcx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx

  if ( !MaxDataSize )
    goto LABEL_16;
  v2 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
  if ( !v2 || (*(_DWORD *)(v2 + 396) & 0x20000) != 0 )
  {
    sub_1403D99B4(MaxDataSize, (PVOID)*(unsigned __int16 *)(MaxDataSize + 2));
    v4 = *(_QWORD *)(MaxDataSize + 8);
    if ( v4 )
    {
      sub_1403D99B4(v4, (PVOID)(unsigned int)*(__int16 *)(v4 + 2));
      v5 = (_WORD *)(*(_QWORD *)(MaxDataSize + 8) + 56LL);
      if ( *v5 )
      {
        sub_1403D99B4((ULONG)v5, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 8) + 56LL));
      }
    }
    v6 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
    if ( v6 )
    {
      v7 = (unsigned __int16 *)(v6 + 40);
      sub_1403D99B4(v6, (PVOID)0x310);
      if ( *v7 )
      {
        sub_1403D99B4((ULONG)v7, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v7 + 1), (PVOID)*v7);
      }
      v8 = *(_QWORD *)(MaxDataSize + 312);
      v9 = (_WORD *)(*(_QWORD *)(v8 + 40) + 56LL);
      if ( *v9 )
      {
        sub_1403D99B4((ULONG)v9, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL));
        v8 = *(_QWORD *)(MaxDataSize + 312);
      }
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL);
      if ( v10 )
      {
        v11 = (_WORD *)(v10 + 56);
        if ( *v11 )
        {
          sub_1403D99B4((ULONG)v11, (PVOID)2);
          v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
          sub_1403D99B4(*(_QWORD *)(v12 + 64), (PVOID)*(unsigned __int16 *)(v12 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, MaxDataSize, 0LL, 0LL);
  }
  *(_DWORD *)(MaxDataSize + 48) |= 0x4000000u;
  return sub_14074A0F8(MaxDataSize, 0LL);
}
