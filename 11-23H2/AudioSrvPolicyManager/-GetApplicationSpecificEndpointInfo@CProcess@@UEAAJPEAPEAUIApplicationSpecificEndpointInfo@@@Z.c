/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000A660
 * Callers:
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000CA60 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180026558 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180009F20 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::GetApplicationSpecificEndpointInfo(
        CProcess *this,
        struct IApplicationSpecificEndpointInfo **a2)
{
  __int64 v3; // r13
  _WORD *v5; // rax
  _WORD *v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // r14d
  __int64 *v11; // rbx
  __int64 *v12; // r10
  unsigned __int64 v13; // r11
  char *v14; // r9
  char *v15; // rax
  unsigned __int64 v16; // rcx
  signed __int64 v17; // r9
  unsigned __int16 v18; // dx
  int v19; // eax
  _QWORD *v20; // rax
  unsigned __int64 v21; // r10
  char *v22; // r9
  unsigned __int64 v23; // rcx
  signed __int64 v24; // r9
  unsigned __int16 v25; // dx
  struct IApplicationSpecificEndpointInfo *v27; // rdx
  unsigned int (__fastcall *v28)(Microsoft::WRL::Details *__hidden, volatile int *); // rax
  signed __int32 i; // eax
  _QWORD v31[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-50h]
  unsigned __int64 v33; // [rsp+40h] [rbp-48h]

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 28);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)this + 72LL))(this);
  v6 = v5;
  if ( !v5 || !*v5 )
    v6 = (_WORD *)(*(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)this + 80LL))(this);
  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 32));
  v8 = -1LL;
  v31[0] = 0LL;
  v32 = 0LL;
  v33 = 7LL;
  do
    ++v8;
  while ( v6[v8] );
  if ( v8 > 7 )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(v31, v8, v7, v6);
  }
  else
  {
    v9 = 2 * v8;
    v32 = v8;
    memmove_0(v31, v6, 2 * v8);
    *(_WORD *)((char *)v31 + v9) = 0;
  }
  v10 = 1;
  v11 = *(__int64 **)(v3 + 704);
  v12 = (__int64 *)v11[1];
  while ( !*((_BYTE *)v12 + 25) )
  {
    v13 = v12[6];
    v14 = (char *)(v12 + 4);
    v15 = (char *)v31;
    if ( v33 >= 8 )
      v15 = (char *)v31[0];
    if ( (unsigned __int64)v12[7] >= 8 )
      v14 = *(char **)v14;
    v16 = v32;
    if ( v32 >= v13 )
      v16 = v12[6];
    if ( v16 )
    {
      v17 = v14 - v15;
      while ( 1 )
      {
        v18 = *(_WORD *)&v15[v17];
        if ( v18 < *(_WORD *)v15 )
          break;
        if ( v18 > *(_WORD *)v15 )
        {
          v19 = 1;
          goto LABEL_24;
        }
        if ( v16 == 1 )
          goto LABEL_40;
        --v16;
        v15 += 2;
      }
      v19 = -1;
LABEL_24:
      if ( v19 < 0 )
      {
LABEL_41:
        v12 = (__int64 *)v12[2];
        continue;
      }
    }
    else
    {
LABEL_40:
      if ( v13 < v32 )
        goto LABEL_41;
    }
    v11 = v12;
    v12 = (__int64 *)*v12;
  }
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_46;
  v20 = v11 + 4;
  v21 = v11[6];
  if ( (unsigned __int64)v11[7] >= 8 )
    v20 = (_QWORD *)*v20;
  v22 = (char *)v31;
  v23 = v11[6];
  if ( v33 >= 8 )
    v22 = (char *)v31[0];
  if ( v21 >= v32 )
    v23 = v32;
  if ( !v23 )
  {
LABEL_45:
    if ( v32 >= v21 )
      goto LABEL_47;
    goto LABEL_46;
  }
  v24 = v22 - (char *)v20;
  while ( 1 )
  {
    v25 = *(_WORD *)((char *)v20 + v24);
    if ( v25 < *(_WORD *)v20 )
      break;
    if ( v25 > *(_WORD *)v20 )
      goto LABEL_43;
    if ( v23 == 1 )
      goto LABEL_45;
    --v23;
    v20 = (_QWORD *)((char *)v20 + 2);
  }
  v10 = -1;
LABEL_43:
  if ( v10 < 0 )
LABEL_46:
    v11 = *(__int64 **)(v3 + 704);
LABEL_47:
  if ( v33 >= 8 )
    std::_Deallocate<16,0>(v31[0], 2 * v33 + 2);
  v33 = 7LL;
  v32 = 0LL;
  LOWORD(v31[0]) = 0;
  if ( v11 == *(__int64 **)(v3 + 704) )
  {
    if ( v3 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 32));
    return 2147943568LL;
  }
  else
  {
    v27 = (struct IApplicationSpecificEndpointInfo *)v11[8];
    if ( v27 )
    {
      *a2 = v27;
      v28 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details *__hidden, volatile int *))(*(_QWORD *)v27 + 8LL);
      if ( v28 == Microsoft::WRL::Details::SafeUnknownIncrementReference )
      {
        for ( i = *(_DWORD *)v27; *(_DWORD *)v27 != 0x7FFFFFFF; i = *(_DWORD *)v27 )
        {
          if ( i == _InterlockedCompareExchange((volatile signed __int32 *)v27, i + 1, i) )
            break;
        }
      }
      else
      {
        ((void (__fastcall *)(struct IApplicationSpecificEndpointInfo *))v28)(v27);
      }
    }
    else
    {
      *a2 = 0LL;
    }
    if ( v3 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 32));
    return 0LL;
  }
}
