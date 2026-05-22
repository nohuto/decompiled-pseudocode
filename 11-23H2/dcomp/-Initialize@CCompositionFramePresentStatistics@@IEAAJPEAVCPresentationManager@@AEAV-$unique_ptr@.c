/*
 * XREFs of ?Initialize@CCompositionFramePresentStatistics@@IEAAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@@Z @ 0x1801B0E04
 * Callers:
 *     ?Create@CCompositionFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801B0C54 (-Create@CCompositionFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV-$unique_ptr@VCSeri.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUCompositionFrameDisplayInstance@@@?$vector@UCompositionFrameDisplayInstance@@V?$allocator@UCompositionFrameDisplayInstance@@@std@@@std@@QEAAPEAUCompositionFrameDisplayInstance@@QEAU2@AEBU2@@Z @ 0x1801B0A78 (--$_Emplace_reallocate@AEBUCompositionFrameDisplayInstance@@@-$vector@UCompositionFrameDisplayIn.c)
 *     ?GetContentForResourceId@CPresentationManager@@QEAAPEAVCPresentationSurface@@_K@Z @ 0x1801B0D28 (-GetContentForResourceId@CPresentationManager@@QEAAPEAVCPresentationSurface@@_K@Z.c)
 */

__int64 __fastcall CCompositionFramePresentStatistics::Initialize(
        _QWORD *a1,
        CPresentationManager *a2,
        unsigned __int64 **a3)
{
  unsigned int v3; // ebx
  _QWORD *i; // rdx
  unsigned int *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edx
  struct CPresentationSurface *ContentForResourceId; // rax
  __int64 v13; // rax
  int v14; // r14d
  int v15; // r8d
  unsigned __int64 j; // rcx
  unsigned int *v17; // rdx
  __int64 v18; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int128 v22; // xmm0
  unsigned int v23; // eax
  __int64 v24; // xmm1_8
  __int64 v25; // rdx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v29[40]; // [rsp+30h] [rbp-40h]
  unsigned int v30; // [rsp+58h] [rbp-18h]

  v3 = 0;
  for ( i = (_QWORD *)**a3; (unsigned __int64)i < (*a3)[1]; i = (_QWORD *)((char *)i + *v8 + 20) )
  {
    v8 = (unsigned int *)(i + 2);
    v9 = *i - *(_QWORD *)&GUID_7435e52d_bda4_42a3_9202_521c00f87c0c.Data1;
    if ( *i == *(_QWORD *)&GUID_7435e52d_bda4_42a3_9202_521c00f87c0c.Data1 )
      v9 = i[1] - *(_QWORD *)GUID_7435e52d_bda4_42a3_9202_521c00f87c0c.Data4;
    if ( !v9 && *v8 == 32 )
    {
      a1[2] = *(_QWORD *)((char *)i + 20);
      ContentForResourceId = CPresentationManager::GetContentForResourceId(a2, *(_QWORD *)((char *)i + 28));
      if ( ContentForResourceId )
        v13 = *((_QWORD *)ContentForResourceId + 6);
      else
        v13 = -1LL;
      a1[3] = v13;
      v14 = 0;
      a1[4] = *(_QWORD *)(v8 + 5);
      if ( !v8[7] )
        return v3;
      while ( 1 )
      {
        v15 = 0;
        for ( j = **a3; ; j += *v17 + 20LL )
        {
          if ( j >= (*a3)[1] )
          {
            v10 = 50;
            goto LABEL_9;
          }
          v17 = (unsigned int *)(j + 16);
          v18 = *(_QWORD *)j - *(_QWORD *)&GUID_276346ed_6203_420e_9822_1b609efb68e0.Data1;
          if ( *(_QWORD *)j == *(_QWORD *)&GUID_276346ed_6203_420e_9822_1b609efb68e0.Data1 )
            v18 = *(_QWORD *)(j + 8) - *(_QWORD *)GUID_276346ed_6203_420e_9822_1b609efb68e0.Data4;
          if ( !v18 && *v17 == 60 )
            break;
LABEL_22:
          ;
        }
        if ( v15 != v14 )
          break;
        v19 = *(_DWORD *)(j + 20);
        v28 = *(_OWORD *)(v17 + 2);
        *(_QWORD *)v29 = *((_QWORD *)v17 + 3);
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 )
              *(_DWORD *)&v29[8] = 1;
          }
          else
          {
            *(_DWORD *)&v29[8] = 0;
          }
        }
        else
        {
          *(_DWORD *)&v29[8] = 2;
        }
        v22 = *(_OWORD *)(v17 + 9);
        v29[36] = *((_BYTE *)v17 + 32);
        v23 = v17[15];
        v24 = *(_QWORD *)(v17 + 13);
        v25 = a1[6];
        *(_OWORD *)&v29[12] = v22;
        v30 = v23;
        *(_QWORD *)&v29[28] = v24;
        if ( v25 == a1[7] )
        {
          std::vector<CompositionFrameDisplayInstance>::_Emplace_reallocate<CompositionFrameDisplayInstance const &>(
            (__int64)(a1 + 5),
            (_BYTE *)v25,
            (__int64)&v28);
        }
        else
        {
          v26 = *(_OWORD *)v29;
          *(_OWORD *)v25 = v28;
          v27 = *(_OWORD *)&v29[16];
          *(_OWORD *)(v25 + 16) = v26;
          *(_QWORD *)&v26 = *(_QWORD *)&v29[32];
          *(_OWORD *)(v25 + 32) = v27;
          *(_QWORD *)(v25 + 48) = v26;
          *(_DWORD *)(v25 + 56) = v23;
          a1[6] += 60LL;
        }
        if ( ++v14 >= v8[7] )
          return v3;
      }
      ++v15;
      goto LABEL_22;
    }
  }
  v10 = 39;
LABEL_9:
  v3 = -2147467259;
  DoStackCaptureDirect(-2147467259, v10);
  return v3;
}
