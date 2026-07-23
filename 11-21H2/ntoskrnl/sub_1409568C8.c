/*
 * XREFs of sub_1409568C8 @ 0x1409568C8
 * Callers:
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 */

__int64 __fastcall sub_1409568C8(ULONG_PTR BugCheckParameter2)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rax

  if ( dword_140C44634 == 1 )
  {
    if ( BugCheckParameter2 )
    {
      v2 = (unsigned __int16 *)(BugCheckParameter2 + 40);
      sub_1403D99B4(BugCheckParameter2, (PVOID)0x310);
      if ( *v2 )
      {
        sub_1403D99B4((ULONG)v2, (PVOID)2);
        sub_1403D99B4(*((_QWORD *)v2 + 1), (PVOID)*v2);
      }
      if ( *(_WORD *)(BugCheckParameter2 + 56) )
      {
        sub_1403D99B4(BugCheckParameter2 + 56, (PVOID)2);
        sub_1403D99B4(*(_QWORD *)(BugCheckParameter2 + 64), (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 56));
      }
      v3 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( v3 )
      {
        if ( *(_WORD *)(v3 + 56) )
        {
          sub_1403D99B4(v3 + 56, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 56LL));
        }
      }
    }
    KeBugCheckEx(
      0xCAu,
      0x11uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 720),
      *(unsigned int *)(BugCheckParameter2 + 704));
  }
  sub_140765430(BugCheckParameter2, 0, 55, -1073741790);
  return 3221226190LL;
}
