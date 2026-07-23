/*
 * XREFs of sub_14074C8DC @ 0x14074C8DC
 * Callers:
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     sub_14074CA14 @ 0x14074CA14 (sub_14074CA14.c)
 *     sub_14074CC34 @ 0x14074CC34 (sub_14074CC34.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_140947068 @ 0x140947068 (sub_140947068.c)
 *     sub_140950B80 @ 0x140950B80 (sub_140950B80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14074C8DC(__int64 a1, int a2, PVOID *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD v18[2]; // [rsp+30h] [rbp-18h] BYREF
  const wchar_t *v19; // [rsp+38h] [rbp-10h]

  v18[1] = 0;
  v5 = *(_QWORD *)(a1 + 32);
  *a4 = 0;
  v9 = sub_14074CA14(v5);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( a2 )
    {
      if ( a2 <= 0 )
        goto LABEL_22;
      if ( a2 <= 2 )
      {
        v11 = -1;
        v12 = 1024;
        v13 = 1;
LABEL_8:
        v14 = sub_14074CC34((unsigned int)*a3, v12, v13, v11, *(_QWORD *)(a1 + 16) + 56LL);
LABEL_9:
        *a4 = 2 * v14;
        if ( 2 * v14 )
          return v10;
        v10 = -1073479624;
        goto LABEL_24;
      }
      if ( a2 != 3 )
      {
LABEL_22:
        v14 = 0;
        goto LABEL_9;
      }
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    v13 = 0;
    v12 = 200;
    goto LABEL_8;
  }
  if ( v9 == -1073479624 || !a2 || a2 == 3 && v9 == -1073741670 )
  {
LABEL_24:
    sub_140765114(a1, 9LL, v10);
    v16 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v16 + 396) & 0x200000) == 0 )
    {
      sub_14076FB70(v16, 0x200000LL);
      sub_140950B80(*(_QWORD *)(a1 + 16) + 40LL);
    }
    if ( v10 != -1073479624 && !a2 && v10 != -1073741670 && v10 != -1073741810 )
    {
      v17 = *(_QWORD *)(a1 + 16) + 56LL;
      v18[0] = 5242958;
      v19 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      sub_140947068(v17, v18, v10, 0LL, 0);
    }
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
    *a4 = 0;
  }
  return v10;
}
