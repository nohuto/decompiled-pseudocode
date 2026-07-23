/*
 * XREFs of sub_1409A6270 @ 0x1409A6270
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1409A666C @ 0x1409A666C (sub_1409A666C.c)
 *     sub_1409A6714 @ 0x1409A6714 (sub_1409A6714.c)
 *     sub_1409A6850 @ 0x1409A6850 (sub_1409A6850.c)
 *     sub_1409A6940 @ 0x1409A6940 (sub_1409A6940.c)
 *     sub_1409A69EC @ 0x1409A69EC (sub_1409A69EC.c)
 *     sub_1409A6AB0 @ 0x1409A6AB0 (sub_1409A6AB0.c)
 *     sub_1409A6B4C @ 0x1409A6B4C (sub_1409A6B4C.c)
 *     sub_1409A6C08 @ 0x1409A6C08 (sub_1409A6C08.c)
 *     sub_1409A6CB4 @ 0x1409A6CB4 (sub_1409A6CB4.c)
 *     sub_1409A6D68 @ 0x1409A6D68 (sub_1409A6D68.c)
 *     sub_1409A6E24 @ 0x1409A6E24 (sub_1409A6E24.c)
 *     sub_1409A8268 @ 0x1409A8268 (sub_1409A8268.c)
 *     sub_1409A8338 @ 0x1409A8338 (sub_1409A8338.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409A6270(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int *a7,
        _BYTE *a8)
{
  unsigned int v12; // esi
  void *Pool2; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // eax

  sub_1409A8268();
  v12 = 0;
  Pool2 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( !sub_1407F0F98() )
  {
    v14 = -1073741637;
    v15 = 1062LL;
LABEL_58:
    sub_1409A8628("TtmDispatchApi", v15, 0xFFFFFFFFLL, v14);
    goto LABEL_59;
  }
  if ( a1 > 4101 )
  {
    if ( a1 != 4102 && a1 != 4103 && a1 != 4104 && (unsigned int)(a1 - 4105) >= 2 )
      goto LABEL_28;
    goto LABEL_15;
  }
  switch ( a1 )
  {
    case 4101:
LABEL_15:
      v16 = 24;
      goto LABEL_16;
    case 4096:
      v16 = 12;
LABEL_12:
      v12 = 8;
      goto LABEL_16;
    case 4097:
      v12 = 16;
      goto LABEL_15;
  }
  if ( a1 != 4098 )
  {
    if ( a1 != 4099 )
    {
      if ( a1 == 4100 )
      {
        v16 = 16;
        v12 = 544;
        goto LABEL_16;
      }
LABEL_28:
      v14 = -1073741811;
      v15 = 1128LL;
      goto LABEL_58;
    }
    v16 = 16;
    goto LABEL_12;
  }
  v16 = 16;
LABEL_16:
  if ( a3 < v16 || !a4 && v12 || a5 < v12 )
  {
    v14 = -1073741789;
    v15 = 1139LL;
    goto LABEL_58;
  }
  if ( v12 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v12, 544040269LL);
    if ( !Pool2 )
    {
      v14 = -1073741801;
      v15 = 1154LL;
      goto LABEL_58;
    }
  }
  if ( a1 > 4101 )
  {
    switch ( a1 )
    {
      case 4102:
        v17 = sub_1409A666C(a2);
        break;
      case 4103:
        v17 = sub_1409A6CB4(a2);
        break;
      case 4104:
        v17 = sub_1409A6D68(a2);
        break;
      case 4105:
        v17 = sub_1409A6C08(a2);
        break;
      case 4106:
        v17 = sub_1409A6E24(a2);
        break;
      default:
        v14 = -1073741811;
        sub_1409A8628("TtmDispatchApi", 1223LL, 0xFFFFFFFFLL, 3221225485LL);
        goto LABEL_53;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 4101:
        v17 = sub_1409A6B4C(a2);
        break;
      case 4096:
        v17 = sub_1409A6AB0(a2, Pool2);
        break;
      case 4097:
        v17 = sub_1409A6850(a2, Pool2);
        break;
      case 4098:
        v17 = sub_1409A6940(a2);
        break;
      case 4099:
        v17 = sub_1409A6714(a2, Pool2);
        break;
      default:
        v17 = sub_1409A69EC(a2, Pool2);
        break;
    }
  }
  v14 = v17;
LABEL_53:
  if ( Pool2 )
  {
    if ( (v14 & 0x80000000) != 0 )
    {
      ExFreePoolWithTag(Pool2, 0x206D654Du);
    }
    else
    {
      *a6 = Pool2;
      *a7 = v12;
      *a8 = 1;
    }
  }
LABEL_59:
  sub_1409A8338((unsigned int)a1, v14);
  return v14;
}
