/*
 * XREFs of BiBindEfiBootManager @ 0x140802B0C
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1408027BC (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     BiQueryBootOptions @ 0x140802550 (BiQueryBootOptions.c)
 *     BcdDeleteObject @ 0x140802D00 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x140802D5C (BcdCreateObject.c)
 *     BiTranslateBootOrder @ 0x140803998 (BiTranslateBootOrder.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiTranslateBootEntryId @ 0x140805BF8 (BiTranslateBootEntryId.c)
 *     BiQueryBootEntryOrder @ 0x140806F2C (BiQueryBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiBindEfiBootManager(__int64 a1, __int64 a2)
{
  void *v4; // r14
  int v5; // ebx
  __int64 Pool2; // rax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-48h] BYREF
  PVOID v16; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h] BYREF

  v17 = 0;
  v15 = 0;
  v20 = 0LL;
  v16 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  if ( (int)BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &v14) >= 0 )
  {
    BcdDeleteObject(v14);
    v14 = 0LL;
  }
  v18[0] = 1;
  v18[1] = 269484033;
  v5 = BcdCreateObject(a1, &GUID_FIRMWARE_BOOTMGR, v18, &v14);
  if ( v5 >= 0 )
  {
    v5 = BiQueryBootEntryOrder(&v16, &v15);
    if ( v5 >= 0 )
    {
      if ( !v15 )
        goto LABEL_9;
      Pool2 = ExAllocatePool2(258LL, 16LL * v15, 1262764866LL);
      v4 = (void *)Pool2;
      if ( Pool2 )
      {
        BiTranslateBootOrder(a2, v16, Pool2, &v15);
        if ( !v15 || (v5 = BcdSetElementDataWithFlags(v14, 603979777LL, v7, v4, 16 * v15), v5 >= 0) )
        {
LABEL_9:
          v8 = BiQueryBootOptions(&P, &v17);
          v10 = (unsigned int *)P;
          v5 = v8;
          if ( v8 >= 0 )
          {
            if ( *((_DWORD *)P + 2) == -1
              || (v20 = *((unsigned int *)P + 2), v5 = BcdSetElementDataWithFlags(v14, 620756996LL, v9, &v20, 8),
                                                  v5 >= 0) )
            {
              v11 = v10[4];
              if ( (_DWORD)v11 == -2
                || (int)BiTranslateBootEntryId(a2, v11, &v21) < 0
                || (v5 = BcdSetElementDataWithFlags(v14, 603979778LL, v13, &v21, 16), v5 >= 0) )
              {
                v5 = 0;
              }
            }
          }
          if ( v10 )
            ExFreePoolWithTag(v10, 0x4B444342u);
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
    if ( v16 )
      ExFreePoolWithTag(v16, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
  }
  if ( !v14 )
  {
    if ( v5 >= 0 )
      return (unsigned int)v5;
LABEL_31:
    BiLogMessage(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v5 < 0 )
  {
    BcdDeleteObject(v14);
    goto LABEL_31;
  }
  BcdCloseObject(v14);
  return (unsigned int)v5;
}
