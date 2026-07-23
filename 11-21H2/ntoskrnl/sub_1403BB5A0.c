/*
 * XREFs of sub_1403BB5A0 @ 0x1403BB5A0
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_1403BB5A0()
{
  ULONG_PTR *v0; // rdi
  int v1; // ecx
  ULONG_PTR v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx

  v0 = (ULONG_PTR *)qword_140C4E4E0;
  v1 = 0;
  v2 = 0LL;
  while ( v0 != &qword_140C4E4E0 )
  {
    v2 = (ULONG_PTR)v0;
    v0 = (ULONG_PTR *)*v0;
    if ( (*(_DWORD *)(v2 + 184) & 4) != 0 && (*(_DWORD *)(v2 + 224) & 1) != 0 )
    {
      v3 = sub_140303720(v2);
      v1 = sub_14042A5E0(v3, v4);
      if ( v1 < 0 )
      {
        *(_DWORD *)(v2 + 256) = v1;
        dword_140C4E844 = 15;
        *(_DWORD *)(v2 + 252) = 15;
        *(_QWORD *)(v2 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
        *(_DWORD *)(v2 + 272) = 1732;
        break;
      }
    }
  }
  qword_140C4E418 = 0LL;
  byte_140C09780 = 0;
  if ( v1 < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v2, dword_140C4E844, v1);
  return (unsigned int)v1;
}
