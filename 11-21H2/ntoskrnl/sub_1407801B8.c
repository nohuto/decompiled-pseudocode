/*
 * XREFs of sub_1407801B8 @ 0x1407801B8
 * Callers:
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140A22BF8 @ 0x140A22BF8 (sub_140A22BF8.c)
 * Callees:
 *     sub_1406D7C74 @ 0x1406D7C74 (sub_1406D7C74.c)
 *     sub_140772AF8 @ 0x140772AF8 (sub_140772AF8.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407801B8(__int64 a1, __int64 *a2, int a3, __int64 *a4)
{
  int v4; // esi
  void *v5; // r12
  __int64 v9; // r10
  int v10; // r14d
  int v11; // r11d
  __int64 v12; // rax
  _QWORD *v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  const wchar_t *v20; // r15
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rax
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ecx
  int v32; // ebx
  __int64 v33; // [rsp+20h] [rbp-40h]
  __int64 v34; // [rsp+30h] [rbp-30h]
  __int64 v35; // [rsp+50h] [rbp-10h] BYREF
  void *v36; // [rsp+58h] [rbp-8h] BYREF

  v4 = 0;
  v5 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v9 = a1;
  v10 = 4;
  v11 = 1;
  if ( a3 > 8 )
  {
    switch ( a3 )
    {
      case 9:
        v12 = a2[12];
        break;
      case 10:
        v12 = a2[13];
        break;
      case 11:
        v12 = a2[14];
        break;
      case 12:
        v12 = a2[15];
        break;
      case 13:
        v12 = a2[16];
        break;
      case 14:
        v12 = a2[17];
        break;
      case 15:
        v12 = a2[18];
        break;
      default:
        return (unsigned int)-1073741811;
    }
    goto LABEL_9;
  }
  switch ( a3 )
  {
    case 8:
      v12 = a2[11];
LABEL_9:
      v35 = v12;
      goto LABEL_10;
    case 1:
      v14 = (_QWORD *)a2[7];
      v15 = 1;
      break;
    case 2:
      v14 = (_QWORD *)a2[7];
      v15 = 2;
      break;
    case 3:
      v14 = (_QWORD *)a2[7];
      v15 = 3;
      break;
    case 4:
      v14 = (_QWORD *)a2[7];
      v15 = 4;
      break;
    default:
      switch ( a3 )
      {
        case 5:
          v12 = a2[8];
          break;
        case 6:
          v12 = a2[9];
          break;
        case 7:
          v12 = a2[10];
          break;
        default:
          return (unsigned int)-1073741811;
      }
      goto LABEL_9;
  }
  v4 = sub_1406D7C74(v14, v15, &v35);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v12 = v35;
LABEL_10:
  if ( v12 )
  {
    *a4 = v12;
    return (unsigned int)v4;
  }
  if ( a3 < 5 || a3 > 15 )
    return (unsigned int)-1073741811;
  if ( a3 > 10 )
  {
    if ( a3 == 11 )
    {
      v20 = L"Control\\DevicePanels";
      goto LABEL_46;
    }
    v21 = a3 - 11 - v11;
    if ( !v21 )
    {
      v20 = L"Control\\CriticalDeviceDatabase";
      goto LABEL_46;
    }
    v22 = v21 - v11;
    if ( !v22 )
    {
      v20 = L"Control\\CoDeviceInstallers";
      goto LABEL_46;
    }
    v31 = v22 - v11;
    if ( !v31 )
    {
      v20 = L"Hardware Profiles";
      goto LABEL_46;
    }
    if ( v31 == v11 )
    {
      v10 = v11;
      v20 = L"HardwareConfig";
      goto LABEL_46;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 10 )
  {
    v20 = L"Control\\DeviceContainers";
    goto LABEL_46;
  }
  v16 = (unsigned int)(a3 - 5);
  if ( a3 != 5 )
  {
    v17 = v16 - v11;
    if ( !v17 )
    {
      v20 = L"Services";
      goto LABEL_46;
    }
    v18 = v17 - v11;
    if ( !v18 )
    {
      v20 = L"Control\\Class";
      goto LABEL_46;
    }
    v19 = v18 - v11;
    if ( !v19 )
    {
      v20 = L"Control\\DeviceClasses";
      goto LABEL_46;
    }
    if ( v19 == v11 )
    {
      v20 = L"Control\\DeviceInterfaces";
      if ( !*(_BYTE *)(v9 + 4) )
        v20 = L"Control\\DeviceClasses";
      goto LABEL_46;
    }
    return (unsigned int)-1073741811;
  }
  v20 = L"Enum";
  v5 = (void *)sub_14085C290(v16);
  if ( !v5 )
    return (unsigned int)-1073741595;
LABEL_46:
  v4 = sub_1406D7C74((_QWORD *)a2[7], v10, &v36);
  if ( v4 >= 0 )
  {
    LODWORD(v33) = 0x2000000;
    v4 = sub_140772AF8(a2[7], v36, (__int64)v20, 0LL, v33, 0LL, v34, (__int64)&v35, 0LL);
    if ( v4 >= 0 )
    {
      if ( a3 > 10 )
      {
        v28 = a3 - 11;
        if ( !v28 )
        {
          v27 = v35;
          a2[14] = v35;
          goto LABEL_59;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          v27 = v35;
          a2[15] = v35;
          goto LABEL_59;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          v27 = v35;
          a2[16] = v35;
          goto LABEL_59;
        }
        v32 = v30 - 1;
        if ( !v32 )
        {
          v27 = v35;
          a2[17] = v35;
          goto LABEL_59;
        }
        if ( v32 == 1 )
        {
          v27 = v35;
          a2[18] = v35;
          goto LABEL_59;
        }
      }
      else
      {
        if ( a3 == 10 )
        {
          v27 = v35;
          a2[13] = v35;
          goto LABEL_59;
        }
        v23 = a3 - 5;
        if ( !v23 )
        {
          v27 = v35;
          a2[8] = v35;
          goto LABEL_59;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          v27 = v35;
          a2[9] = v35;
          goto LABEL_59;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          v27 = v35;
          a2[10] = v35;
          goto LABEL_59;
        }
        v26 = v25 - 1;
        if ( !v26 )
        {
          v27 = v35;
          a2[11] = v35;
LABEL_59:
          *a4 = v27;
          goto LABEL_60;
        }
        if ( v26 == 1 )
        {
          v27 = v35;
          a2[12] = v35;
          goto LABEL_59;
        }
      }
      v4 = -1073741811;
    }
  }
LABEL_60:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v4;
}
