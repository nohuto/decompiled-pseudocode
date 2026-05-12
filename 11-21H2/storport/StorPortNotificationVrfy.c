/*
 * XREFs of StorPortNotificationVrfy @ 0x1C0095440
 * Callers:
 *     <none>
 * Callees:
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

void StorPortNotificationVrfy(int a1, _QWORD *a2, ...)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ecx
  _QWORD *v12; // [rsp+68h] [rbp+10h]
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+20h]
  __int64 v16; // [rsp+80h] [rbp+28h]
  __int64 v17; // [rsp+88h] [rbp+30h]
  __int64 v18; // [rsp+90h] [rbp+38h]
  __int64 v19; // [rsp+98h] [rbp+40h]
  va_list va1; // [rsp+A0h] [rbp+48h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v12 = a2;
  v3 = 4096;
  if ( a1 <= 4096 )
  {
    if ( a1 != 4096 )
    {
      if ( a1 )
      {
        v4 = 3;
        switch ( a1 )
        {
          case 3:
LABEL_36:
            StorPortNotification(v4, a2, va);
            return;
          case 6:
            v5 = (unsigned int)v15;
            v7 = 6;
            v6 = v13;
            break;
          case 8:
            v5 = (unsigned __int8)v15;
            if ( (_BYTE)v15 != 0xFF )
            {
              StorPortNotification(8u, a2, v13, (unsigned __int8)v15, (unsigned __int8)v16, (unsigned __int8)v17);
              return;
            }
            v6 = v13;
            v7 = 8;
            break;
          case 9:
            if ( (_BYTE)v13 == 0xFF )
              StorPortNotification(9u, a2, (unsigned __int8)v13);
            else
              StorPortNotification(9u, a2, (unsigned __int8)v13, (unsigned __int8)v15, (unsigned __int8)v16);
            return;
          case 12:
            StorPortNotification(0xCu, a2, v13);
            return;
          case 14:
            StorPortNotification(0xEu, a2, (unsigned int)v13, v15);
            return;
          case 15:
            StorPortNotification(0xFu, a2, v13);
            return;
          default:
            goto LABEL_35;
        }
        StorPortNotification(v7, a2, v6, v5);
        return;
      }
      v8 = v13;
      if ( *(_BYTE *)(v13 + 2) == 40 )
        v9 = *(void **)(v13 + 104);
      else
        v9 = *(void **)(v13 + 56);
      memset(v9, 254, (*(_DWORD *)(*(_QWORD *)*(a2 - 2) + 484LL) + 7) & 0xFFFFFFF8);
      a2 = v12;
      v10 = v8;
      v11 = 0;
LABEL_26:
      StorPortNotification(v11, a2, v10);
      return;
    }
LABEL_44:
    StorPortNotification(v3, a2, v13, v15);
    return;
  }
  switch ( a1 )
  {
    case 4097:
      v3 = 4097;
      goto LABEL_44;
    case 4098:
      StorPortNotification(0x1002u, a2, v13, v15, v16, v17);
      return;
    case 4099:
      StorPortNotification(0x1003u, a2, (unsigned int)v13, v15, v16);
      return;
    case 4100:
      v10 = v13;
      v11 = 4100;
      goto LABEL_26;
    case 4101:
      StorPortNotification(0x1005u, a2, (unsigned int)v13, v15, v16, v17, v18, v19);
      return;
    case 4102:
      v3 = 4102;
      goto LABEL_44;
  }
  if ( a1 != 4103 )
  {
LABEL_35:
    v4 = a1;
    goto LABEL_36;
  }
  StorPortNotification(0x1007u, a2, v13, v15, v16);
}
