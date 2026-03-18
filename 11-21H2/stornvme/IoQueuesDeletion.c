/*
 * XREFs of IoQueuesDeletion @ 0x1C0017F20
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C0018BDC (NVMeControllerPowerDown.c)
 *     NVMeControllerStop @ 0x1C00195A8 (NVMeControllerStop.c)
 * Callees:
 *     NVMeIoCompletionQueueDelete @ 0x1C0023504 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0023810 (NVMeIoSubmissionQueueDelete.c)
 */

char __fastcall IoQueuesDeletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  unsigned __int16 v6; // dx
  unsigned __int16 i; // di
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // dx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int16 j; // di
  unsigned __int16 v16; // [rsp+78h] [rbp+38h]
  unsigned __int16 v17; // [rsp+78h] [rbp+38h]
  __int16 v18; // [rsp+78h] [rbp+38h]
  unsigned __int16 v19; // [rsp+78h] [rbp+38h]
  unsigned __int16 v20; // [rsp+78h] [rbp+38h]

  v5 = 1;
  v16 = 0;
  if ( *(_WORD *)(a1 + 440) > 4u )
  {
    do
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      if ( *(_WORD *)(a1 + 440) <= 4u )
        break;
      ++v16;
    }
    while ( v16 < 0x3E8u );
  }
  v6 = *(_WORD *)(a1 + 304);
  v17 = 0;
  if ( v6 )
  {
    do
    {
      for ( i = 0; i < 0x3E8u; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL, a4);
        v8 = v17;
        if ( !*(_WORD *)(136LL * v17 + *(_QWORD *)(a1 + 792) + 128) )
          break;
      }
      v6 = *(_WORD *)(a1 + 304);
      ++v17;
    }
    while ( (unsigned __int16)(v8 + 1) < v6 );
  }
  v9 = *(_WORD *)(a1 + 306);
  v10 = 0;
  v18 = 0;
  if ( v9 )
  {
    v11 = 0;
    do
    {
      v12 = 344LL * v11;
      v13 = *(_QWORD *)(a1 + 800);
      if ( *(_BYTE *)(v12 + v13 + 200) )
      {
        if ( *(_QWORD *)(v12 + v13 + 208) )
        {
          for ( j = 0; j < *(_WORD *)(a1 + 234); ++j )
          {
            StorPortExtendedFunction(
              90LL,
              a1,
              *(_QWORD *)(*(_QWORD *)(344LL * v10 + *(_QWORD *)(a1 + 800) + 208) + 8LL * j),
              0LL);
            v10 = v18;
          }
        }
      }
      v9 = *(_WORD *)(a1 + 306);
      v18 = ++v10;
      v11 = v10;
    }
    while ( v10 < v9 );
    v6 = *(_WORD *)(a1 + 304);
  }
  v19 = 0;
  if ( v6 )
  {
    do
    {
      v5 = NVMeIoSubmissionQueueDelete(a1);
      if ( !v5 )
      {
        *(_DWORD *)(a1 + 36) = 15;
        StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
      }
      ++v19;
    }
    while ( v19 < *(_WORD *)(a1 + 304) );
    v9 = *(_WORD *)(a1 + 306);
  }
  v20 = 0;
  if ( v9 )
  {
    do
    {
      v5 = NVMeIoCompletionQueueDelete(a1);
      if ( !v5 )
      {
        *(_DWORD *)(a1 + 36) = 16;
        StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
      }
      ++v20;
    }
    while ( v20 < *(_WORD *)(a1 + 306) );
  }
  return v5;
}
