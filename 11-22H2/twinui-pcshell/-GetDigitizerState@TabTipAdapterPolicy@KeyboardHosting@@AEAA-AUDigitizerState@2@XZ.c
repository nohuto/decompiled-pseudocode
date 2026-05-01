/*
 * XREFs of ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x180531FEC
 * Callers:
 *     ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180533C60 (-LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1803D9538 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Buy_nonzero@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x180535CE0 (-_Buy_nonzero@-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std.c)
 *     ?_Tidy@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAXXZ @ 0x180535ED8 (-_Tidy@-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX.c)
 */

char *__fastcall KeyboardHosting::TabTipAdapterPolicy::GetDigitizerState(__int64 a1, char *a2)
{
  char v3; // r14
  char v4; // r15
  const char *v5; // r9
  size_t v6; // rbx
  char *v7; // rdi
  const char *v8; // r9
  unsigned int v9; // r8d
  __int64 i; // rdx
  char *v11; // rcx
  __int64 v12; // r9
  char *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  char *result; // rax
  void *v25[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-D0h]
  char v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+58h] [rbp-B0h]
  wil::details::in1diag3 *retaddr; // [rsp+4A0h] [rbp+398h]
  unsigned int v30; // [rsp+4A8h] [rbp+3A0h] BYREF
  int v31; // [rsp+4ACh] [rbp+3A4h]

  v31 = HIDWORD(a1);
  v30 = 0;
  v3 = 0;
  v4 = 0;
  if ( (unsigned int)GetPointerDevices(&v30, 0LL) && v30 )
  {
    v26 = 0LL;
    v6 = v30;
    *(_OWORD *)v25 = 0LL;
    std::vector<tagPOINTER_DEVICE_INFO>::_Buy_nonzero(v25, v30);
    v7 = (char *)v25[0];
    v6 *= 1080LL;
    memset_0(v25[0], 0, v6);
    v25[1] = &v7[v6];
    if ( (unsigned int)GetPointerDevices(&v30, v7) )
    {
      v9 = v30;
      for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
      {
        if ( v3 && v4 )
          break;
        v11 = &v27;
        v12 = 8LL;
        v13 = &v7[1080 * (unsigned int)i];
        do
        {
          v14 = *((_OWORD *)v13 + 1);
          *(_OWORD *)v11 = *(_OWORD *)v13;
          v15 = *((_OWORD *)v13 + 2);
          *((_OWORD *)v11 + 1) = v14;
          v16 = *((_OWORD *)v13 + 3);
          *((_OWORD *)v11 + 2) = v15;
          v17 = *((_OWORD *)v13 + 4);
          *((_OWORD *)v11 + 3) = v16;
          v18 = *((_OWORD *)v13 + 5);
          *((_OWORD *)v11 + 4) = v17;
          v19 = *((_OWORD *)v13 + 6);
          *((_OWORD *)v11 + 5) = v18;
          v20 = *((_OWORD *)v13 + 7);
          v13 += 128;
          *((_OWORD *)v11 + 6) = v19;
          v11 += 128;
          *((_OWORD *)v11 - 1) = v20;
          --v12;
        }
        while ( v12 );
        v21 = *((_OWORD *)v13 + 1);
        *(_OWORD *)v11 = *(_OWORD *)v13;
        v22 = *((_OWORD *)v13 + 2);
        v23 = *((_QWORD *)v13 + 6);
        *((_OWORD *)v11 + 1) = v21;
        *((_OWORD *)v11 + 2) = v22;
        *((_QWORD *)v11 + 6) = v23;
        if ( (unsigned int)(v28 - 1) <= 1 )
        {
          v3 = 1;
        }
        else if ( v28 == 3 )
        {
          v4 = 1;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Log_GetLastError(
        retaddr,
        (void *)0x7CB,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        v8);
    }
    std::vector<tagPOINTER_DEVICE_INFO>::_Tidy(v25, i);
  }
  else
  {
    wil::details::in1diag3::Log_GetLastError(
      retaddr,
      (void *)0x7D0,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      v5);
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
