/*
 * XREFs of GetCpcDifferentialFeedback @ 0x1C0001F10
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRaw @ 0x1C0001FC0 (ReadIoMemRaw.c)
 *     ReadGenAddr @ 0x1C0002000 (ReadGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C00027F8 (ReadIoMemRawEx.c)
 */

unsigned __int64 __fastcall GetCpcDifferentialFeedback(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  char v5; // al
  unsigned __int64 IoMemRaw; // rax
  __int64 v9; // r11
  unsigned __int64 v10; // rdx
  char v11; // cl
  unsigned __int8 v12; // cl
  char v13; // cl
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  char v17; // cl
  char v18; // cl
  unsigned __int8 v19; // cl

  v5 = *(_BYTE *)(a1 + 272);
  if ( v5 == 127 || v5 == 1 )
  {
    IoMemRaw = ReadIoMemRaw(a1 + 272);
    v10 = IoMemRaw;
    if ( IoMemRaw )
    {
      v11 = *(_BYTE *)(v9 + 2);
      if ( v11 )
        v10 = IoMemRaw >> v11;
      v12 = *(_BYTE *)(v9 + 1);
      if ( v12 < 0x40u )
LABEL_15:
        v10 &= (1LL << v12) - 1;
    }
  }
  else
  {
    if ( v5 == 126 )
    {
      v10 = *(unsigned int *)(a1 + 276);
      goto LABEL_6;
    }
    v15 = ReadIoMemRawEx(a1 + 272);
    v10 = v15;
    if ( v15 )
    {
      v17 = *(_BYTE *)(v16 + 2);
      if ( v17 )
        v10 = v15 >> v17;
      v12 = *(_BYTE *)(v16 + 1);
      if ( v12 < 0x40u )
        goto LABEL_15;
    }
  }
LABEL_6:
  *a3 = v10;
  v13 = *(_BYTE *)(a1 + 296);
  if ( (unsigned __int8)(v13 - 126) <= 1u || v13 == 1 )
  {
    result = ReadGenAddr(a1 + 296);
  }
  else
  {
    result = ReadIoMemRawEx(a1 + 296);
    if ( result )
    {
      v18 = *(_BYTE *)(a1 + 298);
      if ( v18 )
        result >>= v18;
      v19 = *(_BYTE *)(a1 + 297);
      if ( v19 < 0x40u )
        result &= (1LL << v19) - 1;
    }
  }
  *a4 = result;
  return result;
}
