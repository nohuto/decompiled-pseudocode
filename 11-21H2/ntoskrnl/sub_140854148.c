/*
 * XREFs of sub_140854148 @ 0x140854148
 * Callers:
 *     sub_140853DB0 @ 0x140853DB0 (sub_140853DB0.c)
 *     sub_140853E30 @ 0x140853E30 (sub_140853E30.c)
 *     sub_1409A12C0 @ 0x1409A12C0 (sub_1409A12C0.c)
 * Callees:
 *     sub_140208C24 @ 0x140208C24 (sub_140208C24.c)
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14036BFE0 @ 0x14036BFE0 (sub_14036BFE0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140854148(PDEVICE_OBJECT DeviceObject, unsigned int *a2, ULONG a3, __int64 a4)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  ULONG v5; // esi
  unsigned __int16 *DeviceNode; // r15
  _WORD *Pool2; // r14
  NTSTATUS DeviceProperty; // eax
  signed int v12; // ebx
  ULONG v13; // esi
  unsigned int v14; // esi
  __int64 v15; // r8
  _WORD *v16; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  _WORD *v20; // rdx
  ULONG v21; // [rsp+30h] [rbp-59h]
  ULONG BufferLength; // [rsp+34h] [rbp-55h] BYREF
  __int128 v23; // [rsp+38h] [rbp-51h] BYREF
  char v24; // [rsp+50h] [rbp-39h] BYREF

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v5 = 0;
  BufferLength = 0;
  v21 = a3;
  DeviceNode = (unsigned __int16 *)DeviceObjectExtension->DeviceNode;
  Pool2 = 0LL;
  v23 = 0LL;
  if ( DeviceNode )
  {
    DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    v12 = DeviceProperty;
    if ( DeviceProperty == -1073741789 )
    {
      if ( BufferLength > 0xFFFF )
      {
        v12 = -2147483643;
        goto LABEL_27;
      }
      v5 = BufferLength + 4;
    }
    else if ( DeviceProperty != -1073741772 )
    {
      if ( DeviceProperty >= 0 )
        return (unsigned int)v12;
      goto LABEL_27;
    }
    v13 = DeviceNode[64] + v5;
    if ( a2 )
    {
      v18 = *a2;
      *((_QWORD *)&v23 + 1) = &v24;
      LODWORD(v23) = 0x400000;
      v12 = sub_1402D17BC(&v23, L" (%d)", v18);
      if ( v12 < 0 )
        goto LABEL_27;
      v13 += (unsigned __int16)v23;
    }
    if ( !v13 )
    {
      v12 = -1073741811;
      goto LABEL_27;
    }
    a3 = v21;
    v14 = v13 + 2;
    if ( v14 < 0xFFFF )
    {
      Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * v14, v21);
      if ( !Pool2 )
      {
        v12 = -1073741670;
        goto LABEL_27;
      }
      if ( !BufferLength )
      {
        *(_OWORD *)a4 = 0LL;
        v19 = 0x7FFFLL;
        v20 = Pool2;
        while ( *v20 )
        {
          ++v20;
          if ( !--v19 )
            goto LABEL_47;
        }
        if ( a4 )
        {
          *(_QWORD *)(a4 + 8) = Pool2;
          *(_WORD *)a4 = 2 * (0x7FFF - v19);
        }
LABEL_47:
        *(_WORD *)(a4 + 2) = v14;
LABEL_20:
        v12 = sub_140208C24((_WORD *)a4, DeviceNode + 64);
        if ( v12 >= 0 )
        {
          if ( !BufferLength || (v12 = sub_14036BFE0((unsigned __int16 *)a4, byte_140012E10), v12 >= 0) )
          {
            if ( !a2 )
              return 0;
            v12 = sub_140208C24((_WORD *)a4, (unsigned __int16 *)&v23);
            if ( v12 >= 0 )
              return 0;
          }
        }
        goto LABEL_27;
      }
      v12 = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, Pool2, &BufferLength);
      if ( v12 < 0 )
      {
LABEL_27:
        a3 = v21;
        goto LABEL_31;
      }
      *(_OWORD *)a4 = 0LL;
      v15 = 0x7FFFLL;
      v16 = Pool2;
      do
      {
        if ( !*v16 )
          break;
        ++v16;
        --v15;
      }
      while ( v15 );
      v12 = -1073741811;
      if ( v15 )
      {
        if ( !a4 )
        {
LABEL_18:
          *(_WORD *)(a4 + 2) = v14;
          if ( v12 >= 0 )
          {
            v12 = sub_14036BFE0((unsigned __int16 *)a4, L" (");
            if ( v12 >= 0 )
              goto LABEL_20;
          }
          goto LABEL_27;
        }
        *(_QWORD *)(a4 + 8) = Pool2;
        *(_WORD *)a4 = 2 * (0x7FFF - v15);
      }
      v12 = v15 == 0 ? 0xC000000D : 0;
      goto LABEL_18;
    }
    v12 = -2147483643;
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_31:
  *(_OWORD *)a4 = 0LL;
  if ( Pool2 )
    sub_140346D64(Pool2, a3);
  return (unsigned int)v12;
}
