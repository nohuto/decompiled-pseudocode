/*
 * XREFs of sub_14050E088 @ 0x14050E088
 * Callers:
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050D048 @ 0x14050D048 (sub_14050D048.c)
 */

__int64 __fastcall sub_14050E088(__int64 a1, bool *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  __int64 v7; // r9
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r9
  char v11; // si
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r9
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  while ( 1 )
  {
    v17 = 0LL;
    *((_QWORD *)&v16 + 1) = (unsigned __int16)(dword_140D0E5E0[0] >> 6);
    *(_QWORD *)&v16 = 1LL << (dword_140D0E5E0[0] & 0x3F);
    v6 = sub_1403AEA08(a1, 0xD4u, 15, a4, -1LL, 0, &v16, (__int64)HalFlushCommonBuffer);
    if ( v6 < 0 )
      break;
    *(_DWORD *)(a1 + 64) = 0;
    sub_1403AEF08(0xD4u, (int)sub_140521C60, 15, v7, -1LL);
    v8 = 0;
    while ( 1 )
    {
      v6 = sub_140354420(a1, 3u, 0x2710uLL, 1, &v17);
      if ( v6 >= 0 )
        break;
      if ( (unsigned int)++v8 >= 0xA )
      {
        sub_14042A5E0(*(_QWORD *)(a1 + 72), v9);
        sub_1403AEF08(0xD4u, (int)HalFlushCommonBuffer, 15, v10, -1LL);
        goto LABEL_17;
      }
    }
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      KeStallExecutionProcessor(0x3E8u);
      ++v12;
      if ( *(_DWORD *)(a1 + 64) )
        break;
      if ( v12 >= 0x64 )
        goto LABEL_11;
    }
    v11 = 1;
LABEL_11:
    sub_14042A5E0(*(_QWORD *)(a1 + 72), v13);
    sub_1403AEF08(0xD4u, (int)HalFlushCommonBuffer, 15, v14, -1LL);
    if ( v11 )
    {
      *a2 = (*(_DWORD *)(a1 + 184) & 0x10) != 0;
      v6 = 0;
      break;
    }
    if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 || (*(_DWORD *)(a1 + 224) & 0xB00) == 0 )
    {
      v6 = -1073741823;
      break;
    }
    sub_14050D048((_DWORD *)a1, 212, 0, 0);
    *(_DWORD *)(a1 + 224) &= ~0x400u;
  }
LABEL_17:
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
    sub_14050D048((_DWORD *)a1, 212, 0, 0);
  return (unsigned int)v6;
}
