/*
 * XREFs of sub_140A210D4 @ 0x140A210D4
 * Callers:
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 *     sub_140A1F9F4 @ 0x140A1F9F4 (sub_140A1F9F4.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_14064D1D4 @ 0x14064D1D4 (sub_14064D1D4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1D4A4 @ 0x140A1D4A4 (sub_140A1D4A4.c)
 *     sub_140A1F420 @ 0x140A1F420 (sub_140A1F420.c)
 *     sub_140A20758 @ 0x140A20758 (sub_140A20758.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A210D4(__int64 a1, __int64 a2)
{
  PVOID v3; // r12
  _DWORD *v4; // r15
  GUID *v5; // r14
  int v6; // ebx
  int v7; // eax
  _DWORD *v8; // r13
  int v9; // eax
  _BOOT_ENTRY *v10; // rdi
  unsigned int v11; // eax
  int v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  _OWORD *v15; // [rsp+40h] [rbp-20h] BYREF
  GUID *v16; // [rsp+48h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  void *Buf2; // [rsp+58h] [rbp-8h] BYREF
  int v20; // [rsp+B0h] [rbp+50h] BYREF
  int v21; // [rsp+B8h] [rbp+58h] BYREF

  v20 = 0;
  v21 = 0;
  v13 = 0;
  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  Buf2 = 0LL;
  v14 = 0LL;
  v6 = sub_140812B74(a1, (unsigned int *)(a2 + 16), &v14);
  if ( v6 < 0 )
    goto LABEL_13;
  sub_140A1D4A4(v14, 0x12000004u, (GUID **)&P, &v20);
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    sub_140A1D4A4(v14, 0x11000001u, (GUID **)&v15, &v21);
    v7 = sub_14064D1D4(&v15);
    if ( v7 < 0 )
      sub_1408138F0(3LL, L"BiSpacesUpdatePhysicalDevicePath failed %x", (unsigned int)v7);
    sub_140A1D4A4(v14, 0x12000002u, &v16, &v13);
    v4 = v15;
    v5 = v16;
  }
  v8 = *(_DWORD **)(a2 + 40);
  v3 = P;
  v9 = sub_140A1F420(v8, P, v4, v5, &Buf2);
  v6 = v9;
  if ( v9 == -1073741766 )
  {
    v6 = 0;
    goto LABEL_14;
  }
  if ( v9 < 0 )
    goto LABEL_13;
  v10 = (_BOOT_ENTRY *)Buf2;
  v11 = v8[1];
  if ( v11 != *((_DWORD *)Buf2 + 1) || memcmp(v8, Buf2, v11) )
  {
    v6 = sub_140A20758(v10);
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(v10, 0x4B444342u);
LABEL_13:
      sub_1408138F0(4LL, L"BiUpdateEfiEntry failed %x", (unsigned int)v6);
      goto LABEL_14;
    }
  }
  ExFreePoolWithTag(v8, 0x4B444342u);
  *(_QWORD *)(a2 + 40) = v10;
LABEL_14:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v14 )
    sub_140812D00(v14);
  return (unsigned int)v6;
}
