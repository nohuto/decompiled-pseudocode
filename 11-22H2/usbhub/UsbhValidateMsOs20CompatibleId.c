/*
 * XREFs of UsbhValidateMsOs20CompatibleId @ 0x1C00527D0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 */

char __fastcall UsbhValidateMsOs20CompatibleId(__int64 a1, __int64 a2, _WORD *a3)
{
  char result; // al
  char v6; // bl
  unsigned __int8 *v7; // r11
  unsigned int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  char v12; // bl
  unsigned __int8 *v13; // r11

  if ( *a3 != 20 )
  {
    Log(a1, 256, 1447250225, (unsigned __int16)*a3, 0LL);
    return 0;
  }
  v6 = 0;
  v7 = (unsigned __int8 *)(a3 + 2);
  v8 = 0;
  v9 = 0x87FFFFFE03FFLL;
  do
  {
    v10 = *v7;
    if ( (_BYTE)v10 )
    {
      if ( v6 == 1 )
      {
        v11 = 1447250226;
        goto LABEL_19;
      }
      if ( (unsigned __int8)(v10 - 48) > 0x2Fu || !_bittest64(&v9, (unsigned __int8)(v10 - 48)) )
      {
        v11 = 1447250227;
        goto LABEL_19;
      }
    }
    else
    {
      v6 = 1;
    }
    ++v8;
    ++v7;
  }
  while ( v8 < 8 );
  v12 = 0;
  v13 = (unsigned __int8 *)(a3 + 6);
  v8 = 0;
  while ( 1 )
  {
    v10 = *v13;
    if ( (_BYTE)v10 )
      break;
    v12 = 1;
LABEL_21:
    ++v8;
    ++v13;
    if ( v8 >= 8 )
    {
      *(_DWORD *)a2 |= 0x20u;
      result = 1;
      *(_QWORD *)(a2 + 24) = a3;
      return result;
    }
  }
  if ( v12 != 1 )
  {
    if ( (unsigned __int8)(v10 - 48) > 0x2Fu || !_bittest64(&v9, (unsigned __int8)(v10 - 48)) )
    {
      v11 = 1447250229;
      goto LABEL_19;
    }
    goto LABEL_21;
  }
  v11 = 1447250228;
LABEL_19:
  Log(a1, 256, v11, v10, v8);
  return 0;
}
