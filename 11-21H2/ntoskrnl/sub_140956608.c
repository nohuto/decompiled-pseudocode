/*
 * XREFs of sub_140956608 @ 0x140956608
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140957044 @ 0x140957044 (sub_140957044.c)
 *     sub_14095A508 @ 0x14095A508 (sub_14095A508.c)
 */

__int64 __fastcall sub_140956608(__int64 a1)
{
  ULONG_PTR v1; // rbx
  unsigned int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rcx
  _WORD *v5; // rcx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rsi
  __int64 v8; // rdx
  _WORD *v9; // rcx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rsi
  __int64 v22; // rdx
  _WORD *v23; // rcx
  __int64 v24; // rcx
  _WORD *v25; // rcx
  __int64 v26; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = -1073741823;
  if ( !v1 )
    goto LABEL_31;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  if ( !v3 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    sub_1403D99B4(*(_QWORD *)(a1 + 16), (PVOID)*(unsigned __int16 *)(v1 + 2));
    v18 = *(_QWORD *)(v1 + 8);
    if ( v18 )
    {
      sub_1403D99B4(v18, (PVOID)(unsigned int)*(__int16 *)(v18 + 2));
      v19 = (_WORD *)(*(_QWORD *)(v1 + 8) + 56LL);
      if ( *v19 )
      {
        sub_1403D99B4((ULONG)v19, (PVOID)2);
        sub_1403D99B4(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 64LL), (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v1 + 8) + 56LL));
      }
    }
    v20 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v20 )
    {
      v21 = (unsigned __int16 *)(v20 + 40);
      sub_1403D99B4(v20, (PVOID)0x310);
      if ( *v21 )
      {
        sub_1403D99B4((ULONG)v21, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v21 + 1), (PVOID)*v21);
      }
      v22 = *(_QWORD *)(v1 + 312);
      v23 = (_WORD *)(*(_QWORD *)(v22 + 40) + 56LL);
      if ( *v23 )
      {
        sub_1403D99B4((ULONG)v23, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 56LL));
        v22 = *(_QWORD *)(v1 + 312);
      }
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 40) + 16LL);
      if ( v24 )
      {
        v25 = (_WORD *)(v24 + 56);
        if ( *v25 )
        {
          sub_1403D99B4((ULONG)v25, (PVOID)2);
          v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 16LL);
          sub_1403D99B4(*(_QWORD *)(v26 + 64), (PVOID)*(unsigned __int16 *)(v26 + 56));
        }
      }
    }
LABEL_31:
    KeBugCheckEx(0xCAu, 2uLL, v1, 0LL, 0LL);
  }
  if ( dword_140C44634 == 3 )
  {
    sub_1403D99B4(v1, (PVOID)*(unsigned __int16 *)(v1 + 2));
    v4 = *(_QWORD *)(v1 + 8);
    if ( v4 )
    {
      sub_1403D99B4(v4, (PVOID)(unsigned int)*(__int16 *)(v4 + 2));
      v5 = (_WORD *)(*(_QWORD *)(v1 + 8) + 56LL);
      if ( *v5 )
      {
        sub_1403D99B4((ULONG)v5, (PVOID)2);
        sub_1403D99B4(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 64LL), (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v1 + 8) + 56LL));
      }
    }
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v6 )
    {
      v7 = (unsigned __int16 *)(v6 + 40);
      sub_1403D99B4(v6, (PVOID)0x310);
      if ( *v7 )
      {
        sub_1403D99B4((ULONG)v7, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v7 + 1), (PVOID)*v7);
      }
      v8 = *(_QWORD *)(v1 + 312);
      v9 = (_WORD *)(*(_QWORD *)(v8 + 40) + 56LL);
      if ( *v9 )
      {
        sub_1403D99B4((ULONG)v9, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 56LL));
        v8 = *(_QWORD *)(v1 + 312);
      }
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL);
      if ( v10 )
      {
        v11 = (_WORD *)(v10 + 56);
        if ( *v11 )
        {
          sub_1403D99B4((ULONG)v11, (PVOID)2);
          v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 16LL);
          sub_1403D99B4(*(_QWORD *)(v12 + 64), (PVOID)*(unsigned __int16 *)(v12 + 56));
        }
      }
    }
    KeBugCheckEx(0xCAu, 0x11uLL, v1, 0LL, 0LL);
  }
  v13 = *(_QWORD *)(v3 + 720);
  if ( v13 )
  {
    LOBYTE(v15) = (unsigned __int8)sub_14095A508(v13, 3221225473LL) == 0;
    return (unsigned int)sub_140957044(v16, *(unsigned int *)(v14 + 32), v15);
  }
  return v2;
}
