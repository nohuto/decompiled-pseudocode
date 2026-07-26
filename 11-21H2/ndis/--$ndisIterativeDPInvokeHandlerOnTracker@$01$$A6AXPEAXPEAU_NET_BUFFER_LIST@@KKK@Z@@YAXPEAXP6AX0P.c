/*
 * XREFs of ??$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KKK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0034D48
 * Callers:
 *     ??$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0034A28 (--$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 * Callees:
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x1C00349DC (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 *     ??$ndisIterativeDPGetNumNbls@$01@@YAKPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0034D2C (--$ndisIterativeDPGetNumNbls@$01@@YAKPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisIterativeDPInvokeHandlerOnTracker<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
        struct _NDIS_FILTER_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+44h] [rbp-14h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  struct _NDIS_FILTER_BLOCK *v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+28h] BYREF
  int v14; // [rsp+88h] [rbp+30h] BYREF

  v13 = a3;
  v12 = a2;
  v11 = a1;
  v4 = *a4;
  *a4 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 112);
      v14 = *(_DWORD *)(v4 + 132);
      v9 = *(_DWORD *)(v4 + 140);
      v6 = ndisIterativeDPGetNumNbls<2>(v4);
      *(_DWORD *)(v7 + 132) = 0;
      v8 = v6;
      ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
        &v11,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v10,
        &v9,
        &v8,
        &v14);
      v10 = v5;
      v4 = v5;
    }
    while ( v5 );
  }
}
