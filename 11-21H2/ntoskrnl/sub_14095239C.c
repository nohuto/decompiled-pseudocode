/*
 * XREFs of sub_14095239C @ 0x14095239C
 * Callers:
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 */

__int64 __fastcall sub_14095239C(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2, _QWORD *a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  _OWORD v18[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v19; // [rsp+58h] [rbp+7h]
  __int64 v20; // [rsp+68h] [rbp+17h]
  _OWORD v21[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v22; // [rsp+90h] [rbp+3Fh]
  __int64 v23; // [rsp+A0h] [rbp+4Fh]

  v20 = 0LL;
  v23 = 0LL;
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  v7 = sub_14074C6C0(a2, (ULONG_PTR)qword_14003A410, 1u, 0x38u, 0LL, (USHORT *)v18);
  if ( v7 < 0 )
  {
    v8 = qword_140C448A8;
    v9 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v9 )
      v9 = 1293;
    *(_DWORD *)(qword_140C448A8 + 33272) = v9;
    v10 = *(_DWORD *)(v8 + 33276);
    if ( !v10 )
      v10 = 3;
    *(_DWORD *)(v8 + 33276) = v10;
    goto LABEL_28;
  }
  v7 = sub_14074C6C0(DeviceObject, (ULONG_PTR)qword_14003A410, 1u, 0x38u, 0LL, (USHORT *)v21);
  if ( v7 >= 0 )
  {
    if ( (_QWORD)v22 && (_QWORD)v19 && v20 )
    {
      v7 = sub_14042A5E0(*((_QWORD *)&v21[0] + 1), a3);
      if ( v7 < 0 )
      {
        v8 = 1325LL;
        goto LABEL_9;
      }
      v7 = sub_14042A5E0(*((_QWORD *)&v18[0] + 1), a4);
      if ( v7 < 0 )
      {
        v8 = 1333LL;
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_14042A5E0(*((_QWORD *)&v18[0] + 1), *a3) )
      {
        v7 = 0;
        goto LABEL_28;
      }
      v14 = qword_140C448A8;
      v15 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v15 )
        v15 = 1346;
      v8 = 4LL;
      *(_DWORD *)(qword_140C448A8 + 33272) = v15;
      v16 = *(_DWORD *)(v14 + 33276);
      if ( !v16 )
        v16 = 4;
      *(_DWORD *)(v14 + 33276) = v16;
    }
    v7 = -1073741811;
    goto LABEL_28;
  }
  v8 = 1305LL;
LABEL_9:
  v11 = qword_140C448A8;
  v12 = *(_DWORD *)(qword_140C448A8 + 33272);
  if ( !v12 )
    v12 = v8;
  *(_DWORD *)(qword_140C448A8 + 33272) = v12;
  v13 = *(_DWORD *)(v11 + 33276);
  if ( !v13 )
    v13 = 3;
  *(_DWORD *)(v11 + 33276) = v13;
LABEL_28:
  if ( *((_QWORD *)&v18[0] + 1) )
    sub_14042A5E0(*((_QWORD *)&v18[0] + 1), v8);
  if ( *((_QWORD *)&v21[0] + 1) )
    sub_14042A5E0(*((_QWORD *)&v21[0] + 1), v8);
  return (unsigned int)v7;
}
