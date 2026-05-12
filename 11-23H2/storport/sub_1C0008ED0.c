/*
 * XREFs of sub_1C0008ED0 @ 0x1C0008ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008F40 @ 0x1C0008F40 (sub_1C0008F40.c)
 *     sub_1C000A850 @ 0x1C000A850 (sub_1C000A850.c)
 *     sub_1C000EF50 @ 0x1C000EF50 (sub_1C000EF50.c)
 *     sub_1C00437E4 @ 0x1C00437E4 (sub_1C00437E4.c)
 */

void __fastcall sub_1C0008ED0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  a4[14] = a3;
  a4[27] = v4;
  if ( (int)sub_1C0008F40(a4, v4, 0LL) < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 48;
    v8 = a4[21];
    if ( *(_BYTE *)(v8 + 2) == 40 )
      *(_DWORD *)(v8 + 44) = -1073741670;
    else
      *(_DWORD *)(v8 + 64) = -1073741670;
    sub_1C00437E4(a4[28], 0LL, a4);
    goto LABEL_11;
  }
  v6 = sub_1C000A850(v4, a4);
  if ( *(_BYTE *)(v4 + 105) )
  {
    v9 = *(struct _DEVICE_OBJECT **)(v4 + 32);
    *(_BYTE *)(v4 + 105) = 0;
    IoInvalidateDeviceRelations(v9, BusRelations);
  }
  if ( v6 < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 4;
LABEL_11:
    LOBYTE(v7) = 1;
    sub_1C000EF50(v4, a4, v7);
  }
}
