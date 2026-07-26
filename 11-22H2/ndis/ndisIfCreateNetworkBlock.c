/*
 * XREFs of ndisIfCreateNetworkBlock @ 0x1C002F31C
 * Callers:
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C002F068 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00BB2C0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CDC0 (WPP_RECORDER_SF_qqqL.c)
 *     ndisCompareGuid @ 0x1C001BE50 (ndisCompareGuid.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0035978 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 */

__int64 __fastcall ndisIfCreateNetworkBlock(__int64 a1, __int64 a2, __int128 *a3, _QWORD *a4)
{
  __int128 *v6; // r15
  unsigned int v8; // ebx
  const wchar_t *v9; // rcx
  __int64 v10; // rbp
  __int64 Pool2; // rax
  _QWORD *v12; // rdi
  __int128 v13; // xmm0
  _QWORD *v14; // rax
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 *v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 **v28; // rcx
  __int64 *v29; // rax
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // edx
  __int64 i; // rax

  v6 = (__int128 *)a2;
  v8 = 0;
  v9 = (const wchar_t *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids;
  v10 = 4LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1,
      a2);
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 || !v6 || !ndisIsValidIfStringParts(v9, *((unsigned __int16 *)a3 + 6)) )
  {
    v8 = -1073741811;
LABEL_36:
    v12 = 0LL;
    goto LABEL_18;
  }
  Pool2 = ExAllocatePool2(64LL, 616LL, 1718174798);
  v12 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741670;
    goto LABEL_36;
  }
  v13 = *v6;
  *(_QWORD *)(Pool2 + 48) = a1;
  *(_DWORD *)(Pool2 + 76) = 1;
  *(_OWORD *)(Pool2 + 32) = v13;
  v14 = (_QWORD *)(Pool2 + 56);
  v14[1] = v14;
  *v14 = v14;
  v15 = v12 + 10;
  do
  {
    v16 = a3[1];
    *v15 = *a3;
    v17 = a3[2];
    v15[1] = v16;
    v18 = a3[3];
    v15[2] = v17;
    v19 = a3[4];
    v15[3] = v18;
    v20 = a3[5];
    v15[4] = v19;
    v21 = a3[6];
    v15[5] = v20;
    v22 = a3[7];
    a3 += 8;
    v15[6] = v21;
    v15 += 8;
    *(v15 - 1) = v22;
    --v10;
  }
  while ( v10 );
  v23 = *a3;
  v24 = (__int64 *)qword_1C00F5DB0;
  *v15 = v23;
  while ( v24 != &qword_1C00F5DB0 )
  {
    v31 = ndisCompareGuid((__int64)v6, (__int64)(v24 + 4));
    if ( !v31 )
    {
      v8 = -1073741270;
LABEL_35:
      ExFreePoolWithTag(v12, 0);
      goto LABEL_36;
    }
    if ( v31 < 0 )
      break;
    v24 = (__int64 *)*v24;
  }
  v25 = *((_DWORD *)v12 + 22);
  if ( v25 )
  {
    if ( v25 >= 0x7FFFFFF )
    {
      v8 = -1073741811;
      goto LABEL_35;
    }
    goto LABEL_15;
  }
  if ( byte_1C00F7710 )
  {
    v32 = dword_1C00F4968;
LABEL_32:
    v33 = v32 & 0xFFFFFFF;
LABEL_33:
    if ( ++v33 == 0xFFFFFFF )
    {
      *((_DWORD *)v12 + 22) = 0xFFFFFFF;
      dword_1C00F4968 = v32 & 0xF0000000 | 0xFFFFFFE;
      v8 = -1073741670;
      goto LABEL_35;
    }
    for ( i = qword_1C00F5DB0; (__int64 *)i != &qword_1C00F5DB0; i = *(_QWORD *)i )
    {
      if ( v33 == *(_DWORD *)(i + 88) )
        goto LABEL_33;
    }
    *((_DWORD *)v12 + 22) = v33;
    dword_1C00F4968 = (v33 ^ v32) & 0xFFFFFFF ^ v32;
    goto LABEL_15;
  }
  dword_1C00F4968 ^= (dword_1C00F4968 ^ (dword_1C00F4968 + 1)) & 0xFFFFFFF;
  if ( (dword_1C00F4968 & 0xFFFFFFF) == 0xFFFFFFF )
  {
    byte_1C00F7710 = 1;
    v32 = dword_1C00F4968 & 0xF0000000 | 0x7FFFFFF;
    dword_1C00F4968 = v32;
    goto LABEL_32;
  }
  *((_DWORD *)v12 + 22) = dword_1C00F4968 & 0xFFFFFFF;
LABEL_15:
  v26 = v24[1];
  ++dword_1C00F51EC;
  v27 = *(_QWORD *)v26;
  if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26
    || (*v12 = v27,
        v12[1] = v26,
        *(_QWORD *)(v27 + 8) = v12,
        v28 = (__int64 **)(a1 + 24),
        *(_QWORD *)v26 = v12,
        v29 = v12 + 2,
        a2 = *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 8) != a1 + 24) )
  {
    __fastfail(3u);
  }
  *v29 = a2;
  v12[3] = v28;
  *(_QWORD *)(a2 + 8) = v29;
  *v28 = v29;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
LABEL_18:
  *a4 = v12;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1,
      (char)v6,
      (char)v12,
      v8);
  return v8;
}
