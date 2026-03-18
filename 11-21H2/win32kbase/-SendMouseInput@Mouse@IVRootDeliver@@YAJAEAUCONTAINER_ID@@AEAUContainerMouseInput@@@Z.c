/*
 * XREFs of ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x1C01F491C
 * Callers:
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01FA61C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01F4A2C (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::SendMouseInput(
        IVRootDeliver::Mouse *this,
        struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3)
{
  int v4; // r8d
  IVRootDeliver::Mouse::Detail *v5; // r9
  __int64 v6; // r14
  unsigned int v7; // edi
  unsigned int v8; // esi
  char v9; // cl
  __int64 v10; // r13
  const struct CONTAINER_ID *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  int v14; // eax
  int v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+3Ch] [rbp-14h]
  int v20; // [rsp+44h] [rbp-Ch]
  char v22; // [rsp+A0h] [rbp+50h]

  if ( CIVChannel::ContainerConnected(*((_DWORD *)gpMouseSensor + 318)) )
  {
    v6 = *(_QWORD *)a2;
    v7 = v4 + 1;
    v8 = *((_DWORD *)a2 + 2);
    v9 = 0;
    v22 = 0;
    v10 = *(_QWORD *)a2;
    v11 = *(const struct CONTAINER_ID **)(*(_QWORD *)a2 + 24LL);
    if ( v8 >= v4 + 1 )
    {
      do
      {
        v12 = (unsigned __int64)v7 << 6;
        v13 = v12 + v6;
        if ( *(const struct CONTAINER_ID **)(v12 + v6 + 24) != v11 || v7 == v8 )
        {
          v17 = v10;
          v18 = (__int64)(v6 + v12 - v10) >> 6;
          LOBYTE(v16) = 0;
          v20 = v16;
          v19 = 0LL;
          if ( !v9 && *((_BYTE *)a2 + 20) )
          {
            v14 = *((_DWORD *)a2 + 5);
            v19 = *(_QWORD *)((char *)a2 + 12);
            v20 = v14;
            v22 = 1;
          }
          v4 = IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(v5, v11, &v17, v5);
          if ( v4 < 0 )
            return (unsigned int)v4;
          v9 = v22;
          v5 = this;
          if ( v7 != v8 )
          {
            v11 = *(const struct CONTAINER_ID **)(v13 + 24);
            v10 = v13;
          }
        }
        v8 = *((_DWORD *)a2 + 2);
        ++v7;
      }
      while ( v7 <= v8 );
    }
  }
  return (unsigned int)v4;
}
