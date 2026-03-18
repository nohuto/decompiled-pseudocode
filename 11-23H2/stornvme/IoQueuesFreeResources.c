/*
 * XREFs of IoQueuesFreeResources @ 0x1C000AF04
 * Callers:
 *     IoQueuesCreation @ 0x1C000A728 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000A8B4 (IoQueuesCreationAsync.c)
 *     NVMeControllerRemove @ 0x1C000E2F4 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000ED70 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned __int16 v4; // si
  __int64 v5; // rbp
  __int64 v6; // r8
  unsigned __int16 v7; // si
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int i; // ebp
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8

  v2 = 16 * *(unsigned __int16 *)(a1 + 334);
  result = *(unsigned __int16 *)(a1 + 334) << 6;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    if ( *(_QWORD *)(a1 + 872) )
    {
      v4 = 0;
      if ( *(_WORD *)(a1 + 336) )
      {
        v5 = (unsigned int)result;
        do
        {
          v6 = *(_QWORD *)(a1 + 872) + 136LL * v4;
          NVMeFreeDmaBuffer(a1, v5, v6, *(_QWORD *)(v6 + 8));
          ++v4;
        }
        while ( v4 < *(_WORD *)(a1 + 336) );
      }
    }
    if ( *(_QWORD *)(a1 + 880) )
    {
      v7 = 0;
      if ( *(_WORD *)(a1 + 338) )
      {
        v8 = v2;
        do
        {
          v9 = 392LL * v7;
          v10 = *(_QWORD *)(a1 + 880);
          if ( *(_BYTE *)(v9 + v10 + 248) && *(_QWORD *)(v9 + v10 + 256) )
          {
            for ( i = 0;
                  i < *(unsigned __int16 *)(a1 + 242);
                  StorPortExtendedFunction(
                    91LL,
                    a1,
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 880) + v9 + 256) + 8LL * i++)) )
            {
              ;
            }
            v12 = *(_QWORD *)(*(_QWORD *)(a1 + 880) + v9 + 256);
            if ( v12 )
              StorPortExtendedFunction(1LL, a1, v12);
          }
          NVMeFreeDmaBuffer(a1, v8, v9 + *(_QWORD *)(a1 + 880), *(_QWORD *)(v9 + *(_QWORD *)(a1 + 880) + 8));
          ++v7;
        }
        while ( v7 < *(_WORD *)(a1 + 338) );
      }
    }
    v13 = *(_QWORD *)(a1 + 872);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 24);
      if ( v14 )
        StorPortExtendedFunction(1LL, a1, v14);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 32LL);
      if ( v15 )
        StorPortExtendedFunction(1LL, a1, v15);
      v16 = *(_QWORD *)(a1 + 872);
      if ( v16 )
        StorPortExtendedFunction(1LL, a1, v16);
    }
    result = *(_QWORD *)(a1 + 880);
    if ( result )
    {
      v17 = *(_QWORD *)(result + 192);
      if ( v17 )
        StorPortExtendedFunction(1LL, a1, v17);
      result = *(_QWORD *)(a1 + 880);
      v18 = *(_QWORD *)(result + 224);
      if ( v18 )
        result = StorPortExtendedFunction(1LL, a1, v18);
      v19 = *(_QWORD *)(a1 + 880);
      if ( v19 )
        result = StorPortExtendedFunction(1LL, a1, v19);
    }
  }
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_DWORD *)(a1 + 336) = 0;
  return result;
}
