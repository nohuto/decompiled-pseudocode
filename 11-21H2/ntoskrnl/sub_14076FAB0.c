/*
 * XREFs of sub_14076FAB0 @ 0x14076FAB0
 * Callers:
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 * Callees:
 *     sub_14024D9D8 @ 0x14024D9D8 (sub_14024D9D8.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406CFCE0 @ 0x1406CFCE0 (sub_1406CFCE0.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14094FC28 @ 0x14094FC28 (sub_14094FC28.c)
 */

void __fastcall sub_14076FAB0(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ebp
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rsi
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 312);
  if ( (*(_DWORD *)(v2 + 32) & 2) != 0 )
  {
    sub_1403D99B4(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 )
    {
      sub_1403D99B4(v9, (PVOID)(unsigned int)*(__int16 *)(v9 + 2));
      v10 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
      if ( *v10 )
      {
        sub_1403D99B4((ULONG)v10, (PVOID)2);
        sub_1403D99B4(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL), (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
    }
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      sub_1403D99B4(v11, (PVOID)0x310);
      if ( *v12 )
      {
        sub_1403D99B4((ULONG)v12, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v12 + 1), (PVOID)*v12);
      }
      v13 = *(_QWORD *)(a2 + 312);
      v14 = (_WORD *)(*(_QWORD *)(v13 + 40) + 56LL);
      if ( *v14 )
      {
        sub_1403D99B4((ULONG)v14, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        v13 = *(_QWORD *)(a2 + 312);
      }
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL);
      if ( v15 )
      {
        v16 = (_WORD *)(v15 + 56);
        if ( *v16 )
        {
          sub_1403D99B4((ULONG)v16, (PVOID)2);
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
          sub_1403D99B4(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
        }
      }
    }
    KeBugCheckEx(0xCAu, 4uLL, a2, 0LL, 0LL);
  }
  v5 = *(_QWORD *)(v2 + 40);
  v18 = v5;
  if ( v5 )
  {
    sub_14076FB70(v5, 16LL);
    if ( *(_DWORD *)(v5 + 568) == 4 )
      sub_14094FC28(v5);
    goto LABEL_5;
  }
  v6 = sub_1406CFCE0(a2, (__int64)&v18);
  v7 = v18;
  v8 = v6;
  if ( !v18 )
  {
LABEL_5:
    ObfDereferenceObject((PVOID)a2);
    return;
  }
  sub_14076FB70(v18, 16LL);
  *(_DWORD *)(a2 + 48) |= 0x1000u;
  sub_14024D9D8(a1, v7);
  if ( v8 == -1073740946 )
    sub_140765114(v7, 49, -1073740946);
}
