/*
 * XREFs of StorPortNotificationVrfy @ 0x1C00B1440
 * Callers:
 *     <none>
 * Callees:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

void __fastcall StorPortNotificationVrfy(
        signed int a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  void *v15; // rcx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  _QWORD *v22; // [rsp+78h] [rbp+10h]
  __int64 v23; // [rsp+80h] [rbp+18h]

  v22 = a2;
  v23 = a3;
  v8 = a1;
  if ( a1 > 4096 )
  {
    v16 = a1 - 4097;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        StorPortNotification(v8, a2, a3, a4, a5, a6);
        return;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        StorPortNotification(v8, a2, (unsigned int)a3, a4, a5);
        return;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
LABEL_25:
        StorPortNotification(v8, a2, a3);
        return;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        StorPortNotification(v8, a2, (unsigned int)a3, a4, a5, a6, a7, a8);
        return;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
          goto LABEL_20;
        StorPortNotification(v8, a2, a3, a4, a5);
        return;
      }
    }
    a1 = v8;
LABEL_38:
    StorPortNotification(a1, a2, a3, a4);
    return;
  }
  if ( a1 == 4096 )
    goto LABEL_38;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
      v15 = *(void **)(a3 + 104);
    else
      v15 = *(void **)(a3 + 56);
    memset_0(v15, 254, (*(_DWORD *)(*(_QWORD *)*(a2 - 2) + 484LL) + 7) & 0xFFFFFFF8);
    a2 = v22;
    a3 = v23;
    goto LABEL_25;
  }
  v9 = a1 - 3;
  if ( !v9 )
    goto LABEL_20;
  v10 = v9 - 3;
  if ( !v10 )
  {
    a4 = (unsigned int)a4;
LABEL_19:
    StorPortNotification(v8, a2, a3, a4);
    return;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    a4 = (unsigned __int8)a4;
    if ( (_BYTE)a4 != 0xFF )
    {
      StorPortNotification(v8, a2, a3, (unsigned __int8)a4, (unsigned __int8)a5, (unsigned __int8)a6);
      return;
    }
    goto LABEL_19;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 3;
    if ( !v13 )
      goto LABEL_25;
    v14 = v13 - 2;
    if ( !v14 )
    {
      StorPortNotification(v8, a2, (unsigned int)a3, a4);
      return;
    }
    if ( v14 == 1 )
      goto LABEL_25;
LABEL_20:
    StorPortNotification(v8, a2);
    return;
  }
  if ( (_BYTE)a3 == 0xFF )
    StorPortNotification(v8, a2, 255LL);
  else
    StorPortNotification(v8, a2, (unsigned __int8)a3, (unsigned __int8)a4, (unsigned __int8)a5);
}
