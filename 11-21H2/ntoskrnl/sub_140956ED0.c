/*
 * XREFs of sub_140956ED0 @ 0x140956ED0
 * Callers:
 *     sub_140956ADC @ 0x140956ADC (sub_140956ADC.c)
 * Callees:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140956ED0(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rcx
  _WORD *v3; // rcx
  __int64 v4; // rcx
  unsigned __int16 *v5; // rsi
  __int64 v6; // rdx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rcx

  if ( dword_140C44634 == 3 )
  {
    if ( BugCheckParameter2 )
    {
      sub_1403D99B4(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
      v2 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( v2 )
      {
        sub_1403D99B4(v2, (PVOID)(unsigned int)*(__int16 *)(v2 + 2));
        v3 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
        if ( *v3 )
        {
          sub_1403D99B4((ULONG)v3, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
        }
      }
      v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
      if ( v4 )
      {
        v5 = (unsigned __int16 *)(v4 + 40);
        sub_1403D99B4(v4, (PVOID)0x310);
        if ( *v5 )
        {
          sub_1403D99B4((ULONG)v5, (PVOID)2);
          sub_1403D99B4(*((_QWORD *)v5 + 1), (PVOID)*v5);
        }
        v6 = *(_QWORD *)(BugCheckParameter2 + 312);
        v7 = (_WORD *)(*(_QWORD *)(v6 + 40) + 56LL);
        if ( *v7 )
        {
          sub_1403D99B4((ULONG)v7, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
          v6 = *(_QWORD *)(BugCheckParameter2 + 312);
        }
        v8 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL);
        if ( v8 )
        {
          v9 = (_WORD *)(v8 + 56);
          if ( *v9 )
          {
            sub_1403D99B4((ULONG)v9, (PVOID)2);
            v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
            sub_1403D99B4(*(_QWORD *)(v10 + 64), (PVOID)*(unsigned __int16 *)(v10 + 56));
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return sub_1402DCF44((PVOID)BugCheckParameter2, 27, 0, 0LL, 0LL, 0LL, 0LL);
}
