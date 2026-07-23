/*
 * XREFs of sub_1403B51C4 @ 0x1403B51C4
 * Callers:
 *     sub_1403B51A0 @ 0x1403B51A0 (sub_1403B51A0.c)
 *     sub_14055969C @ 0x14055969C (sub_14055969C.c)
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 *     sub_140A80ACC @ 0x140A80ACC (sub_140A80ACC.c)
 *     sub_140A80B3C @ 0x140A80B3C (sub_140A80B3C.c)
 * Callees:
 *     sub_1403A374C @ 0x1403A374C (sub_1403A374C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B51C4(__int64 a1, IRP *a2)
{
  __int64 v2; // rax
  char v3; // r9

  if ( --a2->CurrentLocation <= 0 )
    KeBugCheckEx(0x35u, (ULONG_PTR)a2, 0LL, 0LL, 0LL);
  v2 = (__int64)&a2->Tail.Overlay.CurrentStackLocation[-1];
  a2->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)v2;
  v3 = *(_BYTE *)v2;
  *(_QWORD *)(v2 + 40) = a1;
  if ( v3 == 22 && (unsigned __int8)(*(_BYTE *)(v2 + 1) - 2) <= 1u )
    return sub_1403A374C(a2);
  else
    return sub_14042A5E0(a1, a2);
}
