/*
 * XREFs of sub_140780EF0 @ 0x140780EF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_1406928FC @ 0x1406928FC (sub_1406928FC.c)
 *     sub_1406C29BC @ 0x1406C29BC (sub_1406C29BC.c)
 *     sub_1406C29F4 @ 0x1406C29F4 (sub_1406C29F4.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14077E168 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 *     sub_140780AA8 @ 0x140780AA8 (sub_140780AA8.c)
 *     sub_140926C70 @ 0x140926C70 (sub_140926C70.c)
 *     sub_140926D10 @ 0x140926D10 (sub_140926D10.c)
 *     sub_140926DD8 @ 0x140926DD8 (sub_140926DD8.c)
 *     sub_140927048 @ 0x140927048 (sub_140927048.c)
 */

__int64 __fastcall sub_140780EF0(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  struct tagVARIANT *v12; // rbp
  __int64 v13; // rcx
  int v14; // eax
  UNICODE_STRING *v15; // rcx
  struct tagVARIANT *v17; // [rsp+20h] [rbp-38h] BYREF
  GUID ActivityId; // [rsp+28h] [rbp-30h] BYREF

  v3 = 0;
  ActivityId = 0LL;
  if ( a2 > 0x33 )
    return v3;
  v17 = 0LL;
  switch ( a2 )
  {
    case 7u:
LABEL_8:
      v6 = a3[6];
LABEL_9:
      v7 = 0LL;
      goto LABEL_10;
    case 0x16u:
LABEL_7:
      v6 = a3[5];
      v7 = a3[4];
      goto LABEL_10;
    case 0x1Cu:
LABEL_16:
      v6 = *(_QWORD *)(*a3 + 88);
      goto LABEL_9;
  }
  if ( a2 != 29 )
  {
    switch ( a2 )
    {
      case 0u:
      case 0xEu:
      case 0x1Eu:
        v6 = a3[2];
        goto LABEL_9;
      case 1u:
      case 5u:
      case 6u:
        goto LABEL_8;
      case 2u:
      case 4u:
      case 0x22u:
        v6 = a3[3];
        goto LABEL_9;
      case 3u:
      case 0x24u:
      case 0x2Fu:
      case 0x31u:
        v6 = a3[5];
        goto LABEL_9;
      case 8u:
      case 9u:
        v6 = a3[7];
        goto LABEL_9;
      case 0xBu:
      case 0xDu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Fu:
      case 0x23u:
      case 0x25u:
      case 0x27u:
      case 0x2Au:
      case 0x2Cu:
      case 0x2Eu:
      case 0x30u:
      case 0x32u:
        goto LABEL_7;
      case 0x1Au:
        goto LABEL_16;
      case 0x1Bu:
      case 0x21u:
        break;
      case 0x20u:
        v6 = *(_QWORD *)(*a3 + 72);
        goto LABEL_9;
      case 0x26u:
      case 0x29u:
      case 0x2Bu:
      case 0x2Du:
        v6 = a3[4];
        goto LABEL_9;
      case 0x28u:
        v6 = a3[1];
        goto LABEL_9;
      default:
        goto LABEL_12;
    }
  }
  v6 = *(_QWORD *)(*a3 + 40);
  v7 = *(_QWORD *)(*a3 + 32);
LABEL_10:
  if ( v6 )
  {
    v12 = *(struct tagVARIANT **)(v6 + 40);
  }
  else if ( v7 )
  {
    v12 = *(struct tagVARIANT **)(v7 + 8);
  }
  else
  {
LABEL_12:
    if ( a2 == 32 )
    {
      if ( !(unsigned int)sub_1406928FC((unsigned __int64 *)&v17) )
        return v3;
      v12 = v17;
      EtwActivityIdControl(1u, &ActivityId);
      v14 = 18;
      goto LABEL_31;
    }
    if ( ((a2 - 27) & 0xFFFFFFFD) != 0 )
      return v3;
    v9 = *(_QWORD **)(a3[1] + 16);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      return v3;
    while ( 1 )
    {
      v11 = v10[2] - 0x4AC0CFBB85B8669ALL;
      if ( v10[2] == 0x4AC0CFBB85B8669ALL )
        v11 = v10[3] - 0x2277E5BFAA6D89B6LL;
      if ( !v11 )
        break;
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        return v3;
    }
    v12 = (struct tagVARIANT *)v10[6];
  }
  EtwActivityIdControl(1u, &ActivityId);
  switch ( a2 )
  {
    case 0x16u:
      return (unsigned int)sub_140780AA8((__int64)a3);
    case 7u:
      return v3;
    case 0x1Du:
      return (unsigned int)sub_1407806B0(a3, v12);
    case 0x1Cu:
      return (unsigned int)CMSPAddress::get_DynamicTerminalClasses((PCUNICODE_STRING **)a3, v12);
  }
  v14 = a2 - 14;
LABEL_31:
  switch ( v14 )
  {
    case 0:
      v15 = (UNICODE_STRING *)a3[2];
      if ( v15 )
        sub_1406C29F4(v15);
      break;
    case 6:
      v3 = sub_140691CD8((__int64)a3, (__int64)v12);
      break;
    case 12:
      return (unsigned int)CMSPAddress::get_DynamicTerminalClasses((PCUNICODE_STRING **)a3, v12);
    case 13:
      return (unsigned int)sub_1407806B0(a3, v12);
    case 16:
      return (unsigned int)sub_140926D10(v13, v12);
    case 18:
      v3 = sub_14069061C(a3, v12);
      break;
    case 20:
      return (unsigned int)sub_140927048(a3, v12);
    case 21:
      return (unsigned int)sub_140926C70(a3, v12);
    case 26:
      sub_1406C29BC((PVOID *)a3[1]);
      break;
    case 33:
      return (unsigned int)sub_140926DD8(a3);
    default:
      return v3;
  }
  return v3;
}
