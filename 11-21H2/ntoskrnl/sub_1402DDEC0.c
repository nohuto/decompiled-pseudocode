/*
 * XREFs of sub_1402DDEC0 @ 0x1402DDEC0
 * Callers:
 *     sub_1406932C0 @ 0x1406932C0 (sub_1406932C0.c)
 *     sub_1406C1A74 @ 0x1406C1A74 (sub_1406C1A74.c)
 *     sub_1406D839C @ 0x1406D839C (sub_1406D839C.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407690BC @ 0x1407690BC (sub_1407690BC.c)
 */

__int64 __fastcall sub_1402DDEC0(ULONG_PTR BugCheckParameter2, UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 *v9; // rdi
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_16;
  v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    sub_1403D99B4(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v6 )
    {
      sub_1403D99B4(v6, (PVOID)(unsigned int)*(__int16 *)(v6 + 2));
      v7 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v7 )
      {
        sub_1403D99B4((ULONG)v7, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v8 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v8 )
    {
      v9 = (unsigned __int16 *)(v8 + 40);
      sub_1403D99B4(v8, (PVOID)0x310);
      if ( *v9 )
      {
        sub_1403D99B4((ULONG)v9, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v9 + 1), (PVOID)*v9);
      }
      v10 = *(_QWORD *)(BugCheckParameter2 + 312);
      v11 = (_WORD *)(*(_QWORD *)(v10 + 40) + 56LL);
      if ( *v11 )
      {
        sub_1403D99B4((ULONG)v11, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
        v10 = *(_QWORD *)(BugCheckParameter2 + 312);
      }
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 16LL);
      if ( v12 )
      {
        v13 = (_WORD *)(v12 + 56);
        if ( *v13 )
        {
          sub_1403D99B4((ULONG)v13, (PVOID)2);
          v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
          sub_1403D99B4(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return sub_1407690BC(a2, (PCUNICODE_STRING)(v4 + 40));
}
