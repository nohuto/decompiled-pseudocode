/*
 * XREFs of NVMeReservationReportCapabilitiesCompletion @ 0x1C001E6F0
 * Callers:
 *     <none>
 * Callees:
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 */

char __fastcall NVMeReservationReportCapabilitiesCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r8
  unsigned __int8 v8; // cl
  int NamespaceId; // eax
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r11
  __int64 v14; // r8
  char v15; // cl
  char v16; // cl
  char v17; // dl
  char v18; // al

  SrbExtension = GetSrbExtension(a2);
  if ( v7 )
  {
    if ( *(_BYTE *)(v5 + 2) == 40 )
      v8 = *(_BYTE *)(*(unsigned int *)(v5 + 52) + v5 + 10);
    else
      v8 = *(_BYTE *)(v5 + 7);
    NamespaceId = GetNamespaceId(v6, v8);
    v13 = *(_QWORD *)(v12 + 8LL * (unsigned int)(NamespaceId - 1) + 1752);
    if ( *(_BYTE *)(v10 + 2) == 40 )
      v14 = *(_QWORD *)(v10 + 64);
    else
      v14 = *(_QWORD *)(v10 + 24);
    v15 = *(_BYTE *)(v14 + 2) & 0x62;
    *(_WORD *)v14 = 2048;
    *(_BYTE *)(v14 + 2) = *(_BYTE *)(v13 + 112) & 1 | v15 | 4;
    *(_BYTE *)(v14 + 3) = *a3 & 1 | *(_BYTE *)(v14 + 3) & 0xE | 0x80;
    *(_BYTE *)(v14 + 4) ^= (*(_BYTE *)(v13 + 112) ^ *(_BYTE *)(v14 + 4)) & 2;
    v16 = *(_BYTE *)(v14 + 4) ^ (*(_BYTE *)(v14 + 4) ^ (2 * *(_BYTE *)(v13 + 112))) & 8;
    *(_BYTE *)(v14 + 4) = v16;
    v17 = v16 ^ (v16 ^ (4 * *(_BYTE *)(v13 + 112))) & 0x20;
    *(_BYTE *)(v14 + 4) = v17;
    v18 = v17 ^ (v17 ^ (4 * *(_BYTE *)(v13 + 112))) & 0x40;
    *(_BYTE *)(v14 + 4) = v18;
    *(_BYTE *)(v14 + 4) = (4 * *(_BYTE *)(v13 + 112)) ^ (v18 ^ (4 * *(_BYTE *)(v13 + 112))) & 0x7F;
    LOBYTE(SrbExtension) = (*(_BYTE *)(v14 + 5) ^ (*(_BYTE *)(v13 + 112) >> 6)) & 1;
    *(_BYTE *)(v14 + 5) ^= SrbExtension;
    *(_BYTE *)(v10 + 3) = 1;
    *(_BYTE *)(v11 + 4253) |= 8u;
  }
  else
  {
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
  }
  return SrbExtension;
}
