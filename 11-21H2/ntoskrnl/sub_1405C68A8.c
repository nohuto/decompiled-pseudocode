/*
 * XREFs of sub_1405C68A8 @ 0x1405C68A8
 * Callers:
 *     sub_1403A4EC4 @ 0x1403A4EC4 (sub_1403A4EC4.c)
 *     sub_1405C6870 @ 0x1405C6870 (sub_1405C6870.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 */

void __fastcall __noreturn sub_1405C68A8(__int64 MaxDataSize)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR BugCheckParameter3[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = MaxDataSize;
  if ( !*(_DWORD *)(MaxDataSize + 188) )
  {
    v2 = *(_QWORD *)(MaxDataSize + 24);
    if ( v2 )
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
    else
      v3 = 0LL;
    v4 = *(_QWORD *)(v3 + 264);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 72LL * *(char *)(v4 + 66) + 200);
      if ( *(_BYTE *)(v5 + 184) == *(_BYTE *)(MaxDataSize + 184) )
        v1 = v5;
    }
  }
  BugCheckParameter4 = *(_QWORD *)(v1 + 16);
  sub_1405C6658(0LL, 0, *(_QWORD *)(v1 + 24));
  sub_1403D99B4(BugCheckParameter4, (PVOID)*(unsigned __int16 *)(BugCheckParameter4 + 2));
  sub_1403D99B4(v1, (PVOID)0x120);
  BugCheckParameter3[1] = (ULONG_PTR)&qword_140C22FB0;
  BugCheckParameter3[0] = 163840LL;
  BugCheckParameter3[2] = (ULONG_PTR)&qword_140C1FB50;
  BugCheckParameter3[3] = qword_140C11650;
  BugCheckParameter3[4] = qword_140C11658;
  KeBugCheckEx(0x9Fu, 3uLL, *(_QWORD *)(v1 + 24), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
}
