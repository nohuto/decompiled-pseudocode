/*
 * XREFs of ?SerializeProcessingModeCharacteristics@@YAJAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAKPEAPEAE@Z @ 0x18003C21C
 * Callers:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18001D544 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

__int64 __fastcall SerializeProcessingModeCharacteristics(_QWORD *a1, unsigned int *a2, char **a3)
{
  _OWORD **v3; // r9
  unsigned int i; // r14d
  __int64 j; // rdx
  char *v7; // rax
  char *v8; // rsi
  _OWORD **v9; // r12
  unsigned int v10; // ebx
  _OWORD **v11; // r13
  _DWORD *v12; // rdi
  unsigned int v13; // ebx
  unsigned __int16 ***v14; // r15
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned __int16 *v20; // rdx
  size_t v21; // r8
  unsigned __int16 **v22; // rax
  __int64 v23; // rdx
  unsigned int v25; // ebx
  __int64 v26; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+40h]
  char *v28; // [rsp+70h] [rbp+48h] BYREF
  unsigned int *v29; // [rsp+78h] [rbp+50h]
  char **v30; // [rsp+80h] [rbp+58h]
  unsigned __int16 ***v31; // [rsp+88h] [rbp+60h]

  v30 = a3;
  v29 = a2;
  v3 = (_OWORD **)*a1;
  for ( i = 8; v3 != (_OWORD **)a1[1]; ++v3 )
  {
    i += 20;
    for ( j = *((_QWORD *)*v3 + 2); j != *((_QWORD *)*v3 + 3); j += 8LL )
      i += *(unsigned __int16 *)(**(_QWORD **)j + 16LL) + 38;
  }
  v7 = (char *)CoTaskMemAlloc(i);
  v28 = v7;
  v8 = v7;
  if ( v7 )
  {
    if ( v7 != &v7[i] )
      memset_0(v7, 0, i);
    if ( i < 4 )
    {
      v25 = -2147024774;
      v26 = 117LL;
    }
    else
    {
      *(_DWORD *)v8 = 10;
      if ( i - 4 < 4 )
      {
        v25 = -2147024774;
        v26 = 121LL;
      }
      else
      {
        *((_DWORD *)v8 + 1) = (__int64)(a1[1] - *a1) >> 3;
        v9 = (_OWORD **)*a1;
        v10 = i - 8;
        v11 = (_OWORD **)a1[1];
        v12 = v8 + 8;
        while ( 1 )
        {
          if ( v9 == v11 )
          {
            *v29 = i;
            *v30 = v8;
            return 0LL;
          }
          if ( v10 < 0x10 )
          {
            v25 = -2147024774;
            v26 = 126LL;
            goto LABEL_36;
          }
          v13 = v10 - 16;
          *(_OWORD *)v12 = **v9;
          if ( v13 < 4 )
          {
            v25 = -2147024774;
            v26 = 130LL;
            goto LABEL_36;
          }
          v12[4] = (__int64)(*((_QWORD *)*v9 + 3) - *((_QWORD *)*v9 + 2)) >> 3;
          v10 = v13 - 4;
          v12 += 5;
          v14 = (unsigned __int16 ***)*((_QWORD *)*v9 + 2);
          v31 = (unsigned __int16 ***)*((_QWORD *)*v9 + 3);
          if ( v14 != v31 )
            break;
LABEL_23:
          ++v9;
        }
        while ( v10 >= 4 )
        {
          *v12 = *((_DWORD *)*v14 + 2);
          v15 = v10 - 4;
          if ( v15 < 4 )
          {
            v25 = -2147024774;
            v26 = 139LL;
            goto LABEL_36;
          }
          v12[1] = *((_DWORD *)*v14 + 3);
          v16 = v15 - 4;
          if ( v16 < 4 )
          {
            v25 = -2147024774;
            v26 = 142LL;
            goto LABEL_36;
          }
          v12[2] = *((_DWORD *)*v14 + 4);
          v17 = v16 - 4;
          if ( v17 < 4 )
          {
            v25 = -2147024774;
            v26 = 145LL;
            goto LABEL_36;
          }
          v12[3] = *((_DWORD *)*v14 + 5);
          v18 = v17 - 4;
          if ( v18 < 4 )
          {
            v25 = -2147024774;
            v26 = 148LL;
            goto LABEL_36;
          }
          v12[4] = *((_DWORD *)*v14 + 6);
          v19 = v18 - 4;
          v20 = **v14;
          v21 = v20[8] + 18LL;
          if ( v19 < v21 )
          {
            v25 = -2147024774;
            v26 = 150LL;
            goto LABEL_36;
          }
          memcpy_0(v12 + 5, v20, v21);
          v22 = *v14++;
          v23 = (*v22)[8];
          v12 = (_DWORD *)((char *)v12 + v23 + 38);
          v10 = -18 - v23 + v19;
          if ( v14 == v31 )
            goto LABEL_23;
        }
        v25 = -2147024774;
        v26 = 136LL;
      }
    }
  }
  else
  {
    v25 = -2147024882;
    v26 = 109LL;
  }
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
    (const char *)v25);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v28);
  return v25;
}
