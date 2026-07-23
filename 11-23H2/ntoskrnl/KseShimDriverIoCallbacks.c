/*
 * XREFs of KseShimDriverIoCallbacks @ 0x140693D74
 * Callers:
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KsepPoolFreeNonPaged @ 0x140209F04 (KsepPoolFreeNonPaged.c)
 *     KsepLogInfo @ 0x14037424C (KsepLogInfo.c)
 *     KsepPoolAllocateNonPaged @ 0x1403A5FE4 (KsepPoolAllocateNonPaged.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KsepDebugPrint @ 0x1405811C4 (KsepDebugPrint.c)
 *     KsepGetShimCallbacksForDriver @ 0x140693B60 (KsepGetShimCallbacksForDriver.c)
 *     KsepDriverPathTail @ 0x140693FA4 (KsepDriverPathTail.c)
 *     KsepStringFree @ 0x1406948CC (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x140694900 (KsepStringDuplicateUnicode.c)
 */

__int64 __fastcall KseShimDriverIoCallbacks(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int ShimCallbacksForDriver; // edi
  char *NonPaged; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed __int64 v16; // r8
  __int64 (__fastcall **v17)(__int64, IRP *); // rcx
  char *v18; // r9
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, IRP *); // rdx
  __int64 (__fastcall *v21)(__int64, IRP *); // r10
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v24[32]; // [rsp+48h] [rbp-C0h] BYREF

  v3 = a1[6];
  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  ShimCallbacksForDriver = 0;
  if ( a3 )
  {
    if ( dword_140C64D34 == 2 && (KseEngine & 1) == 0 )
    {
      ShimCallbacksForDriver = KsepStringDuplicateUnicode(v23, a3);
      if ( ShimCallbacksForDriver >= 0 )
      {
        ShimCallbacksForDriver = KsepDriverPathTail(v23, &v23[2]);
        if ( ShimCallbacksForDriver >= 0 )
        {
          ShimCallbacksForDriver = KsepGetShimCallbacksForDriver(a1[3], v24);
          if ( ShimCallbacksForDriver >= 0 )
          {
            NonPaged = (char *)KsepPoolAllocateNonPaged(0x100uLL);
            if ( NonPaged )
            {
              v9 = a1[11];
              if ( v9 )
              {
                v10 = v24[0];
                if ( v24[0] )
                {
                  *(_QWORD *)NonPaged = v9;
                  a1[11] = v10;
                }
              }
              v11 = a1[12];
              if ( v11 )
              {
                v22 = v24[1];
                if ( v24[1] )
                {
                  *((_QWORD *)NonPaged + 1) = v11;
                  a1[12] = v22;
                }
              }
              v12 = a1[13];
              if ( v12 )
              {
                v13 = v24[2];
                if ( v24[2] )
                {
                  *((_QWORD *)NonPaged + 2) = v12;
                  a1[13] = v13;
                }
              }
              v14 = *(_QWORD *)(v3 + 8);
              if ( v14 )
              {
                v15 = v24[3];
                if ( v24[3] )
                {
                  *((_QWORD *)NonPaged + 3) = v14;
                  *(_QWORD *)(v3 + 8) = v15;
                }
              }
              v16 = NonPaged - (char *)a1;
              v17 = (__int64 (__fastcall **)(__int64, IRP *))(a1 + 14);
              v18 = (char *)((char *)&v24[4] - (char *)a1);
              v19 = 28LL;
              do
              {
                v20 = *v17;
                if ( *v17 )
                {
                  if ( v20 != IopInvalidDeviceRequest )
                  {
                    v21 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v17 + (_QWORD)v18 - 112);
                    if ( v21 )
                    {
                      *(__int64 (__fastcall **)(__int64, IRP *))((char *)v17 + v16 - 80) = v20;
                      *v17 = v21;
                    }
                  }
                }
                ++v17;
                --v19;
              }
              while ( v19 );
              *(_QWORD *)(v3 + 56) = NonPaged;
              ShimCallbacksForDriver = 0;
              KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524550LL;
              if ( (KsepDebugFlag & 1) != 0 )
                KsepDebugPrint(9LL, "KSE: Hooked callbacks for driver [%ws].\n", v23[1], v18, v23[0]);
              KsepLogInfo(9, "KSE: Hooked callbacks for driver [%ws].\n", v23[1], v18, v23[0]);
              goto LABEL_8;
            }
            ShimCallbacksForDriver = -1073741801;
          }
        }
      }
      KsepPoolFreeNonPaged(0LL);
    }
LABEL_8:
    KsepStringFree(v23);
    return (unsigned int)ShimCallbacksForDriver;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524436LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(0LL, "KSE: Callback shimming - missing driver object or driver name.\n");
  KsepLogInfo(0, "KSE: Callback shimming - missing driver object or driver name.\n");
  return 3221225485LL;
}
