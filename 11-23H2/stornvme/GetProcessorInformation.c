/*
 * XREFs of GetProcessorInformation @ 0x1C000A000
 * Callers:
 *     NVMeControllerFilterResourceRequirements @ 0x1C000CE8C (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerInitPart1 @ 0x1C000D910 (NVMeControllerInitPart1.c)
 * Callees:
 *     memset @ 0x1C0004D40 (memset.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     FreeProcessorInfo @ 0x1C0009B78 (FreeProcessorInfo.c)
 */

char __fastcall GetProcessorInformation(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r12
  _DWORD *v4; // r14
  _QWORD *v5; // rbx
  unsigned __int16 v6; // dx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned __int8 v10; // r13
  __int64 v11; // r15
  __int64 v13; // [rsp+58h] [rbp-A8h]
  _OWORD v14[5]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v15; // [rsp+158h] [rbp+58h]
  unsigned __int16 v16; // [rsp+160h] [rbp+60h]
  unsigned __int16 v17; // [rsp+168h] [rbp+68h] BYREF
  unsigned __int8 v18; // [rsp+16Ah] [rbp+6Ah]
  char v19; // [rsp+16Bh] [rbp+6Bh]

  FreeProcessorInfo(a1);
  if ( *(_WORD *)(a1 + 240) )
  {
    v2 = *(unsigned __int16 *)(a1 + 242);
    if ( (_WORD)v2 )
    {
      v3 = a1 + 272;
      StorPortExtendedFunction(0LL, a1, (unsigned int)(72 * v2));
      if ( *(_QWORD *)(a1 + 272) )
      {
        NVMeZeroMemory(*(void **)(a1 + 272), 72 * *(unsigned __int16 *)(a1 + 242));
        v4 = (_DWORD *)(a1 + 248);
        StorPortExtendedFunction(22LL, a1, a1 + 248);
        StorPortExtendedFunction(20LL, a1, a1 + 244);
        if ( *(_DWORD *)(a1 + 244) )
        {
          v5 = (_QWORD *)(a1 + 264);
          StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * (*v4 + 1)));
          if ( *(_QWORD *)(a1 + 264) )
          {
            NVMeZeroMemory(*(void **)(a1 + 264), 24 * (*v4 + 1));
            v6 = 0;
            v7 = 0;
            v15 = 0;
            while ( 1 )
            {
              v13 = 3LL * v6;
              *(_WORD *)(*v5 + 8 * v13) = v6;
              StorPortExtendedFunction(21LL, a1, v7);
              v8 = *(_DWORD *)(*v5 + 8 * v13 + 8) - ((*(_DWORD *)(*v5 + 8 * v13 + 8) >> 1) & 0x55555555);
              *(_WORD *)(*v5 + 8 * v13 + 2) = (unsigned __int16)((16843009
                                                                * (((v8 & 0x33333333)
                                                                  + ((v8 >> 2) & 0x33333333)
                                                                  + (((v8 & 0x33333333) + ((v8 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
              v9 = HIDWORD(*(_QWORD *)(*v5 + 8 * v13 + 8))
                 - (((unsigned int)HIDWORD(*(_QWORD *)(*v5 + 8 * v13 + 8)) >> 1) & 0x55555555);
              *(_WORD *)(*v5 + 8 * v13 + 2) += (unsigned __int16)((16843009
                                                                 * (((v9 & 0x33333333)
                                                                   + ((v9 >> 2) & 0x33333333)
                                                                   + (((v9 & 0x33333333) + ((v9 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
              v16 = *(_WORD *)(*v5 + 8 * v13 + 16);
              if ( *(_WORD *)(*v5 + 8 * v13 + 2) )
              {
                v10 = 0;
                v11 = *(_QWORD *)(*v5 + 8 * v13 + 8);
                if ( v11 )
                  break;
              }
              v6 = ++v15;
              v7 = v15;
              if ( (unsigned int)v15 > *v4 )
              {
                *(_DWORD *)(a1 + 308) = 0;
                *(_DWORD *)(a1 + 312) = 0;
                *(_DWORD *)(a1 + 304) = 0;
                *(_DWORD *)(a1 + 316) = 0;
                *(_DWORD *)(a1 + 320) = 0;
                return 1;
              }
            }
            while ( !_bittest64(&v11, v10) )
              ++v10;
            memset(v14, 0, sizeof(v14));
            v17 = v16;
            v18 = v10;
            v19 = 0;
            StorPortExtendedFunction(56LL, a1, &v17);
            **(_DWORD **)v3 = 0;
            *(_QWORD *)(*(_QWORD *)v3 + 40LL) = *(_QWORD *)(a1 + 256) + 16LL * v16;
            *(_QWORD *)(*(_QWORD *)v3 + 48LL) = *v5 + 8 * v13;
            StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 242));
          }
        }
      }
    }
  }
  FreeProcessorInfo(a1);
  return 0;
}
