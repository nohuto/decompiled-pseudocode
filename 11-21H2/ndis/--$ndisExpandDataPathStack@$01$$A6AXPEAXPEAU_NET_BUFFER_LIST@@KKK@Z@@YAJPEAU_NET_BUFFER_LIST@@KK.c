/*
 * XREFs of ??$ndisExpandDataPathStack@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KKK@Z@Z @ 0x1C0039472
 * Callers:
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0034FB8 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 * Callees:
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x1C00349DC (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 *     ?ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z @ 0x1C003A2DE (-ndisExpandStackAllocationLikely@@YAJP6AXPEAX@Z0@Z.c)
 */

__int64 __fastcall ndisExpandDataPathStack<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 LowLimit; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 HighLimit; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]
  int v17; // [rsp+78h] [rbp-8h]
  int v18; // [rsp+7Ch] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+20h] BYREF
  int v21; // [rsp+A8h] [rbp+28h] BYREF
  int v22; // [rsp+B0h] [rbp+30h] BYREF
  int v23; // [rsp+B8h] [rbp+38h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v20 = a1;
  v7 = (unsigned int)Size;
  v8 = KeGetPcr()->Prcb.Number << 12;
  v9 = *(_QWORD *)(v8 + qword_1C00EC728);
  LowLimit = v9;
  v10 = *(_QWORD *)(v8 + qword_1C00EC720);
  HighLimit = v10;
  if ( v9 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v10 )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    v9 = LowLimit;
  }
  if ( (unsigned __int64)&retaddr - v9 < v7 )
  {
    v18 = 0;
    v14[0] = a5;
    v14[1] = a6;
    v14[2] = a7;
    v14[3] = v20;
    v16 = v22;
    v15 = v21;
    v17 = v23;
    return ndisExpandStackAllocationLikely(
             (void (*)(void *))ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>,
             v14);
  }
  else
  {
    ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
      (struct _NDIS_FILTER_BLOCK **)&a5,
      (__int64)&a7,
      (__int64)&a6,
      (__int64)&v20,
      &v21,
      &v22,
      &v23);
    return 0LL;
  }
}
