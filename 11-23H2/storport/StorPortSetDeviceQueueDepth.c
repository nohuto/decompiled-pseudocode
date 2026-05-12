/*
 * XREFs of StorPortSetDeviceQueueDepth @ 0x1C000EA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0044D84 @ 0x1C0044D84 (sub_1C0044D84.c)
 */

char __fastcall StorPortSetDeviceQueueDepth(__int64 a1, char a2, char a3, char a4, unsigned int a5)
{
  char v5; // bl
  _DWORD *v9; // rax
  char v10; // r9
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // r8d
  unsigned int v15; // [rsp+60h] [rbp-18h]

  v5 = 0;
  HIBYTE(v15) = 0;
  v9 = sub_1C000E2EC(a1);
  if ( !v9 )
    return 0;
  BYTE2(v15) = v10;
  LOBYTE(v15) = a2;
  BYTE1(v15) = a3;
  v11 = sub_1C00081BC((__int64)v9, v15);
  if ( !v11 )
    return 0;
  v12 = *(_DWORD *)(v11 + 864);
  if ( a5 > v12 )
    return 0;
  v13 = *(_DWORD *)(v11 + 660);
  if ( v13 == a5 )
    return 1;
  if ( a5 )
  {
    *(_DWORD *)(v11 + 660) = a5;
    v5 = 1;
    if ( (byte_1C0093A00 & 0x10) != 0 )
      sub_1C0044D84(
        *(_DWORD *)(*(_QWORD *)(v11 + 24) + 56LL),
        v12,
        v13,
        *(_QWORD *)(*(_QWORD *)(v11 + 24) + 48LL),
        *(_DWORD *)(*(_QWORD *)(v11 + 24) + 56LL),
        a2,
        a3,
        a4,
        v13,
        a5,
        v12,
        1);
  }
  return v5;
}
