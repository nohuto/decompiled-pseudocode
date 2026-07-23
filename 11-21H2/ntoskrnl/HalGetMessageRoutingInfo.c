/*
 * XREFs of HalGetMessageRoutingInfo @ 0x1403AFF80
 * Callers:
 *     sub_140816C88 @ 0x140816C88 (sub_140816C88.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1403B0158 @ 0x1403B0158 (sub_1403B0158.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall HalGetMessageRoutingInfo(int *a1, _DWORD *a2)
{
  bool v2; // cc
  unsigned __int16 **v5; // rcx
  unsigned __int16 *v6; // rbx
  char v7; // r14
  int v8; // r8d
  int v9; // r12d
  int v10; // ebx
  int ProcessorIdByNtNumber; // eax
  int v12; // eax
  int v14; // r8d
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // ebx
  char v18; // r15
  int v19; // r14d
  char v20; // bl
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-40h]
  unsigned __int16 *v23[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+42h] [rbp-1Eh]
  __int16 v26; // [rsp+46h] [rbp-1Ah]
  __int128 v27; // [rsp+48h] [rbp-18h]
  char v28; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+50h] BYREF

  v2 = (unsigned int)*a1 <= 1;
  v25 = 0;
  v26 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0LL;
  if ( !v2 )
  {
    v22 = 1228;
LABEL_20:
    v14 = 0;
    v15 = 20;
LABEL_61:
    sub_14051E038(0, v15, v14, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v22);
    return 3221225485LL;
  }
  v5 = (unsigned __int16 **)(a1 + 4);
  v6 = *v5;
  if ( !*v5
    || (v7 = 1, (unsigned __int16 *)((unsigned __int64)v6 & ((unsigned __int64)v6 ^ ((unsigned __int64)v6 - 1))) != v6) )
  {
    v7 = 0;
  }
  v8 = sub_1403B0158(v5, &v28);
  if ( v8 < 0 )
  {
    sub_14051E038(0, 39, v8, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1254);
    return v16;
  }
  v9 = a1[8];
  v24 = *((_WORD *)a1 + 12);
  v23[1] = v6;
  v23[0] = 0LL;
  if ( v9 == 1 )
  {
    v20 = v28;
    if ( v7 || v28 )
    {
      ProcessorIdByNtNumber = KeEnumerateNextProcessor(&v29, v23);
      if ( ProcessorIdByNtNumber >= 0 )
      {
        if ( !v20 )
        {
          v21 = v29;
LABEL_55:
          ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v21, &v28);
          if ( ProcessorIdByNtNumber >= 0 )
            goto LABEL_14;
          v22 = 1324;
LABEL_59:
          v14 = ProcessorIdByNtNumber;
LABEL_60:
          v15 = 21;
          goto LABEL_61;
        }
        while ( 1 )
        {
          v21 = v29;
          if ( v29 >= (unsigned int)dword_140C54A90 )
            break;
          ProcessorIdByNtNumber = KeEnumerateNextProcessor(&v29, v23);
          if ( ProcessorIdByNtNumber < 0 )
          {
            v21 = v29;
            goto LABEL_54;
          }
        }
        ProcessorIdByNtNumber = -1073741811;
LABEL_54:
        if ( (unsigned int)v21 < (unsigned int)dword_140C54A90 )
          goto LABEL_55;
      }
      v22 = 1313;
      goto LABEL_59;
    }
    sub_14051E038(0, 21, -1073741811, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1288);
    return v16;
  }
  if ( v9 == 2 )
  {
    if ( !byte_140C4ADB4 )
    {
      v10 = 0;
      ProcessorIdByNtNumber = KeEnumerateNextProcessor(&v29, v23);
      if ( ProcessorIdByNtNumber >= 0 )
      {
        do
        {
          if ( v29 >= (unsigned int)dword_140C54A90 )
          {
            v22 = 1352;
            goto LABEL_59;
          }
          if ( *(_DWORD *)(qword_140C54A80 + 24LL * v29) != 5 )
          {
            v22 = 1362;
            goto LABEL_20;
          }
          v10 |= *(_DWORD *)(qword_140C54A80 + 24LL * v29 + 8);
          ProcessorIdByNtNumber = KeEnumerateNextProcessor(&v29, v23);
        }
        while ( ProcessorIdByNtNumber >= 0 );
        if ( !v10 )
          return 3221225485LL;
        goto LABEL_14;
      }
      return 3221225485LL;
    }
    v22 = 1341;
    goto LABEL_20;
  }
  if ( v9 != 3 )
  {
    v22 = 1478;
    goto LABEL_20;
  }
  if ( !byte_140C4ADB4 )
  {
    v22 = 1389;
    goto LABEL_20;
  }
  v17 = 0;
  v18 = 0;
  if ( (int)KeEnumerateNextProcessor(&v29, v23) >= 0 )
  {
    v19 = DWORD2(v27);
    while ( v29 < (unsigned int)dword_140C54A90 )
    {
      if ( *(_DWORD *)(qword_140C54A80 + 24LL * v29) != 6 )
      {
        v22 = 1415;
        goto LABEL_20;
      }
      if ( v18 )
      {
        if ( v19 != *(_DWORD *)(qword_140C54A80 + 24LL * v29 + 8) )
        {
          if ( !v28 )
          {
            v22 = 1460;
            goto LABEL_20;
          }
          v17 = *(_DWORD *)(qword_140C54A80 + 24LL * v29 + 12);
          v19 = *(_DWORD *)(qword_140C54A80 + 24LL * v29 + 8);
        }
        v17 |= *(_DWORD *)(qword_140C54A80 + 24LL * v29 + 12);
      }
      else
      {
        v17 = *(_DWORD *)(qword_140C54A80 + 24LL * v29 + 12);
        v19 = *(_DWORD *)(qword_140C54A80 + 24LL * v29 + 8);
        v18 = 1;
      }
      if ( (int)KeEnumerateNextProcessor(&v29, v23) < 0 )
        goto LABEL_14;
    }
    v22 = 1400;
    v14 = 0;
    goto LABEL_60;
  }
LABEL_14:
  v12 = *a1;
  *a2 = 1;
  if ( v12 )
  {
    a2[2] = 3;
    a2[20] = v9;
  }
  else
  {
    a2[2] = 1;
    a2[21] = a1[10];
    a2[20] = a1[11];
    a2[22] = a1[12];
  }
  return 0LL;
}
