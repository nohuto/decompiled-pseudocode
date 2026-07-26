/*
 * XREFs of ??$ndisIterativeDPInvokeHandlerOnTracker@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KKK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0036E7C
 * Callers:
 *     ??$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0036B5C (--$ndisInvokeIterativeDatapath@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 * Callees:
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x1C0036B10 (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 *     ??$ndisIterativeDPGetNumNbls@$01@@YAKPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0036E60 (--$ndisIterativeDPGetNumNbls@$01@@YAKPEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisIterativeDPInvokeHandlerOnTracker<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
        struct _NDIS_FILTER_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  struct _NDIS_FILTER_BLOCK *v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  v16 = a3;
  v15 = a2;
  v14 = a1;
  v4 = *a4;
  *a4 = 0LL;
  v13 = v4;
  if ( v4 )
  {
    v5 = v4;
    v6 = v4;
    v7 = v4;
    do
    {
      v8 = *(_QWORD *)(v5 + 112);
      v17 = *(_DWORD *)(v6 + 132);
      v5 = v8;
      v12 = *(_DWORD *)(v7 + 140);
      v9 = ndisIterativeDPGetNumNbls<2>(v4);
      *(_DWORD *)(v10 + 132) = 0;
      v11 = v9;
      ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
        &v14,
        (__int64)&v15,
        (__int64)&v16,
        (__int64)&v13,
        &v12,
        &v11,
        &v17);
      v13 = v8;
      v4 = v8;
      v6 = v8;
      v7 = v8;
    }
    while ( v8 );
  }
}
