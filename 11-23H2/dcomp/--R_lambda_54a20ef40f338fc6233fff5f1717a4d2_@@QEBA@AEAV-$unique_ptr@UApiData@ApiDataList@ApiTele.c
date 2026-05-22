/*
 * XREFs of ??R_lambda_54a20ef40f338fc6233fff5f1717a4d2_@@QEBA@AEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z @ 0x18009A6CC
 * Callers:
 *     ??R?$__func@V_lambda_54a20ef40f338fc6233fff5f1717a4d2_@@$$A6AXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z@__function@wistd@@UEAAXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@2@@Z @ 0x18009ABB0 (--R-$__func@V_lambda_54a20ef40f338fc6233fff5f1717a4d2_@@$$A6AXAEAV-$unique_ptr@UApiData@ApiDataL.c)
 * Callees:
 *     ?GetClassStringPointer@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEBGPEBG@Z @ 0x180064834 (-GetClassStringPointer@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEBGPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180069220 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800F6E54 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

_DWORD *__fastcall _lambda_54a20ef40f338fc6233fff5f1717a4d2_::operator()(__int64 a1, const unsigned __int16 ***a2)
{
  const unsigned __int16 *ClassStringPointer; // rax
  __int64 **v5; // rsi
  unsigned __int16 ***v6; // r14
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  signed __int64 v16; // r9
  __int16 v17; // ax
  char *v18; // rax
  int v19; // eax
  const char *v20; // r8
  rsize_t v21; // rdx
  char *v22; // rcx
  rsize_t v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int16 *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rax
  char *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  signed __int64 v34; // rax
  __int16 v35; // r9
  char *v36; // rax
  unsigned int v37; // r8d
  _DWORD *result; // rax
  unsigned int v39; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_DWORD *)(**(_QWORD **)a1 + 4LL * **(int **)(a1 + 8)) = _InterlockedExchange((volatile __int32 *)(*a2)[3], 0);
  ClassStringPointer = wil::details::ApiTelemetryLogger::ApiDataList::GetClassStringPointer(**a2);
  v5 = (__int64 **)(a1 + 24);
  v6 = (unsigned __int16 ***)(a1 + 16);
  if ( !ClassStringPointer )
    goto LABEL_19;
  v7 = StringCchCatW(**v6, **v5, ClassStringPointer + 1);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE3E,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/tracelogging.h",
      (const char *)(unsigned int)v7,
      v39);
  v8 = **v5;
  if ( (unsigned __int64)(v8 - 1) > 0x7FFFFFFE )
  {
    v11 = 2147942487LL;
    goto LABEL_48;
  }
  v9 = **v5;
  v10 = **v6;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = v9 == 0 ? 0x80070057 : 0;
  if ( v9 )
    v12 = v8 - v9;
  else
    v12 = 0LL;
  if ( !v9 )
    goto LABEL_48;
  v13 = (char *)&(**v6)[v12];
  v14 = v8 - v12;
  if ( v8 != v12 )
  {
    v15 = 2147483646LL;
    v16 = (char *)L"." - v13;
    do
    {
      if ( !v15 )
        break;
      v17 = *(_WORD *)&v13[v16];
      if ( !v17 )
        break;
      *(_WORD *)v13 = v17;
      --v15;
      v13 += 2;
      --v14;
    }
    while ( v14 );
  }
  v18 = v13 - 2;
  if ( v14 )
    v18 = v13;
  *(_WORD *)v18 = 0;
  v11 = v14 == 0 ? 0x8007007A : 0;
  if ( !v14 )
LABEL_48:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE3F,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/tracelogging.h",
      (const char *)v11,
      v39);
LABEL_19:
  v19 = StringCchCatW(**v6, **v5, (*a2)[1]);
  if ( v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE42,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/tracelogging.h",
      (const char *)(unsigned int)v19,
      v39);
  v20 = (const char *)(*a2)[2];
  v21 = **(_QWORD **)(a1 + 40);
  v22 = **(char ***)(a1 + 32);
  if ( v20 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v20[v23] );
    if ( strncat_s(v22, v21, v20, v23) )
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0xE45, v24, (const char *)1, v39);
  }
  else if ( strncat_s(v22, v21, "-", 1uLL) )
  {
    wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0xE49, v25, (const char *)1, v39);
  }
  if ( **(_DWORD **)(a1 + 8) != **(unsigned __int16 **)(a1 + 48) - 1 )
  {
    v26 = **v5;
    if ( (unsigned __int64)(v26 - 1) > 0x7FFFFFFE )
    {
      v29 = 2147942487LL;
    }
    else
    {
      v27 = **v5;
      v28 = **v6;
      do
      {
        if ( !*v28 )
          break;
        ++v28;
        --v27;
      }
      while ( v27 );
      v29 = v27 == 0 ? 0x80070057 : 0;
      if ( v27 )
        v30 = v26 - v27;
      else
        v30 = 0LL;
      if ( v27 )
      {
        v31 = (char *)&(**v6)[v30];
        v32 = v26 - v30;
        if ( v26 != v30 )
        {
          v33 = 2147483646LL;
          v34 = (char *)L"," - v31;
          do
          {
            if ( !v33 )
              break;
            v35 = *(_WORD *)&v31[v34];
            if ( !v35 )
              break;
            *(_WORD *)v31 = v35;
            --v33;
            v31 += 2;
            --v32;
          }
          while ( v32 );
        }
        v36 = v31 - 2;
        if ( v32 )
          v36 = v31;
        *(_WORD *)v36 = 0;
        v29 = v32 == 0 ? 0x8007007A : 0;
        if ( v32 )
        {
          if ( strncat_s(**(char ***)(a1 + 32), **(_QWORD **)(a1 + 40), ",", 1uLL) )
            wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0xE4F, v37, (const char *)1, v39);
          goto LABEL_44;
        }
      }
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE4E,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/tracelogging.h",
      (const char *)v29,
      v39);
  }
LABEL_44:
  result = *(_DWORD **)(a1 + 8);
  ++*result;
  return result;
}
