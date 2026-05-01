/*
 * XREFs of _lambda_0685ab581f2af4afff478aa1d8b72a5b_::_lambda_invoker_cdecl_ @ 0x1800907D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall lambda_0685ab581f2af4afff478aa1d8b72a5b_::_lambda_invoker_cdecl_(__int64 a1)
{
  const WCHAR *v1; // rdx
  const wchar_t *v2; // r9
  const wchar_t *v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // eax
  int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-29h] BYREF
  int *v13; // [rsp+60h] [rbp-9h]
  __int64 v14; // [rsp+68h] [rbp-1h]
  const wchar_t *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  int *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  const wchar_t *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  const WCHAR *v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_1807ABFF8 > 5 )
  {
    v1 = *(const WCHAR **)(a1 + 24);
    v2 = *(const wchar_t **)(a1 + 48);
    v3 = *(const wchar_t **)(a1 + 56);
    v10 = *(_DWORD *)(a1 + 64);
    v11 = *(_DWORD *)(a1 + 8);
    v4 = -1LL;
    if ( v1 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v1[v5] );
      v6 = 2 * v5 + 2;
    }
    else
    {
      v1 = &LocaleName;
      v6 = 2;
    }
    v23 = v1;
    v24 = v6;
    v25 = 0;
    if ( v2 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v2 + v7) );
      v8 = v7 + 1;
    }
    else
    {
      v2 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v8 = 1;
    }
    v21 = v8;
    v18 = &v10;
    v20 = v2;
    v22 = 0;
    v19 = 4LL;
    if ( v3 )
    {
      do
        ++v4;
      while ( *((_BYTE *)v3 + v4) );
      v9 = v4 + 1;
    }
    else
    {
      v3 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v9 = 1;
    }
    v16 = v9;
    v15 = v3;
    v13 = &v11;
    v17 = 0;
    v14 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1807ABFF8, (int)&dword_18069C5B3, 0, 0, 7u, &v12);
  }
}
